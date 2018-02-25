typedef struct record
{
	char roll[9];
	char fname[20];
	char lname[20];
	char city[30];
	char phone[11];
	char email[20];
}student;
student getdata();
void putdata(student);

void adddata(student);
void displayfile();
int searchfile(char *);
void modifyfile(student,int);
