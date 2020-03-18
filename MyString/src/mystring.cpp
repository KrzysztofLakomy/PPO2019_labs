#include"MyString.h"

MyString::MyString(char *str){
    _caption = new char[strlen(str)+1];
    strcpy(_caption,str);
}

MyString::~MyString(){
    delete[] _caption;
}

bool MyString::operator==(const MyString &s) const{
    return strcmp(_caption,s._caption)==0;
}

MyString & MyString::operator=(const MyString &s){
    if(s==*this){
        return *this;
    }
    delete[] _caption;
    _caption = new char[strlen(s._caption)+1];
    strcpy(_caption,s._caption);

    return *this;
}

char & MyString::operator[](int a){
    return *(a+_caption);
}

MyString MyString::operator*(int a) const{
    char *tmp =  new char[a*strlen(_caption)+1];
    strcpy(tmp,_caption);
    strcpy(tmp+strlen(_caption),_caption);
    MyString temp(tmp);
    delete[] tmp;
    return temp;
}

void MyString::Print() const{
    printf("%s\n",_caption);
}

MyString MyString::substr(int a,int b){
    char *tmp = new char[b-a +2];
    for(int i=0;i<b-a+1;i++){
        tmp[i] = *(_caption+a+i);
    }
    tmp[b-a+1]='\0';
    MyString temp(tmp);
    delete[] tmp;
    
    return temp;
}
