#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
#include<stdbool.h>
#include<string.h>
#include "OpenHashing.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	Dictionary d;
	int size;
	bool b;
	
	StudentType test = addStudent("19123123", addName("Gran","---","Sabandal"),'F',addDate(1,1,1999),"BS CS",3);
	
	printf("Input size: ");
	scanf("%d",&size);
	initDictionary(&d, size);
	printf("Visualizing after initializing");
	visualizeStudents(d);
	
	printf("==================== ADDING ONE ELEMENT ====================\n");
	b=addElement(&d, addStudent("17100596",addName("Sabrinah Yonell","Chua","Yap"),'F',addDate(6,16,2000),"BS CS",3));
	visualizeStudents(d);
	
	printf("\n==================== ADDING TWO MORE ====================\n");
	b=addElement(&d, addStudent("17100000", addName("Noel","---","Tagpuno"),'M',addDate(1,1,2000),"BS CS",3));
	b=addElement(&d, test);
	visualizeStudents(d);
	
	printf("\n==================== DELETING ONE STUDENT ====================\n");
	b=deleteElement(&d, test);
	visualizeStudents(d);
	
	return 0;
}
