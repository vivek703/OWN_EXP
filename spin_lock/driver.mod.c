#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

#ifdef RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x7377b0b2, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x5640408e, __VMLINUX_SYMBOL_STR(device_destroy) },
	{ 0x6f5f225c, __VMLINUX_SYMBOL_STR(kthread_stop) },
	{ 0xe1963afc, __VMLINUX_SYMBOL_STR(cdev_del) },
	{ 0x7485e15e, __VMLINUX_SYMBOL_STR(unregister_chrdev_region) },
	{ 0x3f074b99, __VMLINUX_SYMBOL_STR(class_destroy) },
	{ 0xfa1caac1, __VMLINUX_SYMBOL_STR(wake_up_process) },
	{ 0x75607057, __VMLINUX_SYMBOL_STR(kthread_create_on_node) },
	{ 0x13b297d3, __VMLINUX_SYMBOL_STR(device_create) },
	{ 0xf5f1341c, __VMLINUX_SYMBOL_STR(__class_create) },
	{ 0x5315bca4, __VMLINUX_SYMBOL_STR(cdev_add) },
	{ 0x3b29433f, __VMLINUX_SYMBOL_STR(cdev_init) },
	{ 0x29537c9e, __VMLINUX_SYMBOL_STR(alloc_chrdev_region) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xda3e43d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0xd52bf1ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0xb3f7646e, __VMLINUX_SYMBOL_STR(kthread_should_stop) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "709E1FE2FE9A0E75ACC72F3");
