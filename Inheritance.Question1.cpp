#include <iostream>

using namespace std;

class Computer
{
public:
void Login()
{
 cout<< "You have successfully logged in"<<endl;
}
};

class Client : public Computer
{
public:
void Details()
{
  cout<< " Please enter your password"<<endl;
}
};
 class Server : public Computer
{
public:
void outlook()
{
  cout<< "Welcome back!"<<endl;
}
};


int main() {
  Client c;
  Server s;

  c.Login();
  c.Details();

  s.Login();
  s.outlook();

  return 0;
}
