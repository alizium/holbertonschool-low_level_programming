# Singly Linked Lists

## Overview
A **singly linked list** is a data structure consisting of nodes, where each node contains:
- **Data**: The value stored in the node.
- **Pointer**: A reference to the next node in the list.

Unlike arrays, singly linked lists do not require contiguous memory allocation, allowing dynamic resizing without memory reallocation.

## Structure of a Node
In C, a singly linked list node can be defined as:

```c
struct Node {
    int data;
    struct Node* next;
};
```

## Operations
### 1. Creating a Node
```c
struct Node* createNode(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;
    return newNode;
}
```

### 2. Inserting a Node at the Beginning
```c
void insertAtBeginning(struct Node** head, int value) {
    struct Node* newNode = createNode(value);
    newNode->next = *head;
    *head = newNode;
}
```

### 3. Inserting a Node at the End
```c
void insertAtEnd(struct Node** head, int value) {
    struct Node* newNode = createNode(value);
    if (*head == NULL) {
        *head = newNode;
        return;
    }
    struct Node* temp = *head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
}
```

### 4. Deleting a Node
```c
void deleteNode(struct Node** head, int key) {
    struct Node* temp = *head, *prev = NULL;
    if (temp != NULL && temp->data == key) {
        *head = temp->next;
        free(temp);
        return;
    }
    while (temp != NULL && temp->data != key) {
        prev = temp;
        temp = temp->next;
    }
    if (temp == NULL) return;
    prev->next = temp->next;
    free(temp);
}
```

### 5. Searching for a Node
```c
struct Node* search(struct Node* head, int key) {
    struct Node* temp = head;
    while (temp != NULL) {
        if (temp->data == key)
            return temp;
        temp = temp->next;
    }
    return NULL;
}
```

### 6. Displaying the List
```c
void printList(struct Node* head) {
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}
```

## Advantages
- **Dynamic Size**: No need to define a fixed size.
- **Efficient Insertions/Deletions**: No need to shift elements like in an array.

## Disadvantages
- **Extra Memory**: Each node requires additional memory for storing the pointer.
- **Slower Access**: Linear traversal is required to find elements.

## Conclusion
Singly linked lists are useful for applications that require dynamic memory allocation and frequent insertions/deletions. However, for direct access needs, arrays might be a better choice.

---

Would you like any modifications or additional sections?

