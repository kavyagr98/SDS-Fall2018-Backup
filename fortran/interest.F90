program interest
  implicit none
  
integer :: bank1, bank2, years 

bank1 = 100
bank2 = 200
years = 0

do while (bank1 < bank2)
   bank1 = bank1+(bank1*0.05)
   bank2 = bank2+(bank2*0.02)
   years = years + 1
   print *, bank1
   print *, bank2
end do
print *,years
end program interest
