# kernel-endless

This kernel module does nothing but loop forever in the modules init function. 
The kernel will hangup. No chance to exit this module, therefore no process scheduling is possible.

This module has no purpose and is written just for fun and learning.

# Attention

## The system will hang and never return back!

Within the init function of the kernel module, there is an endless loop. 
Since the kernel will never return out of the module, the system will hang, because the scheduler is not called anymore.

The only thing that help is a hardware reset of the computer (or VM).

## The cpu running on 100% --> temperature risk

Never run this module on temperature sensitive machines for a long time. No fan controlled by the kernel will be activated.
