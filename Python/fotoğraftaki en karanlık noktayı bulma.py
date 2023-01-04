import cv2 
im=cv2.imread(r"C:\Users\kalps\Desktop\jpk.png")
image=cv2.cvtColor(im, cv2.COLOR_RGB2GRAY)
satirsayisi, sutunsayisi = image.shape
enkucukdeğer=999
ilkx=0
ilky=0


enkucuklist=[]
for satir in range(satirsayisi):
    for sutun in range(sutunsayisi):
        if(enkucukdeğer >= image[satir][sutun]):
            enkucuklist.append([satir,sutun])

print(enkucuklist[0][0])
print(enkucuklist[0][1])
print(enkucuklist[-1][0])
print(enkucuklist[-1][1])
