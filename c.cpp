#include <iostream>
using namespace std;

// class a
// {
//     // protected:
//     //     int ses;
//     // public:
//     //     a()
//     //     {
//     //         this->ses = 1;
//     //         std::cout << "HI A" << std::endl;
//     //     }
// };
// class b : public virtual a
// {
//     public:
//         // b()
//         // {
//         //     this->ses = 5; 
//         //     std::cout << "HI B" << std::endl;
//         // }
// };
// class c : virtual public a
// {
//     public:
//         // c()
//         // {
//         //     this->ses = 10;
//         //     std::cout << "HI C" << std::endl;
//         // }
// };
// class d : public c, public b
// {
//     public:
//         // d()
//         // {
//         //     this->ses = 1000;
//         //     cout << "Here we go" << '\n';
//         // }
//         // int getSes()
//         // {
//         //     return (this->ses);
//         // }
// };
class test
{
    public:
        virtual void func()
        {
            std::cout << "HI go" << std::endl;
        }
};
class test1 : public test
{
    public:
         void func()
        {
            std::cout << "Hi majid" << std::endl;
        }
};
int main()
{
    // d objD;
    // std::cout << objD.getSes();
    // std::cout << sizeof(a) << '\n'
    // << sizeof(b) << '\n'
    // << sizeof(c) << '\n'
    // << sizeof(a) << '\n';
    test *o = new test1;
    o->func();
    int c;
    test a;
    a.func();
    std::cout << sizeof(test) << std::endl;
}