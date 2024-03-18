class Rectangle:
    def __init__(self,width,height):
        self.width=width
        self.height=height
        self.shape='rectangle'

    def __str__(self):
        return f'Rectangle(width={self.width}, height={self.height})'
    def set_width(self,width):
        self.width=width
    def set_height(self,height):
        self.height = height
    def get_area(self):
        return  self.width * self.height
    def get_perimeter(self):
        return (2 * self.width + 2 * self.height)
    def get_diagonal(self):
        return ((self.width ** 2 + self.height ** 2) ** .5)
    def get_picture(self):
        if self.height>50 or self.width>50:
            return "Too big for picture."
        picture = ""
        for h in range(self.height):
            for w in range(self.width):
                picture+="*"
            picture+="\n"
        return picture
    def get_amount_inside(self,shape):
        x=0
        avHeight=self.height
        avWidth=self.width
        while avWidth>=shape.width:
            while(avHeight>=shape.height):
                avHeight=avHeight-shape.height

                x+=1

            avHeight = self.height
            avWidth = avWidth - shape.width

        return x

class Square(Rectangle):
    def __init__(self,side):
        super().__init__(side,side)
        self.shape='square'

    def __str__(self):
        return f'Square(side={self.width})'
    def set_width(self, width):
        self.width = width
        self.height = width
    def set_height(self, height):
        self.height = height
        self.width = height
    def set_side(self, side):
        self.height = side
        self.width = side








rect = Rectangle(10, 5)
print(rect.get_area())
rect.set_height(3)
print(rect.get_perimeter())
print(rect)
print(rect.get_picture())

sq = Square(9)
print(sq.get_area())
sq.set_side(4)
print(sq.get_diagonal())
print(sq)
print(sq.get_picture())

rect.set_height(8)
rect.set_width(16)
print(Rectangle(15,10).get_amount_inside(Square(5)))

