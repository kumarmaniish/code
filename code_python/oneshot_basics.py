# -----------------------------------user Output-------------------------
print("Hello") 

#---------------------------------user Input ------------------------

# for integers
n=int(input()) 
print(n)

#string input
name=input("Enter Your name ")
print(name)

#float input
n=float(input("Enter float number "))
print(n)

#Taking Multiple Inputs
# Taking multiple inputs
x, y, z = input("Enter three numbers separated by spaces: ").split()

# Convert strings to integers
x = int(x)
y = int(y)
z = int(z)

print(f"The numbers are {x}, {y}, and {z}.")


#Using List Comprehension for Multiple Inputs
numbers = [int(n) for n in input("Enter the number ").split()]
print(numbers)


#variable ------------declare a variables--------------------
age=3
print(age)

#-----------------------------to check type------------------------ 
numbers = [int(n) for n in input("Enter the number ").split()]
print(type(numbers)) #class list

# Example collections
list_var = [1, 2, 3]
tuple_var = (1, 2, 3)
set_var = {1, 2, 3}
dict_var = {'key': 'value'}


# Checking data types
print(type(list_var))  # Output: <class 'list'>
print(type(tuple_var)) # Output: <class 'tuple'>
print(type(set_var))   # Output: <class 'set'>
print(type(dict_var))  # Output: <class 'dict'>

age=3
print(type(age)) #class int



#to take user input for a list
n=int(input("Enter the input "))
ls=[]
for i in range(n):
    item=int(input())
    ls.append(item)
    
print(ls)


# another method
name=input("Enter the string ")
ls=name.split()

numbers=[int(i) for i in ls]

print(numbers)




#valid identifiers ------------------identifiers-------------------------------
age=2
name="Anuj"
_id='23x352'
name2='Mani'
print(_id)


#invalid
# 2name = "manish"
# print(2name) #error
# marks$=89 
# class="hello"  keywords


#--------------------------------------functions----------------------------------------------

#non parameters
def hello():
    print("hey!")

hello()

#with parameter
def add(a,b):
    return a+b

print(add(2,3))


#with default
def sayName(name="Manish"):
    print(f"Hey!, this is {name}")
    
sayName("Anurag")


#---------------------------------------------- list--------------------------------------------


# Creating a list
my_list = [1, 2, 3, 4, 5]

# Creating an empty list
empty_list = []

# List with mixed data types
mixed_list = [1, "Hello", 3.14, True]


# Accessing elements
first_element = my_list[0]  # 1
last_element = my_list[-1]  # 5

# Modifying elements
my_list[2] = 10  # my_list becomes [1, 2, 10, 4, 5]

# Adding elements
my_list.append(6)  # [1, 2, 10, 4, 5, 6]
my_list.insert(2, 9)  # [1, 2, 9, 10, 4, 5, 6]

# Removing elements
my_list.remove(9)  # [1, 2, 10, 4, 5, 6]
popped_element = my_list.pop()  # 6, my_list becomes [1, 2, 10, 4, 5]

# Length of a list
length = len(my_list)  # 5

# Iterating through a list
for item in my_list:
    print(item)


#-----------------------------------tuple------------------------------
# Creating a tuple
my_tuple = (1, 2, 3, 4, 5)

# Creating a single-element tuple
single_element_tuple = (1,)

# Tuple with mixed data types
mixed_tuple = (1, "Hello", 3.14, True)

# Creating an empty tuple
empty_tuple = ()

# Accessing elements
first_element = my_tuple[0]  # 1
last_element = my_tuple[-1]  # 5

# Length of a tuple
length = len(my_tuple)  # 5

# Iterating through a tuple
for item in my_tuple:
    print(item)


#-------------------------------------set------------------------------------------

# Creating a set
my_set = {1, 2, 3, 4, 5}

# Creating an empty set
empty_set = set()  # Note: {} creates an empty dictionary, not a set

# Set with mixed data types
mixed_set = {1, "Hello", 3.14, True}

# Adding elements
my_set.add(6)

# Removing elements
my_set.remove(3)  # Raises KeyError if 3 is not found
my_set.discard(4)  # Does nothing if 4 is not found
popped_element = my_set.pop()  # Removes an arbitrary element

# Checking membership
is_in_set = 2 in my_set  # True

# Length of a set
length = len(my_set)  # 4

# Iterating through a set
for item in my_set:
    print(item)

# Set operations
another_set = {3, 4, 5, 6}
union_set = my_set.union(another_set)  # {1, 2, 4, 5, 6}
intersection_set = my_set.intersection(another_set)  # {4, 5}
difference_set = my_set.difference(another_set)  # {1, 2}
 
#--------------------------------------dict-------------------------------------------

# Creating a dictionary
my_dict = {'name': 'Alice', 'age': 25, 'city': 'New York'}

# Creating an empty dictionary
empty_dict = {}

# Dictionary with mixed data types
mixed_dict = {'integer': 1, 'string': "Hello", 'float': 3.14, 'boolean': True}


# Accessing elements
name = my_dict['name']  # 'Alice'

# Modifying elements
my_dict['age'] = 26

# Adding elements
my_dict['email'] = 'alice@example.com'

# Removing elements
del my_dict['city']
popped_value = my_dict.pop('age')  # 26

# Length of a dictionary
length = len(my_dict)  # 2

# Iterating through a dictionary
for key in my_dict:
    print(key, my_dict[key])

# Iterating through keys and values
for key, value in my_dict.items():
    print(key, value)



#---------------------------------------------array Declaration----------------------------------------

fruit_list=["aam","sev","banana"]
print(fruit_list)

#ways to print the array

for i in range(len(fruit_list)):
    print(fruit_list[i]);
    
for i in fruit_list:
    print(i);
    
n=len(fruit_list)
for i in range(0,n,1):
    print(fruit_list[i])


# Using list comprehension
[print(i) for i in fruit_list]

# Using enumerate
for index,fruit in enumerate(fruit_list):
    print(f"Index : {index} and Name : {fruit}")


# Using map
# The map() function can be used to apply a function to each item in a list. Here, we use it with print.
list(map(print, fruit_list))


#while loop
i=0
while i<len(fruit_list):
    print(fruit_list[i])
    i=i+1

# ----------------------------------strings---------------------------------------

# Single quotes
single_quoted = 'Hello, World!'

# Double quotes
double_quoted = "Hello, World!"

# Triple quotes for multi-line strings
multi_line = """This is a
multi-line string."""

# Accessing individual characters
first_char = single_quoted[0]  # 'H'
last_char = single_quoted[-1]  # '!'

# Slicing strings
substring = single_quoted[0:5]  # 'Hello'
substring_from_start = single_quoted[:5]  # 'Hello'
substring_to_end = single_quoted[7:]  # 'World!'

# Stepping through strings
every_other_char = single_quoted[::2]  # 'Hlo ol!'
reversed_string = single_quoted[::-1]  # '!dlroW ,olleH'


# Concatenation
greeting = "Hello" + ", " + "World!"  # 'Hello, World!'

# Repetition
repeated = "ha" * 3  # 'hahaha'


# Convert to lowercase
lowercase = "HELLO".lower()  # 'hello'

# Convert to uppercase
uppercase = "hello".upper()  # 'HELLO'

# Convert to title case
title_case = "hello world".title()  # 'Hello World'

# Swap case
swapped = "HeLLo WoRLD".swapcase()  # 'hEllO wOrld'

# Capitalize first letter
capitalized = "hello world".capitalize()  # 'Hello world'


# Find substring
index = "Hello, World!".find("World")  # 7
index = "Hello, World!".find("world")  # -1 (not found)

# Count occurrences of a substring
count = "banana".count("a")  # 3

# Replace substring
replaced = "Hello, World!".replace("World", "Python")  # 'Hello, Python!'


# Check if all characters are alphanumeric
is_alnum = "Hello123".isalnum()  # True

# Check if all characters are alphabetic
is_alpha = "Hello".isalpha()  # True

# Check if all characters are digits
is_digit = "12345".isdigit()  # True

# Check if all characters are lowercase
is_lower = "hello".islower()  # True

# Check if all characters are uppercase
is_upper = "HELLO".isupper()  # True

# Check if all characters are whitespace
is_space = "   ".isspace()  # True

# Check if string starts with a substring
starts_with = "Hello, World!".startswith("Hello")  # True

# Check if string ends with a substring
ends_with = "Hello, World!".endswith("World!")  # True


# Split string into a list
words = "Hello, World!".split(", ")  # ['Hello', 'World!']
split_by_space = "one two three".split()  # ['one', 'two', 'three']

# Join list into a string
joined = " ".join(words)  # 'Hello World!'

# Splitting on newline characters
lines = "line1\nline2\nline3".splitlines()  # ['line1', 'line2', 'line3']


# Remove leading whitespace
left_trimmed = "   Hello".lstrip()  # 'Hello'

# Remove trailing whitespace
right_trimmed = "Hello   ".rstrip()  # 'Hello'

# Remove leading and trailing whitespace
trimmed = "   Hello   ".strip()  # 'Hello'

# Remove specific characters
custom_trimmed = "xxHelloxx".strip('x')  # 'Hello'


name = "Alice"
age = 30
formatted = f"My name is {name} and I am {age} years old."  # 'My name is Alice and I am 30 years old.'

number = 123
number_as_string = str(number)  # '123'

boolean_value = True
boolean_as_string = str(boolean_value)  # 'True'
