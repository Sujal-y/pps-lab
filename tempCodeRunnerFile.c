#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_USERS 100
#define MAX_PATH 256
#define MAX_PERMISSIONS 256

typedef struct {
    char username[MAX_PATH];
    char path[MAX_PATH];
    char permissions[MAX_PERMISSIONS];
} FileSystemEntry;

typedef struct {
    char username[MAX_PATH];
} User;

User users[MAX_USERS];
FileSystemEntry fileSystem[MAX_USERS];
int userCount = 0;
int fileSystemCount = 0;

int findUserIndex(char *username) {
    for (int i = 0; i < userCount; i++) {
        if (strcmp(users[i].username, username) == 0) {
            return i;
        }
    }
    return -1;
}

int findFileSystemIndex(char *path) {
    for (int i = 0; i < fileSystemCount; i++) {
        if (strcmp(fileSystem[i].path, path) == 0) {
            return i;
        }
    }
    return -1;
}

int hasPermission(char *username, char *path, char *permission) {
    int index = findFileSystemIndex(path);
    if (index == -1) return 0;

    char *token = strtok(fileSystem[index].permissions, ";");
    while (token != NULL) {
        char *user = strtok(token, ":");
        char *perms = strtok(NULL, ":");
        if (strcmp(user, username) == 0) {
            if (strstr(perms, permission) != NULL) {
                return 1;
            }
        }
        token = strtok(NULL, ";");
    }
    return 0;
}

void createUser(char *username) {
    strcpy(users[userCount].username, username);
    userCount++;
}

void createFileSystemEntry(char *username, char *path, char *permissions) {
    strcpy(fileSystem[fileSystemCount].username, username);
    strcpy(fileSystem[fileSystemCount].path, path);
    strcpy(fileSystem[fileSystemCount].permissions, permissions);
    fileSystemCount++;
}

void handleCreateFile(char *username, char *path, char *permissions) {
    createFileSystemEntry(username, path, permissions);
    printf("SUCCESS\n");
}

void handleCreateDir(char *username, char *path, char *permissions) {
    createFileSystemEntry(username, path, permissions);
    printf("SUCCESS\n");
}

void handleReadFile(char *username, char *path) {
    if (hasPermission(username, path, "R")) {
        printf("SUCCESS\n");
    } else {
        printf("DENY\n");
    }
}

void handleWriteFile(char *username, char *path) {
    if (hasPermission(username, path, "W")) {
        printf("SUCCESS\n");
    } else {
        printf("DENY\n");
    }
}

void handleListDir(char *username, char *path) {
    if (hasPermission(username, path, "X")) {
        printf("SUCCESS\n");
    } else {
        printf("DENY\n");
    }
}

void handleDelete(char *username, char *path) {
    if (hasPermission(username, path, "W")) {
        int index = findFileSystemIndex(path);
        if (index != -1) {
            for (int i = index; i < fileSystemCount - 1; i++) {
                fileSystem[i] = fileSystem[i + 1];
            }
            fileSystemCount--;
            printf("SUCCESS\n");
        } else {
            printf("DENY\n");
        }
    } else {
        printf("DENY\n");
    }
}

int main() {
    int U, N;
    char username[MAX_PATH], path[MAX_PATH], permissions[MAX_PERMISSIONS];
    char operation[MAX_PATH];

    scanf("%d", &U);
    for (int i = 0; i < U; i++) {
        scanf("%s", username);
        createUser(username);
    }

    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        scanf("%s", operation);
        if (strcmp(operation, "CREATE_FILE") == 0) {
            scanf("%s %s %s", username, path, permissions);
            handleCreateFile(username, path, permissions);
        } else if (strcmp(operation, "CREATE_DIR") == 0) {
            scanf("%s %s %s", username, path, permissions);
            handleCreateDir(username, path, permissions);
        } else if (strcmp(operation, "READ_FILE") == 0) {
            scanf("%s %s", username, path);
            handleReadFile(username, path);
        } else if (strcmp(operation, "WRITE_FILE") == 0) {
            scanf("%s %s", username, path);
            handleWriteFile(username, path);
        } else if (strcmp(operation, "LIST_DIR") == 0) {
            scanf("%s %s", username, path);
            handleListDir(username, path);
        } else if (strcmp(operation, "DELETE") == 0) {
            scanf("%s %s", username, path);
            handleDelete(username, path);
        }
    }

    return 0;
}