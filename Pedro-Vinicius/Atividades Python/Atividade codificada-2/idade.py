ano_atual=2026
try:
    ano_nascimento = int(input("Digite seu ano de nascimento:"))
    if 1900 <= ano_nascimento <= ano_atual:
        print(f"idade:{ano_atual - ano_nascimento} anos")
    else:
        print("Anos de nascimento Invalido.")
except ValueError:
    print("Digite um ano inteiro Valido")