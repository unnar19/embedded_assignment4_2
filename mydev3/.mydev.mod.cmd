cmd_/home/unnar/mydev3/mydev.mod := printf '%s\n'   mydev.o | awk '!x[$$0]++ { print("/home/unnar/mydev3/"$$0) }' > /home/unnar/mydev3/mydev.mod
