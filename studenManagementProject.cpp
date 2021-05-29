#include <iostream>
using namespace std;

string arr1[20], arr2[20], arr3[20], arr4[20], arr5[20];
int total=0;
void enter()
{
    int choice;
	cout<<"Enter number of students to be entered "<<endl;
	cin>>choice;
	
	if(total==0)
	{
		for(int i=0;i<choice;i++)
	{
		cout<<"\nEnter Student data "<<i+1<<endl<<endl;
		cout<<"Enter name : "<<endl;
		cin>>arr1[i];
		cout<<"Enter roll no: "<<endl;
		cin>>arr2[i];
		cout<<"Enter course name: "<<endl;
		cin>>arr3[i];
		cout<<"Enter class: "<<endl;
		cin>>arr4[i];
		cout<<"Enter contact: "<<endl;
		cin>>arr5[i];
}
}
	  else
	{
		for(int i=total;i<total+choice;i++)
	{
		cout<<"\nEnter Student data "<<i+1<<endl<<endl;
		cout<<"Enter name : "<<endl;
		cin>>arr1[i];
		cout<<"Enter roll no: "<<endl;
		cin>>arr2[i];
		cout<<"Enter course name: "<<endl;
		cin>>arr3[i];
		cout<<"Enter class: "<<endl;
		cin>>arr4[i];
		cout<<"Enter contact: "<<endl;
		cin>>arr5[i];
	}
	total=total+choice;
	}
	total=total+choice;
	}
	


void show()
{
	if(total==0)
	{
		cout<<"No data found "<<endl;

	}
	else
	{
		for(int i=0;i<total;i++)
	{
		cout<<"Data of Student "<<i+1<<endl<<endl;
		cout<<"Name: "<<arr1[i]<<endl;
		cout<<"Roll no: "<<arr2[i]<<endl;
		cout<<"Course: "<<arr3[i]<<endl;
		cout<<"Class: "<<arr4[i]<<endl;
		cout<<"Contact: "<<arr5[i]<<endl;

	}
	}
	
}

void search()
{
	if(total==0)
	{
		cout<<"No data found "<<endl;

	}
	else
	{
		string rollno;
	cout<<"Enter Roll No for which you want to search data "<<endl;
	cin>>rollno;
	for(int i=0;i<total;i++)
	{
		if(rollno==arr2[i])
		{
			cout<<"Data of Student "<<i+1<<endl<<endl;
			cout<<"Name: "<<arr1[i]<<endl;
			cout<<"Roll no: "<<arr2[i]<<endl;
			cout<<"Course: "<<arr3[i]<<endl;
			cout<<"Class: "<<arr4[i]<<endl;
			cout<<"Contact: "<<arr5[i]<<endl;

		}
	}
	}
	
	
}

void update()
{
	if(total==0)
	{
		cout<<"No data found "<<endl;

	}
	else{
		string rollno;
	cout<<"Enter Roll No for which you want to update data "<<endl;
	cin>>rollno;
	for(int i=0;i<total;i++)
	{
		if(rollno==arr2[i])
		{
			cout<<"Previous Data "<<endl<<endl;
			cout<<"Data of Student "<<i+1<<endl<<endl;
			cout<<"Name: "<<arr1[i]<<endl;
			cout<<"Roll no: "<<arr2[i]<<endl;
			cout<<"Course: "<<arr3[i]<<endl;
			cout<<"Class: "<<arr4[i]<<endl;
			cout<<"Contact: "<<arr5[i]<<endl;

			cout<<"\nEnter new Data "<<endl;
			cout<<"\nEnter name: "<<arr1[i]<<endl;
			cin>>arr1[i];
			cout<<"Enter roll no: "<<endl;
			cin>>arr2[i];
			cout<<"Enter course name: "<<endl;
			cin>>arr3[i];
			cout<<"Enter class: "<<endl;
			cin>>arr4[i];
			cout<<"Enter contact: "<<endl;
			cin>>arr5[i];


		}
	}
	
	}
	
}

void deleterecord()
{
	int a;
	cout<<"Press 1 to delete full record "<<endl;
	cout<<"Press 2 to delete specific record "<<endl;
	cin>>a;

	if(a==1){
		total=0;
		cout<<"All records are deleted "<<endl;

	}
	else if(a==2)
	{
		string rollno;
		cout<<"Enter the the role number which you want to detlete "<<endl;
		cin>>rollno;
		for(int i=1;i<total;i++)
		{
			if(rollno==arr2[i])
			{
				for(int j=i;j<total;j++)
				{
					arr1[j]=arr1[j+1];
					arr2[j]=arr2[j+1];
					arr3[j]=arr3[j+1];
					arr4[j]=arr4[j+1];
					arr5[j]=arr5[j+1];
				}
				total--;
				cout<<"your required record is deleted..";
			}
		}

	}
}



int main()
{	int value;
	while(true)
	{
	cout<<"Press 1 to enter the data "<<endl;
	cout<<"Press 2 to show the data "<<endl;
	cout<<"Press 3 to search the data "<<endl;
	cout<<"Press 4 to update the data "<<endl;
	cout<<"Press 5 to delete the data"<<endl;
	cout<<"Press 6 to exit"<<endl;
	cin>>value;

	switch(value)
	{
		case 1:
			enter();
			break;
		case 2:
			show();
			break;
		case 3:
			search();
			break;
		case 4:
			update();
			break;
		case 5:
			deleterecord();
			break;
		case 6:
			exit(0); 
			break;

		default:
			cout<<"Invalid Input "<<endl;

	}
	}
	

	return 0;

}