#include "MutanStack.hpp"

int main()
{
MutantStack<int> mstack;
mstack.push(5);
mstack.push(17);
// std::cout << mstack.top() << std::endl;
// mstack.pop();
// std::cout << mstack.size() << std::endl;
mstack.push(3);
mstack.push(737);
mstack.push(7);
mstack.push(73);
mstack.push(37);
mstack.push(84);
mstack.push(0);
MutantStack<int>::iterator it = mstack.begin();
MutantStack<int>::iterator ite = mstack.end();

while (it != ite)
{
    std::cout << *it << std::endl;
    it++;
}
std::stack<int> s(mstack);

std::list <int> l;
l.push_back(5);
l.push_back(17);
l.push_back(3);
l.push_back(737);
l.push_back(7);
l.push_back(73);
l.push_back(37);
l.push_back(84);
l.push_back(0);

std::cout << "testing with a list" << std::endl;

std::list<int>::iterator i = l.begin();
std::list<int>::iterator j = l.end();

while (i != j)
{
    std::cout << *i << std::endl;
    i++;
}
return 0;
}