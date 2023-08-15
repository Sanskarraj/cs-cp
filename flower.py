def canPlaceFlowers(flowerbed, n):
        count=0
        f=0
        for i in flowerbed:
            if i==0:
                count+=1
                print(count)
            if i==1:
                if(count-1)/2>=0:
                    f=f+(count-1)/2
                print("f=",f)
                print(count)
                count=0
                print(count)
        if n<=f:
            return True
        else :
            return False

s=[0,0,1,0,1]
print(canPlaceFlowers(s,1))
