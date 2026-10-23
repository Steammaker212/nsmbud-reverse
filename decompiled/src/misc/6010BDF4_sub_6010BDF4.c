/* sub_6010BDF4
 * address: 0x6010BDF4   size: 516   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_6010BDF4(int a1, unsigned int a2)
{
  float v4; // s18
  double v5; // d0
  float v6; // s2
  float v7; // s16
  float *v8; // r5
  char v9; // r12
  char v10; // r12
  int v11; // s0
  ActorBuildInfo v12; // [sp+4h] [bp-4Ch] BYREF

  memset(&v12.settings2, 0, 40);
  v12.profile = Profile__get(0x277u);
  v4 = 10.0;
  if ( a2 > 0xF )
    v4 = -10.0;
  v5 = ((double (__fastcall *)(int, float))*(_DWORD *)(*(_DWORD *)a1 + 1152))(a1, -10.0);
  v7 = v6;
  v12.position.z = v6;
  v12.position.x = v4 + *(float *)&v5;
  v12.position.y = *((float *)&v5 + 1) + 6.0;
  v12.settings1 = a2 | 0x3000;
  v8 = (float *)ActorMgr__create((void *)ActorMgr__instance, &v12, 0);
  if ( ((unsigned int)&dword_60C7B364 & ~(1611710108 << v9) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
  {
    StageActor_RTTI = (int)&off_60BC0098;
    _cxa_guard_release(&dword_60C7B364);
  }
  if ( v8 && (**(int (__fastcall ***)(float *, int *))v8)(v8, &StageActor_RTTI) == 1 )
  {
    v8[29] = v7 + -16.0;
    if ( ((unsigned int)&dword_60C866E0 & ~(1611710236 << v10) & 1) == 0 && _cxa_guard_acquire(&dword_60C866E0) )
    {
      dword_60C866DC = (int)&off_60BD05B8;
      _cxa_guard_release(&dword_60C866E0);
    }
    if ( (**(int (__fastcall ***)(float *, int *))v8)(v8, &dword_60C866DC) == 1 )
    {
      v11 = byte_60AFE3F4[*((_DWORD *)v8 + 20)];
      *((_DWORD *)v8 + 3289) = 805306368 * v11;
      *((_DWORD *)v8 + 40) = (int)(float)((float)(2147500000.0 * (float)((float)v11 * 45.0)) / 180.0);
    }
    FIELD_U8(a1, 8136) = 0;
    FIELD_F32(a1, 8120) = v8[2];
  }
}
