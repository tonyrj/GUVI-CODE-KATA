x=input('')
x=int(x)
if(x<=20):
	fact=1
	while(x>0):
		fact=fact*x
		x=x-1
	print(fact)
		
else:
	print("INVALID")
