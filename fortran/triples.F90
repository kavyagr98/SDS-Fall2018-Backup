program triples
  implicit none
  
integer :: u,v,w

do u = 1, 100
   do v = 1,100
      do w = 1,100
         if (u**2 + v**2 == w**2 .and. v>u) then
            print *,' ',u,' ',v,' ',w
            exit 
         end if
      end do
   end do
end do
end program triples
