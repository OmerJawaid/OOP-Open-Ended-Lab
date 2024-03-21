#pragma once
class Teacher
{
    private:
    int teacherID;
    string name,email,coursesTaught;
    vector<Course>coursesAssigned;
    public:
        Teacher();
    Teacher(string n,int ID,string em) : name(n), teacherID(ID) , email(em){}

    void assignCourses(Course course)
    {
       coursesAssigned.push_back(course);
    }
    void removeCourse(Course course)
    {
        for(auto remove = coursesAssigned.begin();remove != coursesAssigned.end();remove ++)
        {
            if(remove->getcoursename() == course.getcoursename())
            {
                coursesAssigned.erase(remove);
                return;
            }
        }
        cout<<"Course not found"<<endl;
    }
    void viewCourses()
    {
        for(int i=0;i<coursesAssigned.size();i++)
        {
            cout<<coursesAssigned[i].getCourseName()<<endl;
        }
    }
};

