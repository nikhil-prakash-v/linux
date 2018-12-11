#include <linux/kernel.h>
#include <linux/init.h>
#include <linux/module.h>

MODULE_AUTHOR("Nikhil Prakash V");
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("Sample Hello world");
MODULE_VERSION("0.1");

static int __init helloworld_init(void)
{
	printk(KERN_INFO"Hello world from sample test module !!!\n");
	return 0;
}

static void __exit helloworld_exit(void)
{
	printk(KERN_INFO"Exit from sample hello world module!!!\n");
	return;
}

module_init(helloworld_init);
module_exit(helloworld_exit);
