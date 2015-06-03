
//Includes
#include <stdio.h>
#include <time.h>

int main()
{
	var b = require('bonescript');
    b.pinMode('P8_19', b.INPUT);
    b.digitalRead('P8_19', printStatus);
    function printStatus(x) {
        console.log('x.value = ' + x.value);
        console.log('x.err = ' + x.err);
    }
	return 0;
}
