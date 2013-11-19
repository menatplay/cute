#include <iostream>
using namespace std;
struct Student{
	char name[20];
	int number;
	int score;
}students[100];
int Count = 0;//计数器
void input(struct Student &student){
	bool flag=true;
	while(flag){
cout<<"姓名：";
if(cin>>student.name==0){
cout<<"请正确输入！"<<endl;cin.clear();cin.sync();continue;
}
cout<<"学号：";
if(cin>>student.number==0){
cout<<"请正确输入！"<<endl;cin.clear();cin.sync();continue;
}
else{flag=false;}
	}
}
int findname(char*name){
	int i;
	for(i=0;i<Count;i++){
		if(strcmp(students[i].name,name) == 0)//调用字符比较函数，查找是否姓名相符
		{
			break;
		}
	}
	return i;
}//创建查找（比对）姓名函数
void list(){
cout<<"姓名\t"<<"学号\t"<<"成绩"<<endl;
for(int i=0;i<Count;i++){
cout<<students[i].name<<"\t";
cout<<students[i].number<<"\t";
cout<<students[i].score<<endl;
}
cout<<"**********************"<<endl;
}
void addstudent(){
struct Student student;

input(student);
int i=findname(student.name);
if(i==Count){
strcpy(students[i].name,student.name);
students[i].number=student.number;
Count++;
cout<<"选课成功！"<<endl;
}
else{cout<<"是不是搞错了？"<<endl;}
while(Count>100){
cout<<"人数超过限制";Count-=Count;
}
}

void deletestudent(){
	struct Student student;
	input(student);
	int j,k=0,i = findname(student.name);
	if(i ==Count){
		cout<<"输入错误！"<<endl;
	}else{
		for(int j=i;j<Count-1;j++)
		{
			//while((students[j].name[k++]=students[j+1].name[k++])!='\0')//将数组name由后向前出入，并将后数组'\0'一并传入前数组{
			students[j].number=students[j+1].number;
			strcpy(students[j].name,students[j+1].name);
			students[j].score=students[j+1].score;}
		}
		Count--;
   

	}

void addscore(){
	struct Student student;
	cout<<"输入学生姓名："<<endl;
	cin>>student.name;
	cout<<"输入学生学号："<<endl;
	cin>>student.number;
	int i = findname(student.name);
	if(i==Count){
		cout<<"未查找到该学生！"<<endl;
	}else{
		cout<<"成绩：";

		cin>>student.score;
		students[i].score = student.score;
	}

}

int main(){
int action;
bool flag=true;

while(flag){
cout<<"请输入所选项目数字"<<endl;
cout<<"(1)查名单"<<endl;
cout<<"(2)选课"<<endl;
cout<<"(3)退选"<<endl;
cout<<"(4)录入成绩"<<endl;
cout<<"(5)退出程序"<<endl;
if(cin>>action==0){
	cout<<"输入错误"<<endl;cin.clear();cin.sync();continue;}

switch(action){
case 1:
	list();
	break;
case 2:
	addstudent();
	break;
case 3:
	deletestudent();
	break;
case 4:
	addscore();
	break;
case 5:
	return 0;
default:
	cout<<"输入错误!"<<endl;
	break;
}
}
}
