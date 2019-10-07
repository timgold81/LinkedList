/*
 * mylinkedlist.c
 *
 *  Created on: Oct 6, 2019
 *      Author: timg
 */

#include <stdio.h>
#include "mylinkedlist.h"
#include <stdlib.h>
#include <string.h>

/**
 * Add to the end if the list
 * current_list - any member of the list
 * new_entry - data to enter. the pointers do not matter, it only copies the data
 */
int add_to_list(struct my_list *current_list,struct my_list *new_entry)
{
	//In case not at the end of the node. Move to the last node
	while (!current_list->next_node==NULL)
	{
		current_list=current_list->next_node;
	}

	struct my_list *new_node=(struct my_list*)malloc(sizeof(struct my_list));
	memset (new_node,0,sizeof(struct my_list));
	current_list->next_node=new_node;
	new_node->prev_node=current_list;
	memcpy(&new_node->mydata,&new_entry->mydata,sizeof(struct my_data));
	return 0;
}

/**
 * Frees all of the memory of the linked list
 */
int free_all(struct my_list *any_entry)
{
	// get to the first node
	while (!any_entry->prev_node==NULL)
		any_entry=any_entry->prev_node;

	// free nodes one by one
	struct my_list *temp;
	while (!any_entry==NULL)
	{
		temp=any_entry->next_node;
		free(any_entry);
		any_entry=temp;
	}


	return 0;
}
