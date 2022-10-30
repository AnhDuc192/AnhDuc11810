#game made by Brazilian beginner!
#if you like, pls star this
import random
import time
nome = input("What is your name?\n>>>")
pacote = ["demonic eye","goblin","slime","zombie","spider","skeleton"]
monstroescolhido = random.choice(pacote)
print(" ")
print("an {} appeared!".format(monstroescolhido))
print(" ")
jogador = 100
monstro = 100
#Your attack
while jogador > 1:
  time.sleep(1)
  print("==================")
24
  print(" ")
25
  print("{}'s life: {}\n{}'s life: {}".format(nome, jogador, monstroescolhido, monstro))
26
  print(" ")
27
  time.sleep(1)
28
  print("What {} will do?".format(nome))
29
  ataque = int(input("[1] Normal attack\n[2] Special attack\n[3] Recover life\n>>>"))
30
  print(" ")
31
  
32
  if ataque == 1:
33
    time.sleep(1)
34
    print("{} dealt 15 damage!".format(nome))
35
    monstro = monstro - 15
36
    time.sleep(1)
37
    print("{} have {} life now!".format(monstroescolhido, monstro))
    print(" ")
  elif ataque == 2:
    time.sleep(1)
    chance = random.randint(1,2)