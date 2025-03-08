#include<iostream>
using namespace std;
namespace stdx{
    void student()
    {
        cout << "stdx student" << endl;
    }
    namespace bhopal{
        void student(){
            cout<<"bhopal student"<<endl;
        }
    }
    class iostreamx{
        public:void s1(){
            cout<<"hello"<<endl;
        }
        void s2(){
            cout << "Good" << endl;
        }
        void s3()
        {
            cout << "Morning" << endl;
        }
    }coutx;
}
using namespace stdx;
int main(){
    stdx::coutx.s1();
    // stdx obj;
    coutx.s2();
    coutx.s3();
    bhopal::student();
    student();
} 