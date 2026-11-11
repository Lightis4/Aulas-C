try:
    a = float(input("Digite o primeiro numero:"))
    b = float(input("Digite o segundo numero:"))
    
    print(f"soma: {a + b}")
    print(f"subtração: {a - b}")
    print(f"multiplicação: {a * b}")
    if b != 0:
        print(f"divisão: {a / b}")
    else:
        print("Não é possível dividir por zero.")
except ValueError:
    print("Por favor, digite apenas números válidos.")