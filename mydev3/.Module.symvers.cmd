cmd_/home/unnar/mydev3/Module.symvers :=  sed 's/ko$$/o/'  /home/unnar/mydev3/modules.order | scripts/mod/modpost -m -a    -o /home/unnar/mydev3/Module.symvers -e -i Module.symvers -T - 
