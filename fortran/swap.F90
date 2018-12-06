program swap_it
  implicit none
  integer :: i=2,j=3
  call swap(i,j)
  print *, i, " ",j

contains  
  subroutine swap (i,j)
    implicit none    
    integer :: i,j,hold
    hold = i
    i = j
    j = hold
  end subroutine swap
end program swap_it

