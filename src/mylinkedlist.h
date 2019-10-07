/*
 * mylinkedlist.h
 *
 *  Created on: Oct 6, 2019
 *      Author: timg
 */

#ifndef MYLINKEDLIST_H_
#define MYLINKEDLIST_H_

struct my_data
{
	char full_name[50];
	int id;
};

struct my_list
{
//	struct my_list *head;
	struct my_list *prev_node;
	struct my_list *next_node;
	struct my_data mydata;
};

int add_to_list(struct my_list *current_list,struct my_list *new_entry);
int free_all(struct my_list *any_entry)
#endif /* MYLINKEDLIST_H_ */
