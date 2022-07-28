# 0x0B. C - malloc, free

## Lessons Learned

I've learned to dynamically allocate memory in my C program using standard library functions: malloc(), calloc(), realloc() and manualy free up space when the program no longer needs it using standard library: free().


## TASKS

0. Write a function that allocates memory using malloc.
 - Prototype:``` void *malloc_checked(unsigned int b);```
 - Returns a pointer to the allocated memory
 - if malloc fails, it should cause normal process termination with a status value of 98
1. Write a function that concatenates two strings.
 - Prototype:``` char *string_nconcat(char *s1, char *s2, unsigned int n);```
 - The returned pointer shall point to a newly allocated space in memory, which contains s1, fol     lowed by the first n bytes of s2, and null terminated
 - If the function fails, it should return NULL
 - If n is greater or equal to the length of s2 then use the entire string s2
 - if NULL is passed, treat it as an empty string
 - On success, the _strdup function returns a pointer to the duplicated string.
 - it returns NULL if insufficient memory was available
2. Write a function that allocates memory for an array, using malloc.
 - Prototype:``` void *_calloc(unsigned int nmemb, unsigned int size);```
 - The _calloc function allocates memory for an array of nmemb elements of size bytes each
	 and returns a pointer to the allocated memory.
 - The memory is set to zero
 - If nmemb or size is 0, then _calloc returns NULL
 - If malloc fails, then``` _calloc``` returns NULL
3. Write a function that creates an array of integers.
 - Prototype:``` int *array_range(int min, int max);```
 - The array created should contain all the values from min (included) to max (included), ordere	d from min to max
 - Return: the pointer to the newly created array
 - If min > max, return NULL
 - If malloc fails, return NULL


## Author
- Yonatan Addis
- github: [@Biyuktul](https://www.github.com/Biyuktul)
