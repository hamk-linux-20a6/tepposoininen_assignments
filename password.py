import random
import string
import sys

len = 8
try:
        len = sys.argv[1]
        len = int(len)
except:
        len = 8

if len  < 1:
        len = 8

def password_generator(length):
    letters = string.ascii_letters + string.digits
    result = ''.join(random.choice(letters) for i in range(length))
    print(result)

password_generator(len)
