from PIL import Image

img=Image.open("oi.png")

pixel=img.load()

width,height=img.size

print(height)
print(width)

def rgb(r, g, b):
    return ((r & 0xff) << 16) + ((g & 0xff) << 8) + (b & 0xff)

for x in range(width):
	for y in range(height):
		print(rgb(pixel[x,y][0],pixel[x,y][1],pixel[x,y][2]))
