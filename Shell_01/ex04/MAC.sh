ifconfig -a | grep eth | awk '{print $2}' | sed '2d'
