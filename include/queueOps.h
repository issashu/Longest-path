#ifndef QUEUEOPS_H
#define QUEUEOPS_H

#include <stdbool.h>

/*
Enqueue- adding an element in the queue if there is space in the queue. Can be done only at the end.
Dequeue- Removing elements from a queue if there are any elements in the queue. Can be done only at the front
Front- get the first item from the queue.
Rear- get the last item from the queue.
isEmpty- checks if the queue is empty.

Important to note: Since this is list, back is at the end of the list and front in the beginning.
That way we take out and add elements at O(1) complexity.
*/

typedef struct qNode qNode;
typedef struct queue queue;

qNode* NodeInit(char keyValue, int row, int col);
char getValue(qNode *baseNode);
int getRow(qNode *baseNode);
int getCol(qNode *baseNode);
void setValue(qNode *baseNode, char keyValue);
void setRow(qNode *baseNode, int row);
void setCol(qNode *baseNode, int col);

queue* QueueInit();
void Enqueue(queue *baseQueue, qNode *baseNode);
void Dequeue(queue *baseQueue);
bool isEmpty(queue *baseQueue);
qNode* getFront(queue *baseQueue);
qNode* getBack(queue *baseQueue);
int getSize(queue *baseQueue);
void setQueueEnds(queue *baseQueue);
void printQueue(queue *baseQueue);

#endif /* QUEUEOPS_H */