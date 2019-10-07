/*
 ============================================================================
 Name        : LinkedList.c
 Author      : Tim Goldshmit
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "mylinkedlist.h"

int main(void)
{
	puts("!!!Kick this into gear!!!");
	struct my_list temp;
	memcpy(temp.mydata.full_name,"tim g",sizeof(temp.mydata.full_name));
	temp.mydata.id=1000;

	// create the root or the first node
	struct my_list root;
	memset (&root,0,sizeof(struct my_list));

	int i;
	for (i=1;i<10;i++)
	{
		temp.mydata.id=i;
		add_to_list(&root,&temp);
	}

	struct my_list *p;
	p=&root;

	remove_n_from_list(p,5);

	free_all(&root);

	return EXIT_SUCCESS;
}
