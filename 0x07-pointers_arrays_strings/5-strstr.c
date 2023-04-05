#include "main.h"
/**
 * _strstr -  function that locates a substring.
 *@haystack : the source string
 *@needle : the search element
 * Return: the result of search
 */
char *_strstr(char *haystack, char *needle){
    int i = 0;
    while(haystack[i] != "\0")
    {
            if(needle[i] == haystack[i])
            {
            return (needle);
            }
         i++;
    }
    return ('\0');
}
