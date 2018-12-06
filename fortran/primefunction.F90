program primef
  implicit none
  
  logical :: primestatus
  integer :: input

  print *, 'Enter your number: '
  read *, input

  primestatus = is_prime(input)
  if (primestatus == .true.) then
     print *, 'Your number is prime'
  else
     print *, 'Your number is not prime'
  end if
  
contains 
  logical function is_prime(input)
    integer :: input,divisors
    
    do divisors = 2, input
       if (mod(input,divisors)==0 .and. divisors<input-1) then
          is_prime = .false.
          exit    
       else if (divisors == input) then
          is_prime = .true.
       end if
    end do
  end function is_prime
end program primef
