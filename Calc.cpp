#include <iostream>
#include <cmath>
#include <conio.h>
#include <unistd.h>

using namespace std;
class Basicfunc
{
	private:
		float sum,sub_sum;
		int size;
	public:
		void Addition()
		{
			sleep(1);
			cout<<"How many number do you want to add? || Value must be greater then 1";
			cout<<endl;
			cin>>size;
			system("CLS");
			cout<<size / 1<<endl;
			if(size > 1)
			{
				
				float array[size];
				for(int i = 0; i<size;i++)
				{
					system("CLS");
					cout<<"Enter Number "<<i+1<<endl;
					float num;
					
					cin>>num;
					
					
					array[i] = num;
				}
				for(int i = 0; i<size;i++)
				{
					system("CLS");
					sum += array[i];
				}
				cout<<"Total Sum of all numbers is: "<<sum<<endl;
			}
			else
			{
				
				system("CLS");
				cout<<"Please enter a value greater then 1"<<endl;
				sleep(1);
				
				Addition();
			}
				
				
		}
		void Subtraction ()
		{
			cout<<"Enter Initial Value"<<endl;
			float initial;
			cin>>initial;
			sleep(1);
			cout<<"How many number do you want to Subtract? || Value must be greater then 1";
			cout<<endl;
			cin>>size;
			system("CLS");
			cout<<size / 1<<endl;
			sub_sum = initial;
			if(size > 1)
			{
				
				float array[size];
				for(int i = 0; i<size;i++)
				{
					system("CLS");
					cout<<"Enter Number "<<i+1<<endl;
					float num;
					
					cin>>num;
					
					
					array[i] = num;
				}
				
				for(int i = 0; i<size;i++)
				{
					system("CLS");
					cout<<array[i]<<endl;
					sub_sum -= array[i];
				}
				cout<<"Total Difference of all numbers is: "<<sub_sum<<endl;
			}
			else
			{
				
				system("CLS");
				cout<<"Please enter a value greater then 1"<<endl;
				sleep(1);
				
				Subtraction();
			}
				
				
		}
		
};
void Choice_func()
{
	Basicfunc basic_obj;
	int choice;
	cout<<"Please select one of following:"<<endl;
	cout<<"1 For Addition"<<endl;
	cout<<"2 For Subtraction"<<endl;
	
	
	cin>>choice;
	if(choice == 1)
	{
		basic_obj.Addition();
		
	}
	else if(choice == 2)
	{
		basic_obj.Subtraction();
	}
	else
	{
		system("CLS");
		cout<<"Wrong Choice!"<<endl;
		sleep(1);
		system("CLS");
		Choice_func();
	}
}
int main()
{
	
	Choice_func();
	
	return 0;
}

