
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define RECORDS 6

int main()
{
	struct jb {
		char actor[25];
		struct jb *next;
	};
	struct jb *first_item;
	struct jb *current_item;
	struct jb *new_item;
	int index = 0;

	char *bonds[RECORDS] = {
		"Sean Connery",
		"David Niven",
		"George Lazenby",
		"Roger Moore",
		"Timothy Dalton",
		"Pierce Brosnan"
	}; 
	
	/*create the first structure in the list*/
	first_item = (struct jb *)malloc(sizeof(struct jb));
	current_item = first_item;
	
	/*fill the structures*/
	while(1)
	{
		strcpy(current_item->actor, bonds[index]);
		index++;
		if (index < RECORDS) {
			new_item = (struct jb *)malloc(sizeof(struct jb));
			current_item->next = new_item;
			current_item = new_item;
		}
		else {
			current_item->next = NULL;
			break;
		}
	}

	/*display the results*/
	current_item = first_item;
	index = 1;
	while (current_item) {
		printf("Structure %d: ", index++);
		printf("%s\n", current_item->actor);
		current_item = current_item->next;
	}

	return(0);

}


