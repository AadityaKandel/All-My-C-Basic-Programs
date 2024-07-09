Rules That I learnt

Variable Rules

> Its good to initialize the variable. Initializing usually means to give the variable their initial value.
  Eg: 
  int a,b;
  a = 1;
  b = 2; // Here the values are given. Now, the variable a & b have been initiallized and they each hold one value as their initial value.

> Variables must start with either '_' underscore or alphabets (A-Z, a-z). Giving variable's first name as any other may lead to compiling error.
  Eg:
  int _hello = 20; // This is correct
  int wow = 20; // This is correct
  int W = 20; // This is also correct

  int 1w = 20; // This is incorrect

> Variable names are case sensitive and capital and small letters in C have different meanings.
  Eg:
  int h = 20;
  int H = 30;

  // Both h and H are different and they both hold different values even though they are the same letter.  
  // Beacuse in C programming, variables are case sensitive.

> Variables must be given their data types and the values to be stored must align to the data type they are given.
  Eg:
  int h = 20; // This is correct beacuse h is a integer according to the datatype "int"
  // Int usually means every positive, negative and neutral (0) number which isn't fraction. 
  int h = 2.3; // This is incorrect
  int h = "A"; // This is incorrect
  // These above mentioned are incorrect because they go against the nature of "int" datatype

> Variables have their own scope. It simply means that, if variables are defined within a function then the variable can only be used within the function.
  It cannot be used outside the function. Using it outside may cause the compiler to throw an error.

  Eg:

  int main(){
    int a = 2;
    printf("%d",a); // This will print the value of a
    return 0;
  }
  printf("%d",a); // This is incorrect because the variable "a" was defined within the function "main".
  // Hence, it remains undefined once its used outside the function.

Other Rules

> While the if condition is used, it is usually used to compare between numbers and strings and other things.
  But, while comparing string, double quotes ("") must not be used. Single quotes ('') must be used.
  The reason is simple. The compiler will not throw any error but while the program is running,
  it will not perform the required condition. The condition will not be checked by the program and it will directly go to "else"

  Eg:
  char a = "A";
  if (a == "A"){
    printf("True");
  } else {
    printf("False");
  }

  // This whole condition will run without any errors. But, when you run this program, it will immediately print "False" without even 
  // checking the condition. This is because checking string conditions require you to give single quotes ('')
  // Lets do it correctly.

  Eg:
  char a = 'A';
  if (a == 'A'){
    printf("True");
  } else {
    printf("False");
  }

  // This above example is correct. As it uses single quotes, the program will check and print "True"

> When you switch from one data type of input to another data type (Eg: int to char), you must give a space before using %c.
  This above statement may be complex to you. So, let's simplify this using one example below.
  Eg:
  int a;
  char b;

  printf("Enter your age: ");
  scanf("%d", &a);
  printf("Enter one alphabet: ");
  scanf("%c", &b);
  return 0;

  // The above program seems completely normal without any errors. The compiler will also show you no error and your program will also run.
  // The twist is, you will not be able to give the second input because it will be automatically ignored by the C program.
  // The C program has its own spaces for the scanf command. We need to give \n to printf commands but we don't need it for the scanf because
  // it has its own space. Its space is usually stored to the input buffer. When you switch from int to char, the char input will consider the 
  // space as your input (user's input) and it wil go to the next step without even asking you for input.
  // To solve this, we need to give a space before writing %c. This will consume any space remaining and make the scanf fresh.

  Eg:
  int a;
  char b;

  printf("Enter your age: ");
  scanf("%d", &a);
  printf("Enter one alphabet: ");
  scanf(" %c", &b);
  return 0;

  // Now that we have given a space before %c, our program is fully correct and we don't need to worry about anything else.
  
> While dividing a float value by any other number, you must put .0 behind that number, otherwise the required operation will not work.
  Eg:
  int a,b,c,d,e,f,total; // Suppose a,b,c,d,e,f are the six subjects which have their Full Marks of 75 except one subject which has 50 as Full Marks
  float percentage;      // As above mentioned, subjects that have 75 F.M has 30 Pass Marks & one subject having 50 F.M has 20 Pass Marks
  total = a+b+c+d+e+f;   // The total that is being calculated is the total marks that you gained from all these subjects
  // Considering the above information, Our overall total is 425. The overall total means: The sum of F.M of all subjects.
  percentage = (total/425)*100; // This will gather the percentage that we got on our subject
  // But the issue is that, even though our above formula is correct, the result will be 0%
  // It is because I've not mentioned .0 behind numbers. Because this is a float calculation, we need .0 behind numbers
  // So the above mentioned is incorrect. Instead, it should be written as.........
  percentage = (total/425.0)*100.0; // Now this is correct and it will calculate correct answer in points  
  
