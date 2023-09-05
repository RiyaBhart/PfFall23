RIYA BHART (23k-0063)
int main() {
    int base = 0;
    int height = 0;
    printf("== Calculating Hypotenuse ==\n");
    printf("--Taking Inputs--\n");
    printf(" Enter base:  ");
    scanf("%d",&base);
    printf("Enter height:  ");
    scanf("%d",&height);
    
    printf("\n--Calculating Hypotenuse--\n");
    int hypotenuse = base*base + height*height; 
    float h =sqrt(hypotenuse);
    
    printf("hypotenuse is: %f" ,h);

    

    return 0;
}
