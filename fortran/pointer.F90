program pointer
implicit none

real, dimension(5), target :: x = [1.5, 2.5, 5.5, 3.5, 4.5]
real, target :: largest_value
real, pointer :: largest

print*, x
largest = get_largest(x)
largest = 0
print*, x

contains
  function get_largest(array) result(largest)
    implicit none    
    integer :: i
    real, intent(in), dimension(:), target :: array
    real, pointer :: largest
    largest => array(1)
    do i=1, size(array)
       if (array(i)>largest) then
          largest => array(i)
       end if
    end do
end function get_largest
  
end program pointer
