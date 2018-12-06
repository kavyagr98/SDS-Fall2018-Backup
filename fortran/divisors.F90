program divisor
  implicit none
  
  integer :: number, divisor_test 

  print *, 'Enter your number: '
  read *, number
  print *, 'Enter the divisor you want to check: '
  read *, divisor_test
  
  if (mod(number,divisor_test)==0) then
     print *,divisor_test,'is a divisor of',number
  else
     print *,divisor_test,'is not a divisor of',number
  end if
end program divisor
