cmd_/home/unnar/mydev2/Module.symvers :=  sed 's/ko$$/o/'  /home/unnar/mydev2/modules.order | scripts/mod/modpost -m -a    -o /home/unnar/mydev2/Module.symvers -e -i Module.symvers -T - 
