#ifndef _SORT_H_
#define _SORT_H_
#include <stdio.h>
#include <stdlib.h>


/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

/** Prototypes1 */

void print_array(const int *array, size_t size);
void print_list(const listint_t *list);

/** functions */
void bubble_sort(int *array, size_t size);
int len_list(listint_t *h);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
void quick_recursion(int *array, int left, int right, size_t size);
int partition(int *array, int left, int right, size_t size);
void shell_sort(int *array, size_t size);
void switch_nodes(listint_t **list, listint_t **p);
void cocktail_sort_list(listint_t **list);
void counting_sort(int *array, size_t size);
void merge_sort(int *array, size_t size);
void merge_recursion(int *arr, int *array, size_t left, size_t right);
void merge_subarray(int *arr, int *array, size_t left,
		size_t middle, size_t right);
void heap_sort(int *array, size_t size);
void heapify(int *array, size_t s, size_t root, size_t size);
void radix_sort(int *array, size_t size);
void count_sort_LSD(int *array, size_t size, size_t lsd);
void quick_sort_hoare(int *array, size_t size);
void bitonic_sort(int *array, size_t size);
void bitonic_recursion(int *array, int l, int r, int direction, size_t size);
void bitonic_merge(int *array, int l, int r, int direction);


void switch_nodes(listint_t **list, listint_t **p);
void merge_recursion(int *arr, int *array, size_t left, size_t right);
void split(int *array, int *buff, int min, int max, int size);
void printcheck(int *array, int r1, int r2);
void merge(int *array, int *buff, int minL, int maxL, int minR, int maxR);
void copy(int *src, int *dst, int size);
void swapint(int *l, int *r);
void b_merge(int *array, int low, int count, int dir, size_t size);
void b_sort(int *array, int low, int count, int dir, size_t size);

void hoare_qsort(int *array, int low, int high, size_t size);
int partition(int *array, int low, int high, size_t size);
void swap(int *a, int *b);
void stupify(int *array, int heap, int i, int size);
void count_sort_LSD(int *array, size_t size, size_t lsd);



#endif
