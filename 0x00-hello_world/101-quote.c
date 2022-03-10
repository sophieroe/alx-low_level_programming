#include <unistd.h>
/**

*main-prints exactly "and that piece of art is useful"

*-Sophie Rose,2022-03-10",

*followed by a new line,to the standard error.

*Retun:1 if success.

*/

int main(void)

{

write(2,"and that piece of art is useful\-Dora Korpar,2015-10-19\n",59);

return(1);

}
