def func(nums, n):
	if n == 1:
		nums.append("1")
		return " ".join(nums)
	elif n % 2 == 1:
		nums.append(str(int(n)))
		n = 3*n + 1
		return func(nums, n)
	elif n % 2 == 0:
		nums.append(str(int(n)))
		n = n / 2
		return func(nums, n)
 
 
if __name__ == "__main__":
	n = int(input())
	numlist = []
 
	print(func(numlist, n))
