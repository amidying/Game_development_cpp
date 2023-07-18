#include<iostream>
#include<vector>
#include<fstream>

class Student
{
    std::string m_first = "First";
    std::string m_last  = "Last";
    int         m_id    = 0; // default value
    float       m_avg   = 0;
public:
    Student(){}; // default constructor
    Student(std::string first, std::string last,int id,float avg)
    :   m_first(first)
    ,   m_last(last)
    ,   m_id(id)
    ,   m_avg(avg)
    {
    }

    float getAvg() const
    {
        return m_avg;
    }
    int getId() const
    {
        return m_id;
    }
    std::string getFirst() const
    {
        return m_first;
    }
    std::string getLast() const
    {
        return m_last;
    }
    std::string getFullName() const
    {
        return m_first+m_last;
    }

    void print() const
    {
        std::cout<<m_first<<" "<<m_last<<" ";
        std::cout<<m_id<<" "<<m_avg<<std::endl;
    }
};

class Course
{
    std::string m_name = "Course Name";
    std::vector<Student> m_student;
public:
    Course(){}
    Course(const std::string& name)
    :m_name(name)
    {}

    void addStudent(const Student s)
    {
        m_student.push_back(s);
    }
    const std::vector<Student>& getStudent() const
    {
        return m_student;
    }

    // fstream file loading
    void loadFromFile(const std::string filename)
    {
        std::ifstream fin(filename);
        std::string first,last;
        int id;
        float avg;

        while(fin >> first)
        {
            fin >> last>>id>>avg; // reading everything from the file
            addStudent(Student(first,last,id,avg));
        }
    };
    void print() const
    {
        for(const auto & s:m_student)
        {
            s.print();
        }
    }
};

int main(int argc,char * argv[])
{
    Course c("COMP 4300");
    c.loadFromFile("Student_info.txt");
    c.print();
    return 0;
}

/*
int main(int argc,char * argv[])
{
    Student s1;
    Student s2("Dave","Churchil",1001,3.44);
    const Student s3("John","Doe",102323,32);
    s3.print();

    Course comp4300("Comp 4300");
    comp4300.addStudent(s1);
    comp4300.addStudent(s2);
    comp4300.addStudent(Student("Billy","Jane",32323,3.22));

    comp4300.print();

    return 0;
}

*/