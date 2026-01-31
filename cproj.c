#include<stdio.h>
struct student {
    int rollno;
    char name[25];
    int marks;  
}s[25];

int addstudent();
int displaystudent();
int searchstudent();
int c=0;
int main(){
    int choice;
    do{
    printf("---main menu---\n ");
    printf("1.add student\n2.display all students\n3.search students\n4.exit\n");
    scanf("%d",&choice);
    switch(choice){
        case 1:
            addstudent();
            break;
        case 2:
            displaystudent();
            break;
        case 3:
            searchstudent();
            break;
        case 4:
             printf("exiting...");
            break;
        default:
            printf("Invalid choice!\n");
            break;    
    }
    }while(choice != 4);
return 0;    

}

//adding details
int addstudent(){
    int i,n;
    printf("enter the total no.of records to be added\n");
    scanf("%d",&n);
    for(i=c; i<c+n; i++){
        printf("enter the roll number:\n");
        scanf("%d",&s[i].rollno);
        printf("enter the name:\n");
        scanf("%s",s[i].name);
        printf("enter the total scored in previous exam:\n");
        scanf("%d",&s[i].marks);   
    } 
    c = c + n;
    return 0;     
}
//display details
int displaystudent(){
    int i;
    printf("-----all students details----\n");
    for(i=0;i<c;i++){
        printf("\n\troll number:%d\n\t name:%s\n\ttoal:%d\n\t\n",s[i].rollno,s[i].name,s[i].marks);          
    }  
    return 0;
}

//search details
int searchstudent(){
    int i,r;
    printf("enter a specific roll number to display their details\n");
    scanf("%d",&r);
    for(i=0;i<c;i++){
        if(s[i].rollno==r){
            printf("\n\troll number:%d\n\t name:%s\n\ttotal:%d\n\t\n",s[i].rollno,s[i].name,s[i].marks);
        }
        else{
            printf("no details matched...");
        }
    }

    return 0;

}





