def howCon(a,b):
    if a=='':
       return []
       
    for i in b:
       if a.find(i)==0:
          if howCon(a[len(i):],b)!=None:
             return [i]+howCon(a[len(i):],b) 
    return None
     
print(howCon("abcdef",['def','bc','a']))
