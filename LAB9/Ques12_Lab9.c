#include <stdio.h>

int generate_unique_id() {
    static int _id = 0;  
    _id += 1;
    return _id;
}

int main() {
    for (int i = 0; i < 10; i++) {
        int unique_id = generate_unique_id();
        printf("Unique ID: %d\n", unique_id);
    }
    return 0;
}
