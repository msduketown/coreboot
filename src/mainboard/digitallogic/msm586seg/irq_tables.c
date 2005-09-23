/* This file was generated by getpir.c, do not modify! 
   (but if you do, please run checkpir on it to verify)
 * Contains the IRQ Routing Table dumped directly from your memory, which BIOS sets up
 *
 * Documentation at : http://www.microsoft.com/hwdev/busbios/PCIIRQ.HTM
*/

#include <arch/pirq_routing.h>

const struct irq_routing_table intel_irq_routing_table = {
	PIRQ_SIGNATURE,  /* u32 signature */
	PIRQ_VERSION,    /* u16 version   */
	32+16*7,	 /* there can be total 7 devices on the bus */
	0x00,		 /* Where the interrupt router lies (bus) */
	(0x00<<3)|0x0,   /* Where the interrupt router lies (dev) */
	0,		 /* IRQs devoted exclusively to PCI usage */
	0x8086,		 /* Vendor */
	0x122e,		 /* Device */
	0,		 /* Crap (miniport) */
	{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, /* u8 rfu[11] */
	0x50,         /*  u8 checksum , this hase to set to some value that would give 0 after the sum of all bytes for this structure (including checksum) */
	{
		/* bus,     dev|fn,   {link, bitmap}, {link, bitmap}, {link, bitmap}, {link, bitmap},  slot, rfu */
		{0x00,(0x12<<3)|0x0, {{0x30, 0x8000}, {0x00, 0x0}, {0x00, 0x0}, {0x00, 0x00}}, 0x0, 0x0},
		{0x00,(0x14<<3)|0x0, {{0x30, 0x8000}, {0x31, 0x0}, {0x32, 0x0}, {0x33, 0x00}}, 0x0, 0x0},
	}
};
unsigned long write_pirq_routing_table(unsigned long addr)
{
        return copy_pirq_routing_table(addr);
}
