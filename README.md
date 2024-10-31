# Hashmap Implementation in C

I created a hashmap in the C language, which is based on an array and uses a linked list to handle collisions. This implementation allows for efficient insertion, deletion, and retrieval of key-value pairs.

## Features
- **Array-based storage**: The hashmap is implemented using an array where each index holds a linked list for managing multiple entries.
- **Collision handling**: A linked list is used at each array index to handle collisions, ensuring that multiple entries with the same hash can be stored and retrieved accurately.

## Requirements
- `gcc` (GNU Compiler Collection) is required to compile the C files.

## Usage

To run the hashmap, use the following commands:

```bash
gcc *.c       # Compiles all C files in the directory
./a.out       # Runs the compiled executable
