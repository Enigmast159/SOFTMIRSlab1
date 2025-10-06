void FB_Motor(struct FB_Motor* inst)
{
 inst->integrator.out = inst->w;
 inst->integrator.in = (inst->u/inst->ke - inst->w) * (inst->dt/inst->Tm);
 FB_Integrator(&inst->integrator);
 inst->integrator.in = inst->w = inst->integrator.out;
 inst->integrator.in *= inst->dt;
 inst->integrator.out = inst->phi;
 FB_Integrator(&inst->integrator);
 inst->phi = inst->integrator.out;
 
}
