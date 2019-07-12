#include <stdio.h>
#include <stdlib.h>
typedef struct node Node;

struct node
{
	int addr;
	int data;
	int next;
}llist[100005];

int head, tail, first;
int reverse(int head, int n);

int main()
{
	int N, K;
	int i, j, address;
	int tmp;

	scanf("%d%d%d", &first, &N, &K);
	for (i = 0; i < N; i++)
	{
		scanf("%d", &address);
		scanf("%d%d", &llist[address].data, &llist[address].next);
	}

	N = 0;
	tmp = first;
	while (tmp != -1)
	{
		tmp = llist[tmp].next;
		N++;
	}

	if (K != 1)
	{
		head = first;
		tail = -2;
		head = reverse(head, K);
		for (i = 1; i < N / K; i++)
			head = reverse(head, K);
		if (K*(N / K) < N)
			llist[tail].next = head;
		else
			llist[tail].next = -1;
	}
	
	tmp = first;
	while (llist[tmp].next != -1)
	{
		printf("%.5d %d %.5d\n", tmp, llist[tmp].data, llist[tmp].next);
		tmp = llist[tmp].next;
	}
	printf("%.5d %d %d\n", tmp, llist[tmp].data, llist[tmp].next);

	return 0;
}

int reverse(int head, int n)
{
	int cur, temp, temptail;
	if (n == 1)
		return llist[head].next;
	else if (n == 2)
	{
		cur = llist[head].next;
		temp = llist[cur].next;
		llist[cur].next = head;
		if (tail != -2)
			llist[tail].next = cur;
		else
				first = cur;
		tail = head;
		return temp;
	}
	else
	{
		cur = llist[head].next;
		temptail = head;
		for (int j = 1; j < n; j++)
		{
			temp = llist[cur].next;
			llist[cur].next = head;
			head = cur;
			cur = temp;
		}
		if (tail != -2)
			llist[tail].next = head;
		else
			first = head;
		tail = temptail;
		return temp;
	}
}
