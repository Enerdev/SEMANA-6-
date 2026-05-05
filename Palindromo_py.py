cadena = input("Ingrese una cadena: ")

i = 0
j = len(cadena) - 1
es_palindromo = True

while i < j:
    if cadena[i] != cadena[j]:
        es_palindromo = False
        break
    i += 1
    j -= 1

if es_palindromo:
    print("Es palindromo")
else:
    print("No es palindromo")