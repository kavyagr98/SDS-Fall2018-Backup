program sphere
  implicit none
  real(8) :: a,b,c,d, volume, cube
  character(len=10) :: name
  integer :: newd

print *, 'Enter your name: '
read *, name
print *, 'Hello,', name

print *, 'Enter a: '
read *, a
print *, 'Enter b: '
read *, b
print *, 'Enter c: '
read *, c

volume = (4./3.)*(22./7.)*(a**3)

print *, 'The volume of the sphere is: ', volume

cube = a*b*c

print *, 'The volune of the rectangular prism is: ', cube

d = (a*b*c)/7.
newd = int(d)
print *, 'Converted int d: ',newd

end program sphere
