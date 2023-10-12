cmd_/home/unnar/mydev2/mydev.mod := printf '%s\n'   mydev.o | awk '!x[$$0]++ { print("/home/unnar/mydev2/"$$0) }' > /home/unnar/mydev2/mydev.mod
