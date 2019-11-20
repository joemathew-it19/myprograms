import random
n = random.randint(1,9)
choice = int(input("enter a no:"))
while(choice!=n):
    if(choice<n):
        print("the guess is lesser")
    elif(choice>n):
        print("the guess is greater")
    choice = int(input("enter a no:"))
print("the no is correct")
  
    
