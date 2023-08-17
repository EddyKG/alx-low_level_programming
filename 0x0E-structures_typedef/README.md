C - Structures, typedef

1. A new type struct dog with the following elements:
name, type = char *
age, type = float
owner, type = char *

2. A function that initialize a variable of type struct dog
Prototype: void init_dog(struct dog *d, char *name, float age, char *owner);

3. A function that prints a struct dog
Prototype: void print_dog(struct dog *d);

4. A new type dog_t as a new name for the type struct dog.
Prototype: dog_t *new_dog(char *name, float age, char *owner);

5. A function that creates a new dog.
Prototype: dog_t *new_dog(char *name, float age, char *owner);

6. a function that frees dogs.
Prototype: void free_dog(dog_t *d);
