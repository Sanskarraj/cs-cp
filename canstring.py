def canCon(a,b):
   if a=='':
      return True
      
   for i in b:
       if a.find(i)==0:
          s=a[len(i):]
          if canCon(s,b)==True:
             return True
          
   return False
   
print(canCon("abcdef",['def','a']))
