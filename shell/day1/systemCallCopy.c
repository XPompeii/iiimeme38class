#include <unistd.h>
#include <fcntl.h>
int main( void)
{

 char c;
 int fdin, fdout;
 
 fdin = open64( "//home/cthf/Workspace/iiimeme38class.git/shell/day1/file.in",
		 O_RDONLY);
 fdout = open64( "//home/cthf/Workspace/iiimeme38class.git/shell/day1/file.out",
		 O_WRONLY|O_CREAT,
		 S_IRUSR|S_IWUSR);
 while( read( fdin, &c, 1) == 1)
 {
  
  write( fdout, &c, 1); 
 }
 close( fdin);
 close( fdout);
 return 0;
}

