echo "Enter a password"
read p1
echo "enter confirmation password"
stty -echo
read p2
stty echo
while [ "$p1" != "$p2" ]
do
  echo "password does not match,re-enter the password"
  read p2
done
echo "terminal lock"
echo  "Enter password to unlock"
stty -echo
read p3
stty echo
 while [ "$p1" != "$p3" ]
 do
   clear
   echo "-----------------------terminal locked-------------------"
   echo  "password does not match,re-enter passsword"
   stty -echo
   read p3
   stty echo
 done
 echo "---------------------terminal unlock------------------------"   
