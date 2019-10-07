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

int main(void) {
	puts("!!!Kick this into gear!!!");
	struct my_list temp;
	memcpy(temp.mydata.full_name,"tim g",sizeof(temp.mydata.full_name));
	temp.mydata.id=1000;

	//struct my_list *root=(struct my_list*)malloc(sizeof(struct my_list));
	struct my_list root;
	memset (&root,0,sizeof(struct my_list));

	add_to_list(&root,&temp);
	add_to_list(&root,&temp);
	free_all(&root);

	return EXIT_SUCCESS;
}
