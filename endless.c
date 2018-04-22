/**
 * @file simple_hello_world.c
 * @author Thomas Brandstaetter
 */


#include <linux/kernel.h>
#include <linux/module.h>
#include <linux/init.h>


static int __init
endless_init(void)
{
    printk(KERN_INFO "%s", "Kernel module will endless looping now\n");
    for (;;) {}
    return 0;
}

static void __exit
endless_cleanup(void)
{
}

module_init(hello_init);
module_exit(hello_cleanup);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Thomas Brandstätter");
MODULE_DESCRIPTION("Endless looping kernel module");
MODULE_VERSION("1.0");
