#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
    int lowerlimit=0;
    int uTest=15,uQuiz=5,uProject=20,uAssignment=10,uFinalExam=50;
    int test,quiz,project,assignment,finalExam,totalMark;
    cout<<"enter your test mark"<<endl;
    cin>>test;
    if(test<lowerlimit||test>uTest){
        cout<<"the mark is out of range"<<endl;
         exit(EXIT_FAILURE);
    }
    cout<<"enter your quiz mark"<<endl;
    cin>>quiz;
    if(quiz<lowerlimit||quiz>uQuiz){
        cout<<"the mark is out of range"<<endl;
        exit(EXIT_FAILURE);
    }
    cout<<"enter your project mark"<<endl;
    cin>>project;
    if(project<lowerlimit||project>uProject){
        cout<<"the mark is out of range"<<endl;
        exit(EXIT_FAILURE);
    }
    cout<<"enter your assignment mark"<<endl;
    cin>>assignment;
    if(assignment<lowerlimit||assignment>uAssignment){
        cout<<"the mark is out of range"<<endl;
        exit(EXIT_FAILURE);
    }
    cout<<"enter your final exam mark"<<endl;
    cin>>finalExam;
    if(finalExam<lowerlimit||finalExam>uFinalExam){
        cout<<"the mark is out of range"<<endl;
        exit(EXIT_FAILURE);
    }

   totalMark= quiz + test + project + assignment + finalExam;
    cout<<"total mark is "<<totalMark<<endl;
    if(totalMark>=90){
        cout<<"your grade is A+"<<endl;
    }
    else if(totalMark<90&&totalMark>=80){
        cout<<"your grade is A"<<endl;
    }
    else if(totalMark>=75&&totalMark<80){
        cout<<"your grade is B+"<<endl;
    }
     else if(totalMark>=60&&totalMark<75){
        cout<<"your grade is B"<<endl;
    }
     else if(totalMark>=55&&totalMark<60){
        cout<<"your grade is C+"<<endl;
    }
     else if(totalMark>=45&&totalMark<55){
        cout<<"your grade is C"<<endl;
    }
     else if(totalMark>=30&&totalMark<45){
        cout<<"your grade is D"<<endl;
    }
    else{
        cout<<"your grade is F"<<endl;
    }
    return 0;
}

