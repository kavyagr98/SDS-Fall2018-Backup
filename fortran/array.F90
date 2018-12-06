program array
  implicit none
  real,dimension(6) :: x = [1, 2, 3, 4, 5, 6]
  real,dimension(size(x)-1) :: y
  integer :: i

  do i=1,size(x)-1
     y(i) = (x(i)+x(i+1))/2
  end do
  print*, y

  y(1:size(y))=(x(1:size(x)-1)+x(2:size(x)-1))/2
  print *, y
  
end program array

