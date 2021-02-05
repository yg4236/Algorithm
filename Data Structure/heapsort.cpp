#include <stdio.h>
#include <stdlib.h>
#define MAX_ELEMENT 100

//structure
typedef struct {
	int heap[MAX_ELEMENT];
	int heap_size;
}heapType;

//createHeap
heapType* createHeap() {
	heapType* h = (heapType*)malloc(sizeof(heapType));
	h->heap_size = 0;
	return h;
}

//insert item into the heap
void insertHeap(heapType* h, int item) {
	h->heap_size++;
	int i;
	i = h->heap_size;

	while ((i != 1) && (item > h->heap[i / 2]))
	{
		h->heap[i] = h->heap[i / 2];
		i /= 2;
	}
	h->heap[i] = item;
}

//get the root node of the heap and adjust the heap
int deleteHeap(heapType* h)
{
	int parent, child;
	int item, temp;

	item = h->heap[1];

	temp = h->heap[h->heap_size];
	h->heap_size = h->heap_size - 1;

	parent = 1;
	child = 2;

	while (child <= h->heap_size)
	{
		if ((child < h->heap_size) && (h->heap[child]) < h->heap[child + 1])
			child++;
		if (temp >= h->heap[child])	break;
		else {
			h->heap[parent] = h->heap[child];
			parent = child;
			child += 2;
		}
	}
	h->heap[parent] = temp;

	return item;
}

//print out all items in the heap
void printHeap(heapType* h) {
	int i;
	printf("Heap : ");
	for (i = 1;i <= h->heap_size;i++)
		printf("[%d] ", h->heap[i]);
}

void adjust(int list[], int root, int n)
{
	int child, rootkey;
	
	rootkey = list[root];
	child = 2 * root;
	while (child <= n) {
		if (child < n && list[child] < list[child + 1])
			child++;
		if (rootkey > list[child])
			break;
		else {
			list[child / 2] = list[child];
			child *= 2;
		}
	}
	list[child / 2] = rootkey;
}

void heapsort(int list[], int n)
{
	int i, j;
	int temp;
	//for (i = n / 2;i > 0;i--)
	//	adjust(list, i, n);
	for (i = n - 1;i > 0;i--)
	{
		temp = list[1];
		list[1] = list[i + 1];
		list[i + 1] = temp;
		adjust(list, 1, i);
	}
}

void main() {
	int i, n, item;
	heapType* heap = createHeap();
	insertHeap(heap, 5);
	insertHeap(heap, 1);
	insertHeap(heap, 11);
	insertHeap(heap, 15);
	insertHeap(heap, 19);
	insertHeap(heap, 26);
	insertHeap(heap, 77);
	insertHeap(heap, 61);
	insertHeap(heap, 59);
	insertHeap(heap, 48);


	printHeap(heap);
	printf("\n==========HEAP SORT===========\n");
	n = heap->heap_size;

	heapsort(heap->heap, n);
	printHeap(heap);
	/*for (i = 1;i <= n;i++) {
		item = deleteHeap(heap);
		printf("\n delete : [%d] --> ", item);
		printHeap(heap);
	}*/

	
}