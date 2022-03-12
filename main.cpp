#include <bits/stdc++.h>
using namespace std;
struct employee
{
    int eno;
    string ename;
    string job;
    float salary;
    float bonus;
    float total_salary;
};
void get_date(employee arr[], int size);
void set_bonus(employee &e,float percent);
void print(employee arr[],int size);
int main(){
    employee emps [5];
    get_date(emps,5);
    set_bonus(emps[1],5);
    print(emps , 5);

}
void get_date(employee arr[], int size)
{
    for (int i=0; i<size;i++)
    {
        cout <<"Enter employee number, emp_name , job "<< i+1 <<"\n";
        cin>> arr[i].eno>> arr[i].ename>> arr[i].job;
        if(arr[i].job=="Manager")
            arr[i].salary= 5000;
        else if (arr[i].job=="Engineer")
            arr[i].salary= 3000;
        else if (arr[i].job=="Clerk")
            arr[i].salary= 2000;
        else
            arr[i].salary= 1000;
    }
}
void set_bonus(employee &e,float percent)
{
    e.bonus=e.salary*percent;
}
void print(employee arr[],int size)
{
    for (int i=0;i<size;i++) {
        cout<<"Emp no = "<<arr[i].eno<<"\n";
        cout<<"Emp name = "<<arr[i].ename<<"\n";
        cout<<"Emp job = "<<arr[i].job<<"\n";
        cout<<"Emp salary = "<<arr[i].salary<<"\n";
        cout<<"Emp bonus = "<<arr[i].bonus<<"\n";
        cout<<"Emp Total salary = "<<arr[i].salary+arr[i].bonus<<"\n";
        cout<<"********************************* \n";
    }
}