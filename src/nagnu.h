int get_data();
void sort_data(char host[]);
int state_color();
int print_object(char match[], int state, int type);
size_t write_data(void *ptr, size_t size, size_t nmemb, void *stream);
char *match_string(char line[], int type);
int service_problems();
int lookForConf(char path[]);
int readConf(char confPath[]);
