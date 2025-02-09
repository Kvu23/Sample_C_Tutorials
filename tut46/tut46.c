/*this program explains simple logging and error handling systems*/

#include <stdio.h>
#include <stdarg.h>
#include <string.h>

void log_message(const char *message, ...)
{
    va_list args;
    char buffer[1024];
    int written = 0;

    /*set buffer to zero*/
    memset(buffer, 0x00, sizeof(buffer));

    /*initialize va_list to store arguments after formatting*/
    va_start(args, message);
    
    /* Use vsnprintf to format the string safely:
     - Writes up to sizeof(buffer) characters into 'buffer'
     - Prevents buffer overflow by truncating if necessary*/
    written = vsnprintf(buffer, sizeof(buffer), message, args);
    /*terminate the va_list*/
    va_end(args);
    /*print the formatted string*/

    if(written >= 0)
    {
        printf("LOG: %s\n", buffer);
    }
    else
    {
        printf("LOG: (message too long)\n");
    }
}

int main(int argc, char const *argv[])
{
    /* code */
    log_message("This is a log message with no arguments");
    log_message("This is a log message with one argument: %d", 42);
    log_message("Temperature is: %.1f C and Pressure is: %.1f kPa", 42.5, 33.3);
    return 0;
}

