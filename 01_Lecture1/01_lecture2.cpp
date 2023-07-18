/*
Lecture 02: 
Memorial University - Computer Science 4300 - Fall 2022
Intro to Game Programming
Professor: David Churchill - http://www.cs.mun.ca/~dchurchill/
*/

#include<iostream>
#include<vector>

void useVector()
{
    std::vector<int> vec;
    vec.push_back(1);
    vec.push_back(10);
    vec.push_back(11);
    
    for(size_t i=0;i<vec.size();i++)
    {
        std::cout<<vec[i]<<std::endl;
    }
    // range based for loop 
    for(auto a : vec) // auto matically set what you have
    {
        std::cout<<a<<std::endl;
    }
}

int main(int argc,char * argv[])
{
    std::cout<<"Run Me if You come back tomorrow:"<<std::endl;
    std::cout<<"1:37 Hours"<<std::endl;
    useVector();
    return 0;
}

/*
int main(int argc,char * argv[])
{
    short int  a = 42, b = 41;
    std::cout<<a<<" "<<b<<" "<<"The sum is: "<<a+b<<std::endl;
    std::cout<<"Hello World"<<std::endl;
    std::string frist = "Dave";
    std::string last = "Churchill";
    std::cout<<frist<<" "<<last<<std::endl;
    return 0;
}
*/