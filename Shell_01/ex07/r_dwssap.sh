cat /etc/passwd | sed '/^#/d' | sed -n 'n;p' | cut -d":" -f1 | rev | sort -r | sed -n "$FT_LINE1,$FT_LINE2 p" | tr "," "\n" | tr "\n"  "," | sed 's/,/, /g' | sed 's/, $/./' |tr -d '\n'
