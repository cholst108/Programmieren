#!/bin/bash
title="Holstens Super Ding"
prompt="Wähle aus:"
options=("A" "B" "C")

echo "$title"
PS3="$prompt "
select opt in "${options[@]}" "Quit"; do 
    case "$REPLY" in
    1) echo "You picked $opt which is option 1";;
    2) echo "You picked $opt which is option 2";;
    3) echo "You picked $opt which is option 3";;
    $((${#options[@]}+1))) echo "Goodbye!"; break;;
    *) echo "Invalid option. Try another one.";continue;;
    esac
done

while opt=$(zenity --title="$title" --text="$prompt" --list \
                   --column="Options" "${options[@]}")
do
    case "$opt" in
    "${options[0]}") zenity --info --text="You picked $opt, option 1";;
    "${options[1]}") zenity --info --text="You picked $opt, option 2";;
    "${options[2]}") zenity --info --text="You picked $opt, option 3";;
    *) zenity --error --text="Invalid option. Try another one.";;
    esac
done
