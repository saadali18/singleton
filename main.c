#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int data;
} Singleton;

Singleton* instance = NULL;

Singleton* getSingletonInstance() {
    if (instance == NULL) {
        instance = (Singleton*)malloc(sizeof(Singleton));
        instance->data = 0;
    }
    return instance;
}

int main() {
    Singleton* singleton = getSingletonInstance();
    printf("Singleton data: %d\n", singleton->data);

    singleton->data = 42;

    Singleton* anotherSingleton = getSingletonInstance();
    printf("Singleton data: %d\n", anotherSingleton->data);

    return 0;
}
