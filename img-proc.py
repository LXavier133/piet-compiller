from PIL import Image

img=Image.open("305.jpg")

pixel=img.load()

width,height=img.size

print(height)
print(width)
for x in range(width):
	for y in range(height):
		print(pixel[x,y][0])
		print(pixel[x,y][1])
		print(pixel[x,y][2])
