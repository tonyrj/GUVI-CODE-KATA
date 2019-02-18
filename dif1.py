try:
    a,b = [x for x in input().split(" ")]
    j=0;c=0
    if((len(a)and len(b))<=100000):
        if(len(a)==len(b)):
            for i in a:
                if(i==b[j]):
                    j+=1
                else:
                     j+=1
                     c+=1
                if(c>1):
                      print("NO")
                      break
            if(c==1):
                 print("yes")         
except:
    print("Invalid Input")
