#include<bits/stdc++.h>
using namespace std;
class program{
	public:
	int salary=20000;
};
class employee:public program{
	public:
	int bonus=5000;
};
int main(){
	employee emp;
	cout<<"Salary :- "<<emp.salary<<endl<<"Bonus :- "<<emp.bonus;
}
