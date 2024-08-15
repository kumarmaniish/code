#fibonaci series
def fib(n):
    if (n==1 or n==2):
        return 1
    else:
        return fib(n-1)+fib(n-2)

print(fib(6))
    

#reverse a string
def reverse(name):
    return name[::-1]

print(reverse("Manish"))


#reverse a pointer using two pointer approach
def reverseTwo(name):
    #convert it into list
    name1 = list(name)
    
    start=0
    end=len(name1)-1
    
    while(start<=end):
        name1[start],name1[end]=name1[end],name1[start]
        start+=1
        end-=1
    
    #to join the list into string
    return ''.join(name1)

print(reverseTwo("Manish"))


#normal pallindrome
def isPallin(name):
    return name==name[::-1]

print(isPallin("Mamma"))


#rcheck pallindrome using two pointer approach
def isPallindrome(name):
    #convert it into list
    name1 = list(name)
    
    start=0
    end=len(name1)-1
    
    while(start<=end):
        name1[start],name1[end]=name1[end],name1[start]
        start+=1
        end-=1
    
    #to join the list into string
    s=''.join(name1)
    if s==name:
        return True
    return False

print(reverseTwo("amma"))

#factorial

def fact(n):
    if n==1:
        return 1
    else:
        return n*fact(n-1)
        
print(fact(5))


# to find a maximum element in a list by taking user input

n=int(input("Enter the size : "))
ls=[]
for i in range(n):
    item=int(input())
    ls.append(item)

def maxEle(ls):
    
    maxi=ls[0]
    n=len(ls)
    for i in range(1,n):
        if maxi<ls[i]:
            maxi=ls[i]
        continue
    return maxi


print("max element is ",maxEle(ls))
    

#to count the vowels in a string

def countVowels(name:str)->int:
    count=0
    vowel="aeiouAEIOU"
    
    for char in range(len(name)):
        if name[char] in vowel:
            count+=1
        continue
    
    return count

print(countVowels("hello world"))


# merge two list
def mergelist(ls1,ls2):
    merged=[]
    i=0
    j=0
    
    while i<len(ls1) and j<len(ls2) :
        if ls1[i]<ls2[j]:
            merged.append(ls1[i])
            i+=1
        else:
            merged.append(ls2[j])
            j+=1

    #now extend it
    merged.extend(ls1[i:])
    merged.extend(ls2[j:])
    
    '''while i<len(ls1):
        merged.append(ls1[i])
        i+=1
    
    while j<len(ls2):
        merged.append(ls2[j])
        j+=1
        
    return merged
'''

print(mergelist([2,4,7],[3,5,6]))



#find missing numbers
def missNumbers(ls1):
    n=len(ls1)+1
    
    totalSum=(n*(n+1))//2
    currSum=0
    for num in ls1:
        currSum+=num
    
    return totalSum-currSum

print(missNumbers([1,2,3,5]))


#count the number of occureneces

def countOcc(ls1):
    occur={}
    
    for i in ls1:
        if i in occur:
            occur[i]+=1
        else:
            occur[i]=1
    
    return occur

print(countOcc([1,1,1,1,2,3,3,3,3,2,4,5,5]))

#prime number
def primeNum(n):
    if n<=1:
        return False
    else:
        for i in range(2,n):
            if n%i==0:
                return False
        
    return True

print(primeNum(433))