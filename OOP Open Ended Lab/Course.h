#pragma once
class Course
{
    private:
    int courseCode;
    string courseName;
    public:
    vector<Student>studentEnrolled;
    Course(string name,int code) : courseName(name),courseCode(code){}
   string getcoursename()
   {
    return courseName;
   }
   int getcoursecode()
   {
    return courseCode;
   }

   void viewStudents()
   {
    for(int i=0;i<studentEnrolled.size();i++)
    {
        cout<<studentEnrolled[i].getstudentname()<<endl;
    }
   }
};

