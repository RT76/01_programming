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

def generate_primes_in_range(start, end):
    primes = []
    for num in range(max(2, start), end + 1):
        if is_prime(num):
            primes.append(num)
    return primes

start_range = int(input("请输入起始范围："))
end_range = int(input("请输入结束范围："))

prime_numbers = generate_primes_in_range(start_range, end_range)
print(f"在范围 {start_range} 到 {end_range} 内的质数为：")
print(prime_numbers)