# Solicita os dados ao usuário
freq = float(input("Digite a frequência de sinal em Hz: "))
res = float(input("Digite a resistência em ohms: "))
cap = float(input("Digite a capacitância em farads: "))
ind = float(input("Digite a indutância em henrys: "))

# Calcula as reatâncias do capacitor e da bobina
xc = 1 / (2 * 3.14 * freq * cap)
xl = 2 * 3.14 * freq * ind

# Calcula a impedância total do circuito
z = ((res * 2) + ((xl - xc) * 2)) ** 0.5

# Imprime o relatório na tela
print("-----------------------------")
print("RELATÓRIO DE CIRCUITO")
print("Frequência: {} Hz".format(freq))
print("Resistência do resistor: {} ohms".format(res))
print("Reatância do capacitor: {} ohms".format(xc))
print("Reatância da bobina: {} ohms".format(xl))
print("\nImpedância total: {} ohms".format(z))
print("-----------------------------")
