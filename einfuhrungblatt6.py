# Ausdruck 1: a or b
def expression_1(a, b):
    return a or b

# Ausdruck 2: a and (b or c) or (b and not c)
def expression_2(a, b, c):
    return (a and (b or c)) or (b and not c)

# Ausdruck 3: (a or (b XOR ¬b)) and (¬a or (b XOR ¬b))
def expression_3(a, b):
    return (a or (b ^ (not b))) and (not a or (b ^ (not b)))

# Ausdruck 4: a or (¬b and ¬a)
def expression_4(a, b):
    return a or (not b and not a)

# Ausdruck 5: a or not c
def expression_5(a, c):
    return a or not c




# Ausdruck 6: (¬a or ¬b or ¬c) and (¬a or u or ¬c)
def expression_6(a, b, c,u):
    # Beachte: 'u' wurde als Platzhalter interpretiert, da es nicht spezifiziert wurde
    return (not a or not b or not c) and (not a or u or not c)

# Ausdruck 7: (A or (¬b or ¬a) or (c or d))
def expression_7(A, b, a, c, d):
    return (A or (not b or not a) or (c or d))

# Ausdruck 8: a and not b
def expression_8(a, b):
    return a and not b

# Test der Funktionen
print(expression_1(True, False))  # Erwartete Ausgabe: True
print(expression_2(True, False, True))  # Erwartete Ausgabe: False
print(expression_3(True, False))  # Erwartete Ausgabe: True (da XOR immer True ergibt)
print(expression_4(True, False))  # Erwartete Ausgabe: True
print(expression_5(True, False))  # Erwartete Ausgabe: True
print(expression_6(True, False, False, True))  # Erwartete Ausgabe: True/False (abhängig von 'u')
print(expression_7(False, True, True, False, True))  # Erwartete Ausgabe: True
print(expression_8(True, False))  # Erwartete Ausgabe: True
