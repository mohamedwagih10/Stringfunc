#include <stdio.h>
#include <stdlib.h>



/// make function do memset
int memset2(char *name, char fill_name , int bytes);
char my_name[30]="mohamed wagih";
/// make function do memcpy the same strcoll
int memcpy2(char *new_name,const char *origianl,int bytes);
char nn[30];
/// make function do strcmp
char my_memcmp(const char *str_1,const char *str_2, int size_t_n);
/// make function strlen
int my_strlen(const char *sentence);
/// make function memmove
char my_memove(char *to, const char *from , int bytes);
/// make function strcat
char *my_strcat( char *des, const char *scr);
/// make function memchr the same of strchr
 char *My_memchr(  char *str, char c, int n);
char arras[]="mohhhamed wagih";
/// make function strtok
char *My_strtok(char *str, const char delim);
char names[]="mohamed-gpg-wagih";
int main()
{
    memcpy2(nn,my_name,4);
    printf("%s\n",nn);
    printf("%i\n",my_memcmp(my_name,nn,5));
        printf("%i\n",my_strlen("mo"));
  my_memove(my_name+2,"elgg",4);
  printf("%s\n",my_name);
  char name[]="moahmed wagih";
  my_strcat(name,"tohamey");
  printf("%s\n",name);
  char *ptrcheck=My_memchr(arras,'h',my_strlen(arras));
  printf("%s\n",ptrcheck);
  My_strtok(names,'-');
  printf("%s\n",names);
   return 0;
}
int memset2( char *name, const char fill_name ,const int bytes){

    char error_state=0; /// ok
    int index=0;
    if(name==NULL){
        error_state=1;
    }
    else{
        for(index=0; index< bytes; index++){
            *(name+index)=fill_name;
        }
    }
    return error_state;
    }
    int memcpy2(char *new_name,const char *origianl,int bytes){
    char error_state=0;/// ok
    short index=0;
    if(NULL==origianl||(NULL==new_name)){
        error_state=1;
    }
    else{
        for(index=0; index< bytes; index++){
            *(new_name+index)=origianl[index]; /// copy from the first

        }
    }
    return error_state;

    }


    char my_memcmp(const char *str_1,const char *str_2, int size_t_n){
    char error_state=0;
    char value=0;
    int index=0;
    if((NULL==str_1)||(NULL==str_2)){
        error_state=1;
       printf("this of pointer is NULL\n");
       return error_state;
    }
    else{
    for( index=0; index < size_t_n; index++){
        if ((*(str_1+index))==(*(str_2+index))){

        }
        else if((*(str_1+index))>(*(str_2+index))){
            value++;
        }
        else{
            value--;
        }
    }
    if(value >0){
        return 1;
    }
    else if(value<0){
        return -1;
    }
    else{
        return 0;
    }
    }
    }
    int my_strlen(const char *sentence){
    int len=0;
    char error_state=0;
    int index=0;
    if(NULL==sentence){
        error_state=1;
    }
    else{
      for(index=0; sentence[index]!='\0'; index++){
        len++;
      }

    }

    return len;

    }


    char my_memove(char *to, const char *from , int bytes){
    char error_state=0;
    int index=0;
    if(NULL==from || NULL==to){
            error_state=1;
    }
    else{

        for(index=0; index<bytes; index++){
            to[index] = from[index];
        }

    }
    return error_state;

    }


    char *my_strcat( char *des, const char *scr){
    char *final_2=des;
    int error_state=0;
    int index=0;
    if(NULL==des || NULL==scr)
        {
        error_state=1;
        }
    else
    {
       while(*final_2 != '\0'){
        final_2++; /// final_2 contain the sentance des but not end
       }
       while(*scr !='\0'){
        *final_2 = *scr;
        final_2++;
        scr++;
        /// after these the final_2 contain the two sentances
       }
       *final_2='\0'; /// end the final_2 and the des
    }



    return 0; /// or return des right or final_2 or 0
    }

 char *My_memchr( char *str, char c, int n){
    char error_state=0;
    int index=0;
    int counter=0;
    char ans[50];
    if(NULL==str){
        error_state=1;
    }
    for(index=0; index<n; index++){
        if(str[index]==c){
            for ( counter = 0; str[index] !='\0'; counter++)
            {
              ans[counter]=str[index];
              index++;
            }


        }

        }
       str=ans;

    return str;
    }


    char *My_strtok(char *str, const char delim){
    char error_state=0;
    int index=0;
    if(NULL==str || NULL==delim){
        error_state=1;
        printf("this is error the string you enter is null\n");
    }
    for(index=0; index<my_strlen(str); index++){
        if(str[index]==delim){
            str[index]='\n';
        }

    }
     return str;
    }

