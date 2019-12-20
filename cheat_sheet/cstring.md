# cstring

```
char * strcpy ( char * destination, const char * source );
char * strncpy ( char * destination, const char * source, size_t num );

char * strcat ( char * destination, const char * source );
char * strncat ( char * destination, const char * source, size_t num );

int strcmp ( const char * str1, const char * str2 );
int strncmp ( const char * str1, const char * str2, size_t num );

const char * strchr ( const char * str, int character );
      char * strchr (       char * str, int character );
const char * strrchr ( const char * str, int character );
      char * strrchr (       char * str, int character );

const char * strstr ( const char * str1, const char * str2 );
      char * strstr (       char * str1, const char * str2 );

char * strtok ( char * str, const char * delimiters );
// sample code
    char dest[]="ab,cd,ef,c";
    char* rp;
    char ch[]= ",";
    rp=strtok(dest, ch);
    while(NULL != rp){
        printf("dest: %s ", dest);
        printf("rp: %s \n", rp);
        rp=strtok(NULL, ch);
    }
```
