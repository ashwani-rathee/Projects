//author:ashwani rathee
//date:18/12/19
#include<stdio.h>
#include<stdlib.h>
#include<string

//address intialization
struct Address
{
	char country[30];
	char city[30];
	char street[30];
	char addressField[30];
};
//struct A
struct A
{
    char symbol;			// 1 byte in memory
    //char charPadding[3];    // 3 bytes padding     
    int number;				// 4 bytes - no padding needed
    short id;				// 2 bytes in memory
	//char shortPadding[2];   // 2 bytes padding  
};
//employee data
struct Employee
{
	struct Address address;
	char name[30];
	int age;
};
//struct b
struct B
{
    int number;				// 4 bytes - no padding needed   
    short id;				// 2 bytes in memory
    char symbol;			// 1 byte in memory
	//char PADDING[1];		// 1 byte padding
};
int main(void)
{
/*	Allocate memory for our structure.
		On some compilers you can skip this and the declaration will look like:
		    struct Employee* worker;
		Anyway, it is good to know how the memory is allocated and freed.
	*/
    struct Employee* worker = (struct Employee*)malloc(sizeof(struct Employee));
	printf("The size of struct A is %d\n", sizeof(struct A));
	printf("The size of struct B is %d\n", sizeof(struct B));
    inputEmployee(worker);
    outputEmployee(*worker);
	free(worker);	// release the memory from our structure, as we don't need it anymore
	worker = '\0';	// set the pointer to NULL to avoid misuse of freed memory
 struct Employee e1;
 scanf("%c",e.name);
 return 0;
}
void inputEmployee(struct Employee* worker)
{
    char name[30];
    printf("==== Input Employee information ====\n");
    printf("Name = ");
    gets(name);
    strcpy(worker->name, name);
	inputAddress(&worker->address);
    printf("Age = ");
    scanf("%d", &worker->age);
    printf("..... End of input .....\n");
}

void inputAddress(struct Address* address)
{
    printf("Country = ");
	gets(address->country);
    printf("City = ");
	gets(address->city);
    printf("Street = ");
	gets(address->street);
    printf("additional address information: ");
	gets(address->addressField);
}

void outputEmployee(struct Employee worker)
{
    printf("==== Employee ====\n");
    printf("Name = %s\n", worker.name);
    printf("Age = %d\n", worker.age);
	outputAddress(worker.address);
    printf("..... End of Employee .....\n");
}

void outputAddress(struct Address address)
{
	printf("%s, %s, %s, %s\n", address.addressField, address.street, address.city, address.country);
}
struct A
{
    char symbol;			// 1 byte in memory
    //char charPadding[3];    // 3 bytes padding     
    int number;				// 4 bytes - no padding needed
    short id;				// 2 bytes in memory
	//char shortPadding[2];   // 2 bytes padding  
};

