
def sea(s1,s2):
   try:
      return s1.index(s2)
   except:
      return -1
      
s1=input()
s2=input()
print(sea(s1,s2))
