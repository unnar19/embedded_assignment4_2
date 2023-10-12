cmd_/home/unnar/assignment4_2/mydev1/mydev.mod := printf '%s\n'   mydev.o | awk '!x[$$0]++ { print("/home/unnar/assignment4_2/mydev1/"$$0) }' > /home/unnar/assignment4_2/mydev1/mydev.mod
