def find_max(a,b):
    if(a>b):
         return a;
    else:
        return b;


a = int(input("enter first value"))
b = int(input("enter second value"))
max = find_max(a,b)
print("the max value",max)
