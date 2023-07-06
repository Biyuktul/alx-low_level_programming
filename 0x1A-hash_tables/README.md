# Hashtable

This directory contains the implementation of a hashtable data structure.

## Overview

A hashtable, also known as a hash map, is a data structure that allows efficient storage and retrieval of key-value pairs. It uses a hash function to convert keys into array indices, where the corresponding values are stored.

This hashtable implementation provides the following features:

- **Key-Value Storage**: You can store any type of value associated with a unique key.
- **Efficient Lookup**: Retrieving a value based on its key is fast on average, even with large amounts of data.
- **Collision Handling**: It handles hash collisions by using techniques like separate chaining or open addressing.
- **Resizable**: The hashtable can dynamically resize itself to maintain performance as the number of entries increases.

## Usage

To use the hashtable implementation, follow these steps:

1. Include the `hash_table.h` header file in your project.
2. Create a new hashtable using the `hash_table_create()` function and pass size to it.
3. Add key-value pairs using the `hash_table_set()` function.
4. Retrieve values using the `hash_table_get()` function, providing the corresponding key.
5. print the hashtable using the `hash_table_print()` function passing the pointer to the hash table.
6. Optionally, delete the hashtable with the `hash_table_delete()` function passing the pointer to the hash table when you are done.


## Author
Yonatan Addis. <br>
LinkedIn: [Click here](https://www.linkedin.com/in/yonatan-addis-15a86a213/)
