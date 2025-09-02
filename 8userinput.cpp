
// user se input lene ke leye "cin" ka use kro 

#include<iostream>
// string use karna h to ye use kr
#include<string>

// using namespace std; agar ye line nhi lagayega to cout , cin , string, vector etc ke aage std::cout lagana padega ye sab namespae me mhote h 

int main(){

    int age;
    std::string name;

    std::cout << "Enter kr tera name"<< std::endl;
    std::cin>> name;
    
    std::cout << "Enter kr tere age"<< std::endl;
    std::cin>>age;

    std::cout<<std::endl;
    
    std::cout<<"Your name is : "<< name <<std::endl;
    std::cout << "Your age is : "<< age <<std::endl;
    
    return 0 ;
}