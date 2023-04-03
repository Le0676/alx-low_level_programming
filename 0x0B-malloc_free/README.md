"malloc" and "free" are functions in C programming language that are used to dynamically allocate and deallocate memory during runtime.

"malloc" is used to allocate a block of memory of a specified size in bytes. It returns a pointer to the beginning of the allocated memory block.

"free" is used to deallocate memory that was previously allocated with "malloc". When you're done with the dynamically allocated memory, you should call "free" to release it.

It's important to note that "malloc" and "free" should be used carefully, as incorrect usage can lead to memory leaks and program crashes. Always make sure to properly deallocate memory that you allocate with "malloc" using "free".