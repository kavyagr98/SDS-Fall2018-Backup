program primes
  implicit none
  
  integer :: input,divisors 
  
  print *, 'Enter your number: '
  read *, input
  
  do divisors = 2, input
     if (mod(input,divisors)==0 .and. divisors<input-1) then
        print *,'Your number is not prime, it is divisible by:',divisors
        exit    
     else if (divisors == input) then
        print *, 'Your number is prime.'
     end if
  end do
end program primes
