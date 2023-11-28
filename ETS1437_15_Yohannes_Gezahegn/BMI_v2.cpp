  //body mass index calculator v2
  #include<iostream>
using namespace std;
int main()
{
float BMI,weight,height;
string Gender;
cout<<"please enter your gender"<<endl;
cin>>Gender;
cout<<"please enter your height"<<endl;
cin>>height;
cout<<"please enter your weight"<<endl;
cin>>weight;
cout<<"gender:"<<Gender<<endl;
BMI=weight/(height*height);
cout<<"BMI = "<< BMI <<endl;
if(Gender=="female"){if(BMI<18.5){
    cout<<"your weight is:under weight"<<endl;
}
else if(18.5<=BMI&&BMI<24){
    cout<<"your weight is :normal"<<endl;
}
    else if(24<=BMI&&BMI<30){
        cout<<"your weight is:overweight"<<endl;
    }
    else if(BMI>=30){
        cout<<"your weight is:obesity"<<endl;
    }
}
    else if(Gender=="male"){if(BMI<20.5){
    cout<<"your weight is:under weight"<<endl;
}
else if(20.5<=BMI&&BMI<25){
    cout<<"your weight is :normal"<<endl;
}
    else if(25<=BMI&&BMI<30){
        cout<<"your weight is:overweight"<<endl;
    }
    else if(BMI>=30){
        cout<<"your weight is:obesity"<<endl;
    }
}
else{
    cout<<"the gender specified is not valid "<<endl;
}
return 0;
}
