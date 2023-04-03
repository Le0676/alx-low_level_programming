A singly linked list is a data structure used in computer programming to store a sequence of elements, called nodes. Each node contains a value or data and a pointer to the next node in the list. The first node of the list is called the head, while the last node has a null or empty pointer as its next value.

Singly linked lists are commonly used because they are relatively simple to implement and provide efficient insertion and deletion operations. However, they have some disadvantages such as inefficient searching and accessing elements randomly.

Note that in order to create a new node, we allocate memory for it using malloc. When we're done with the list, we should also deallocate the memory using free.