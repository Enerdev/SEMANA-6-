n = int(input("Ingrese cantidad de elementos: "))

arr = []
print("Ingrese los elementos:")
for _ in range(n):
    arr.append(int(input()))

mayor = arr[0]
segundo = float('-inf')

for i in range(1, n):
    if arr[i] > mayor:
        segundo = mayor
        mayor = arr[i]
    elif arr[i] > segundo and arr[i] != mayor:
        segundo = arr[i]

print("Segundo mayor:", segundo)
