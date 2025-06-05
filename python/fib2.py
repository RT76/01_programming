def generate_fibonacci_sequence(n):
    if n <= 0:
        return []
    elif n == 1:
        return [0]
    elif n == 2:
        return [0, 1]
    else:
        fibonacci_sequence = [0, 1]
        for i in range(2, n):
            next_fibonacci = fibonacci_sequence[i - 1] + fibonacci_sequence[i - 2]
            fibonacci_sequence.append(next_fibonacci)
        return fibonacci_sequence

num_terms = int(input("请输入斐波那契数列的项数："))
fibonacci_sequence = generate_fibonacci_sequence(num_terms)

print(f"前 {num_terms} 项斐波那契数列为：")
print(fibonacci_sequence)
