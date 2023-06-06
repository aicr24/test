def multiplicacion(num1, num2):
    prod = num1 * num2
    return prod

def factorial(num):
    if num == 0: return 1

    return num * factorial(num-1)

num1 = int(input("Ingrese un numero: "))
num2 = int(input("Ingrese otro numero: "))

mult = multiplicacion(num1, num2)

print(f"El producto de los numeros ingresados es: {mult}")

num3 = int(input("Ingrese un tercer numero: "))
fact = factorial(num3)

print(f"El factorial del tercer numero ingresado es: {fact}")