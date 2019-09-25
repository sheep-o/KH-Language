#include <stdbool.h>

int index_of(const char str[], const char char_to_find) 
{
    const char *ptr = strchr(str, char_to_find);
    if(ptr) {
        int index = ptr - str;
        return index;
    }
    return -1;
}


// I need to rewrite this function to make it better. I just rushed it.
bool starts_with(const char str_input[], const char starts_with[]) 
{
    bool success = false;
    int length = strlen(starts_with);
    for (int i = 0; i < length; i++)
    {
        if (str_input[i] == starts_with[i]) 
        {
            
        }
        else 
        {
            success = false;
            return success;
        }
    }
    return true;
}
