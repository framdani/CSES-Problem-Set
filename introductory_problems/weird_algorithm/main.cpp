#include <iostream>

int main()
{
	unsigned long n;
	std::cin>>n;
	while (n > 1)
	{
		std::cout<<n<<" ";
		(n % 2) ? n=(n*3 + 1): n=n/2;
	}
	std::cout<<n<<std::endl;
}
