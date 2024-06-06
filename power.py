al = bl = 1
br = ar = 1

x3 = (ar*br)%10
if(ar*br>9):
    c = 1
elif(ar*br>19):
    c = 2
else:
    c = 0

x2 = (ar*bl + al*br + c)
x1 = al*bl

print(f"{str(x1)+str(x2)+str(x3)}")