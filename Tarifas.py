print("Tipo de usuario:")
print("1. Estudiante")
print("2. Adulto")
print("3. Adulto mayor")

tipo = int(input("Seleccione una opcion: "))
distancia = float(input("Ingrese distancia (km): "))

if tipo == 1:
    tarifa = distancia * 0.5
elif tipo == 2:
    tarifa = distancia * 1.0
elif tipo == 3:
    tarifa = distancia * 0.3
else:
    print("Tipo invalido")
    exit()

print("Tarifa a pagar: S/", tarifa)
