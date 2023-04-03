"malloc" and "free" are two functions in the C programming language that are used to dynamically allocate and deallocate memory on the heap.

The "malloc" function is used to allocate a block of memory on the heap. It takes a single argument, the number of bytes to allocate, and returns a pointer to the beginning of the block of memory. If the allocation is successful, "malloc" returns a valid pointer. If the allocation fails, "malloc" returns "NULL".

The "free" function is used to deallocate memory that was previously allocated with "malloc". It takes a single argument, a pointer to the beginning of the block of memory to deallocate. When "free" is called, the memory block is returned to the heap and can be used for future allocations.

It's important to note that "free" only works on pointers that were previously allocated with "malloc" (or similar functions like "calloc" and "realloc"). Attempting to free a pointer that was not allocated with "malloc" (or a related function) can lead to undefined behavior.

Also, it's important to make sure that memory allocated with "malloc" is eventually freed with "free" to avoid memory leaks. Memory leaks occur when memory is allocated but never freed, leading to a loss of available memory over time.