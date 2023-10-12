#include <iostream>
#include <vector>
#include <iomanip>
#include <cmath>
#include <string>

using namespace std;

// int main()
// {
//     vector <string> students; //size 0 
//     students.push_back("Daniela"); //size 1:: index= 0
//     string stu1 = "Daniela";
//     students.push_back(stu1); //size 2 :: index:: 0,1
//     cout <<students[1];
// }

// int main()
// {
//     vector <int> scores;
//     int amountofClasses;
//     cout << "How many classes are you taking?";
//     cin >> amountofClasses;
//     for (int i = 0; i <amountofClasses; i++)
//     {
//         float score_t;
//         cout << "Input score of the class " << i+1 << ":";
//         cin >>score_t;
//         scores.push_back(score_t);

//     }
  
//     float total=0;
//     for(int i  = 0; i <scores.size(); i++)
//     {
//         total += scores[i];
    
//     }cout <<"Your average is:" << total / scores.size();

// }       

struct Student 
{
    string name;
    int age;
    string gender;
};

int main ()
{
    vector <Student> students;
    int noStudents;
    cout <<"How many students are enrolled in the class?";
    cin >>noStudents;
    
    for(int i = 0; i <noStudents; i++)
    {
        Student temporalstudent;
        cout<< "Add the name:";
        cin >>temporalstudent.name;
        cout<< "Add the age of " <<temporalstudent.name<<":";
        cin >>temporalstudent.age;
        cout<< "Add the gender of " <<temporalstudent.name<<":";
        cin >>temporalstudent.gender;
        students.push_back(temporalstudent);
    }
     for(int i = 0; i <students.size(); i++)
    {
   
        cout << students[i].name << ", " <<students[i].age << ", " << students[i].gender << ",";
    }

}
