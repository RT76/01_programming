def is_prime(num):
    if num <= 1:
        return False
    if num <= 3:
        return True
    if num % 2 == 0 or num % 3 == 0:
        return False
    i = 5
    while i * i <= num:
        if num % i == 0 or num % (i + 2) == 0:
            return False
        i += 6
    return True

number = int(input("请输入一个整数："))

if is_prime(number):
    print(f"{number} 是质数。")
else:
    print(f"{number} 不是质数。")
