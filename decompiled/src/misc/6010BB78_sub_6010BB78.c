/* sub_6010BB78
 * address: 0x6010BB78   size: 572   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_6010BB78(int a1, unsigned int a2, unsigned int a3)
{
  float *v6; // r5
  double v7; // d0
  float v8; // s2
  float v9; // s16
  int *v10; // r0
  float *v11; // r6
  char v12; // r12
  StateBase *CurrentState; // r0
  int v14; // r7
  float v15; // s0
  ActorBuildInfo v16; // [sp+0h] [bp-50h] BYREF

  memset(&v16, 0, sizeof(v16));
  v16.profile = Profile__get(0x275u);
  v6 = (float *)(a1 + 8132);
  v7 = ((double (__fastcall *)(int))*(_DWORD *)(*(_DWORD *)a1 + 1152))(a1);
  v9 = v8;
  *(double *)&v16.position.x = v7;
  v16.position.z = v8;
  if ( FIELD_F32(a1, 8132) == -9999.0 )
    *v6 = *((float *)&v7 + 1) - FIELD_F32(a1, 112);
  v10 = dword_6010BDBC;
  if ( a2 > 0xF )
    v10 = &dword_6010BDBC[1];
  v16.position.x = *(float *)v10 + *(float *)&v7;
  v16.settings1 = a2;
  v11 = (float *)ActorMgr__create((void *)ActorMgr__instance, &v16, 0);
  if ( ((unsigned int)&dword_60C7B364 & ~(1611709504 << v12) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
  {
    StageActor_RTTI = (int)&off_60BC0098;
    _cxa_guard_release(&dword_60C7B364);
  }
  if ( v11 && (**(int (__fastcall ***)(float *, int *))v11)(v11, &StageActor_RTTI) == 1 )
  {
    v11[29] = v9 + -16.0;
    CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
    v14 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
    if ( v14 == (*(int (**)(void))(dword_60C86564 + 8))() )
    {
      if ( a3 >= 3 )
        a3 = 0;
      v11[28] = *v6 + FIELD_F32(a1, 112);
      *(_BYTE *)(a1 + a3 + 8136) = 1;
      v15 = v11[33];
      if ( v15 == FIELD_F32(a1, 180) )
        v11[33] = v15 * 3.0;
    }
    else
    {
      if ( a3 >= 3 )
        a3 = 0;
      *((_DWORD *)v11 + 40) = (int)(float)((float)(2147500000.0
                                                 * (float)((float)byte_60AFE3F4[*((_DWORD *)v11 + 20)] * 45.0))
                                         / 180.0);
      *(_BYTE *)(a1 + a3 + 8136) = 0;
    }
    *(float *)(a1 + 4 * a3 + 8120) = v11[2];
  }
}
