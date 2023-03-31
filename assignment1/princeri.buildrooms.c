#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#include <sys/stat.h>

int* makeRooms();

bool roomExist(int list[10],int x);

int* setType(int* name);

struct room initRoom(int name,int type);

void makeFolder(struct room* array);

struct room
	{
	char const* name;
	char const* type;
	struct room* c1;
	struct room* c2;
	struct room* c3;
	struct room* c4;
	struct room* c5;
	struct room* c6;
};

int main(){
	struct room arr_room[7];
	srand(time(NULL));
	int* names = makeRooms();
	int* types = setType(names);
	for( int i = 0; i < 7; i++)
	{
		printf("names:%d \n",names[i]);
		arr_room[i] = initRoom(names[i],types[i]);
		printf("Type: %s\n", arr_room[i].type);
		printf("Name: %s\n", arr_room[i].name);
	}
	makeFolder(arr_room);
	
	return 0;
}

void makeFolder(struct room* array)
{
	int num = rand() %1000000 + 1;
	char number[50];
	sprintf(number,"princeri.rooms.%d", num);
	int roomfolder = mkdir(number);
	FILE* file_descriptor;
	for( int i = 0; i < 7; i++)
	{
		char file[260];
		memset(file, "\0", 50);
		char const * names = array[i].name;
		sprintf(file, "%s/%s", string, names);
		file_descriptor = fopen(newfile, "w");
		if( file_descriptor == NULL)
		{
			printf("Error: creating file\n");
			exit(1);
		}
	}
	char name[260];
	memset(name, "\0", 40);
	sprintf(name.strlen(name) * sizeof(char), 1, file_descriptor);
	char typel[60];
	memset(type, "\0", 60);
	char const * type = array[i].type;
	sprintf(type, "room Type: %s\n", type);
	fwrite(type,strlen(type) * sizeof(char), 1, file_descriptor);
	fclose(file_descriptor);
	}
	return;	
}

struct room initRoom(int name, int type)
{
	struct room r;
	char const* name1 = "king";
	char const* name2 = "penguin";
	char const* name3 = "knife";
	char const* name4 = "light";
	char const* name5 = "dark";
	char const* name6 = "fire";
	char const* name7 = "water";
	char const* name8 = "fun";
	char const* name9 = "joke";
	char const* name10 = "air";
//	printf("Room Named\n");

	if( name == 1)
		r.name = name1;
	else if( name == 2)
		r.name = name2;
	else if( name == 3)
		r.name = name3;
	else if( name == 4)
		r.name = name4;
	else if( name == 5)
		r.name = name5;
	else if( name == 6)
		r.name = name6;
	else if( name == 7)
		r.name = name7;
	else if( name == 8)
		r.name = name8;
	else if( name == 9)
		r.name = name9;
	else if( name == 10)
		r.name = name10;

//	printf("Type set\n");

	if (type == 1)
		r.type = "START_ROOM";
	else if (type == 2)
		r.type = "MID_ROOM";
	else if (type == 3)
		r.type = "END_ROOM";
	
//	printf("Connections set NULL\n");
	
	r.c1 == NULL;
	r.c2 == NULL;
	r.c3 == NULL;
	r.c4 == NULL;
	r.c5 == NULL;
	r.c6 == NULL;

	return r;	
}

int* makeRooms(){
	char const * name1 = "king";
	char const * name2 = "penguin";
	char const* name3 = "knife";
	char const* name4 = "fun";
	char const* name5 = "fire";
	char const* name6 = "broken";
	char const* name7 = "escape";
	char const* name8 = "light";
	char const* name9 = "dark";
	char const* name10 = "snow";
	int list[7] = {0,0,0,0,0,0,0}; 					//this stores which room has already been chosen so there are no duplicates
	//struct room* rooms[7];
	//int num = rand() % 10 + 1;
	for( int i = 0; i < 7;)
	{
		int num = rand() % 10 + 1;
		bool check = true;
		if (i == 0)
		{
			check = false;
			printf("%d has been added\n",num);
		}
		else
		{
			check = roomExist(list,num);
		}
		
		if (num == 1 && check == false)
		{
			//struct room r1;
			//r1.name = name1;
			//rooms[i] = &r1;
			list[i] = num;
			i++;
			
		}
		else if (num == 2 && check == false)
		{
			//struct room r2;
			//r2.name = name2;
			//rooms[i] = &r2;
			list[i] = num;
			i++;
		}
		else if (num == 3 && check  == false)
		{
			//struct room r3;
			//r3.name = name3;
			//rooms[i] = &r3;
			list[i] = num;
			i++;
		}
		else if (num == 4 && check  == false)
		{
			//struct room r4;
			//r4.name = name4;
			//rooms[i] = &r4;
			list[i] = num;
			i++;
		}
		else if (num == 5 && check == false)
		{
			//struct room r5;
			//r5.name = name5;
			//rooms[i] = &r5;
			list[i] = num;
			i++;
		}
		else if (num == 6 && check == false)
		{
			//struct room r6;
			//r6.name = name6;
			//rooms[i] = &r6;
			list[i] = num;
			i++;
		}
		else if (num == 7 && check == false)
		{
			//struct room r7;
			//r7.name = name7;
			//rooms[i] = &r7;
			list[i] = num;
			i++;
		}
		else if (num == 8 && check == false)
		{
			//struct room r8;
			//r8.name = name8;
			//rooms[i] = &r8;
			list[i] = num;
			i++;
		}
		else if (num == 9 && check == false)
		{
			//struct room r9;
			//r9.name = name9;
			//rooms[i] = &r9;
			list[i] = num;
			i++;
		}
		else if (num == 10 && check ==false)
		{
			//struct room r10;
			//r10.name = name10;
			//rooms[i] = &r10;
			list[i] = num;
			i++;
		}
	//	printf(" %d", num);
	}
	return list;
}


int* setType(int* name)
{
	int num1 = rand() % 7;
	int type[7] = {0,0,0,0,0,0,0};
	type[num1] = 1;
	int num2 = rand() % 7;
	while( num1 == num2)
	{
		num2 = rand() % 7;
	}
	type[num2] = 3;
	for(int i = 0; i < 7; i++)
	{
		if( type[i] != 1 && type[i] != 3 )
		{
			type[i] = 2;
		}
	}
	return type;
}

bool roomExist(int list[10], int x){
	int count = 0;
	for ( int i = 0; list[i] != 0; i++)
	{
		if (list[i] != 0)
		{
			count++;
		}
	}
	for ( int i = 0; i < count; i++)
	{
		if (x == list[i])
		{
			return true;
//			printf("%d exists already\n",x);
		}
	}
	printf("%d has been added\n",x);
	return false;
}
