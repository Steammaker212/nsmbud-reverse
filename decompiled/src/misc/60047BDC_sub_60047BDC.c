/* sub_60047BDC
 * address: 0x60047BDC   size: 384   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_60047BDC(int a1)
{
  char v2; // r12
  int v3; // r0
  int (__fastcall ***v4)(_DWORD, int *); // r5
  int v5; // r6
  float v6; // s16
  float v7; // s20
  float v8; // s22
  float v9; // s18
  float v10; // s0

  sub_600D17F4(a1);
  v3 = FIELD_U32(a1, 6960);
  if ( v3 < 0 )
    return 0;
  if ( (unsigned int)v3 >= 4 )
    v3 = 0;
  v4 = *(int (__fastcall ****)(_DWORD, int *))(PlayerMgr_instance + 4 * v3 + 32);
  if ( ((unsigned int)&dword_60C7B364 & ~(1610906664 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
  {
    StageActor_RTTI = (int)&off_60BC0098;
    _cxa_guard_release(&dword_60C7B364);
  }
  v5 = (int)(v4 + 27);
  v6 = 0.0;
  if ( !(**v4)(v4, &StageActor_RTTI) )
    v5 = 108;
  v7 = FIELD_F32(a1, 11584) - FIELD_F32(a1, 112);
  v8 = *(float *)v5 - FIELD_F32(a1, 108);
  v9 = (float)((float)(v7 * v7) + (float)(v8 * v8)) + 0.0;
  if ( sqrtf(v9) != 0.0 )
  {
    v10 = (float)((float)((float)(v8 * 0.0) - v7) + 0.0) / sqrtf(v9);
    v6 = 1.0;
    if ( v10 <= 1.0 )
    {
      v6 = v10;
      if ( v10 < -1.0 )
        v6 = -1.0;
    }
  }
  return (float)(acosf(v6) * 57.296) <= 50.0;
}
