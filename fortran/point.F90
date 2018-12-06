program points
implicit none

type point
 real :: x,y
end type point
type(point) :: point1, point2

type rectangle
type(point) :: bl,tr
end type rectangle
type(rectangle) :: rect1

point1 = point(3,4)
point2 = point(5,7)

rect1 = rectangle(point1,point2)

print *, "Area: ", area(rect1)

contains
real (4) function area(rect)
implicit none
type(rectangle), intent(in) :: rect
area = (rect%tr%x-rect%bl%x)*(rect%tr%y-rect%bl%y)
end function area
  
end program points

