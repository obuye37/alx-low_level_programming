def is_palindrome(num):
    return str(num) == str(num)[::-1]

def find_factors_of_palindrome():
    largest_palindrome = 0
    factors = (0, 0)

    for i in range(100, 1000):
        for j in range(i, 1000):
            product = i * j

            if is_palindrome(product) and product > largest_palindrome:
                largest_palindrome = product
                factors = (i, j)

    return factors

factors = find_factors_of_palindrome()
print("The 3-digit numbers that form the largest palindrome (906609) are:", factors)
