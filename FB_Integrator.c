#include <bur/plctypes.h> #ifdef  cplusplus
extern "C"
{
#endif
#include "MotorCtrl.h"
#ifdef  cplusplus
};
#endif
/* TODO: Add your comment here */
void FB_Integrator(struct FB_Integrator* inst)
{
inst->out = inst->in * inst->dt + inst->out;
}
