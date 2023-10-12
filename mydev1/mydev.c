#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("UNNAR");
MODULE_DESCRIPTION("LKM that writes parameter into log file");
MODULE_VERSION("0.1");

static char *param = "<no parameter>";

module_param(param, charp, S_IRUGO);
MODULE_PARM_DESC(param, "The text to log (/var/log/kern.log)");

static int __init mydev_init(void) {
    printk(KERN_INFO "mydev: Hi parameter, %s\n", param);
    return 0;
}

static void __exit mydev_exit(void) {
    printk(KERN_INFO "mydev: Bye parameter, %s\n", param);
}

module_init(mydev_init);
module_exit(mydev_exit);