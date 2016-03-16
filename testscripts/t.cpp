#include <iostream>
#include <set>
#include <string>
using namespace std;

class B
{
public:
   static B* getInstance();
   void fun2(unsigned char domainId, unsigned char feId, unsigned char instanceId);
   void fun2(set<string> mylist);
private:
   static B* instance;
};

B* B::instance = NULL;

B* B::getInstance()
{
   if (instance == NULL) 
   {
      instance = new B();
   }
   return instance ;
}

void B::fun2(unsigned char domainId, unsigned char feId, unsigned char instanceId)
{
   cout << "this is fun 2 ....." << endl;
   cout << "domainId :" << domainId << endl;
   cout << "feId : " << feId << endl;
   cout << "instanceId: " << instanceId << endl;
   cout << endl;
}

void B::fun2(set<string> mylist)
{
   cout << "this is fun 3" << endl;
}

class A
{
public:
   void fun1();
   void setTmpBool(bool mBool);
   A();
private:
  bool tmpBool;
	set<string> dialogs;
	unsigned int domainId, feId, instanceId;
};

A::A()
{
   tmpBool = false;
   domainId = 1;
   feId = 1;
   instanceId = 1;
}

void A::setTmpBool(bool mBool)
{
   tmpBool = mBool;
}

void A::fun1()
{
   if(tmpBool)
   {
      cout <<  "this is fun 1 ....." << endl;
   }
   else
   {
      B::getInstance()->fun2(domainId, feId, instanceId);
      B::getInstance()->fun2(dialogs, feId, instanceId);
   }
}

int main ()
{
  A a;
  a.fun1();
  a.setTmpBool(true);
  a.fun1();
#if 0
  unsigned char c1,c2;
  set<string> ss;
    ss.insert("s1");
    ss.insert("s2");
  B::getInstance()->fun2(ss,c1,c2);
#endif
  return 0;
}
