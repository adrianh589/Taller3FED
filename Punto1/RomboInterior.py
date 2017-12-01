import random

print("Introduzca el tamanio de la matriz")
m=int(input())

matriz=[]
nueva_matriz=[]

#Establish the dimension of the two matrices
for i in range(m):
    matriz.append([0]*m)
    nueva_matriz.append([0]*m)

# Fill the matrix with random numbers
for i in range(m):
    for j in range(m):
        matriz[i][j] = random.randint(1, 9)

#Show original matrix
print("La matriz original es")
for i in range(m):
    print(matriz[i])

mitad = int(matriz.__len__() / 2)

if(m%2==0):#If the number entered by the user is even...
    #upper left of the diamond
    for i in range(0,int(matriz.__len__()/2)):
        for j in range (mitad-1,int(matriz.__len__()/2)):
            nueva_matriz[i][j]=matriz[i][j]
        mitad-=1;

    mitad=int(matriz.__len__()/2)
    #upper right of the diamond
    for i in range(0,int(matriz.__len__()/2)):
        for j in range (int(matriz.__len__()/2),mitad+1):
            nueva_matriz[i][j]=matriz[i][j]
        mitad+=1;

    mitad=int(matriz.__len__()/2)

    #lower left of the diamond
    for i in range(int(matriz.__len__()/2),int(matriz.__len__())):
        for j in range (int(mitad-(m/2)),int(matriz.__len__()/2)):
            nueva_matriz[i][j]=matriz[i][j]
        mitad+=1;

    mitad=int(matriz.__len__()/2)

    #lower right of the diamond
    for i in range(int(matriz.__len__()/2),int(matriz.__len__())):
        for j in range (int(matriz.__len__()/2),int(mitad+(m/2))):
            nueva_matriz[i][j]=matriz[i][j]
        mitad-=1;

else:#If the number entered by the user is odd...

    # upper left of the diamond
    for i in range(1, int(matriz.__len__() / 2)):
        for j in range(mitad - 1, int(matriz.__len__() / 2)):
            nueva_matriz[i][j] = matriz[i][j]
        mitad -= 1;

    mitad = int(matriz.__len__() / 2)
    # upper right of the diamond
    for i in range(0, int(matriz.__len__() / 2)):
        for j in range(int(matriz.__len__() / 2), mitad + 1):
            nueva_matriz[i][j] = matriz[i][j]
        mitad += 1;

    mitad = int(matriz.__len__() / 2)

    # lower left of the diamond
    for i in range(int(matriz.__len__() / 2), int(matriz.__len__())):
        for j in range(int(mitad+1 - (m / 2)), int(matriz.__len__() / 2)):
            nueva_matriz[i][j] = matriz[i][j]
        mitad += 1;

    mitad = int(matriz.__len__() / 2)

#Lower right of the diamond
for i in range(int(matriz.__len__() / 2), int(matriz.__len__())):
    for j in range(int(matriz.__len__() / 2), int(mitad + (m / 2)+1)):
        nueva_matriz[i][j] = matriz[i][j]
    mitad -= 1;



#print the numbers inside the diamond
print("El rombo interior de la matriz es")
for i in nueva_matriz:
    print(i)