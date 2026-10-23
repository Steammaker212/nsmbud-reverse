/* sub_600CD8F0
 * address: 0x600CD8F0   size: 792   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600CD8F0(int a1, int a2, int a3)
{
  char v3; // r12
  int (__fastcall ***v7)(_DWORD, int *); // r4
  int (__fastcall ***v8)(_DWORD, int *); // r7
  float *v9; // r6
  float *v10; // r4
  int v11; // r6
  float *v12; // r7
  int result; // r0
  float v14; // s16
  float v15; // s18
  float v16; // s0
  float v17; // s0
  _DWORD v18[14]; // [sp+0h] [bp-38h] BYREF

  v7 = *(int (__fastcall ****)(_DWORD, int *))(a2 + 64);
  if ( ((unsigned int)&dword_60C7B364 & ~(1611454748 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
  {
    StageActor_RTTI = (int)&off_60BC0098;
    _cxa_guard_release(&dword_60C7B364);
  }
  if ( v7 )
  {
    v8 = (int (__fastcall ***)(_DWORD, int *))(**v7)(v7, &StageActor_RTTI);
    if ( v8 )
      v8 = v7;
  }
  else
  {
    v8 = 0;
  }
  v9 = *(float **)(a3 + 64);
  if ( ((unsigned int)&dword_60C7B364 & ~(1611454880 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
  {
    StageActor_RTTI = (int)&off_60BC0098;
    _cxa_guard_release(&dword_60C7B364);
  }
  if ( v9 )
  {
    v10 = (float *)(**(int (__fastcall ***)(float *, int *))v9)(v9, &StageActor_RTTI);
    if ( v10 )
      v10 = v9;
  }
  else
  {
    v10 = 0;
  }
  if ( ((unsigned int)&dword_60C84138 & ~(1611455008 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C84138) )
  {
    dword_60C84134 = (int)&off_60BC04AC;
    _cxa_guard_release(&dword_60C84138);
  }
  if ( v8 )
  {
    v11 = (**v8)(v8, &dword_60C84134);
    if ( v11 )
      v11 = (int)v8;
  }
  else
  {
    v11 = 0;
  }
  if ( ((unsigned int)&dword_60C7B37C & ~(1611455136 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
  {
    dword_60C7B378 = (int)&off_60BC00BC;
    _cxa_guard_release(&dword_60C7B37C);
  }
  if ( v10 )
  {
    v12 = (float *)(**(int (__fastcall ***)(float *, int *))v10)(v10, &dword_60C7B378);
    if ( v12 )
      v12 = v10;
  }
  else
  {
    v12 = 0;
  }
  FIELD_U8(a3, 110) |= 2u;
  v18[0] = a2;
  v18[1] = a3;
  result = sub_602A8B10(a1 + 6732, (int)v18);
  if ( result )
  {
    if ( v12[31] <= 0.0 )
      return (*(int (__fastcall **)(float *, int, int, int, float, float))(*(_DWORD *)v12 + 748))(
               v12,
               1,
               1,
               2,
               4.0 + 0.2815,
               v12[22]);
  }
  else
  {
    v14 = v12[28] - FIELD_F32(v11, 112);
    v15 = v12[27] - FIELD_F32(v11, 108);
    v16 = sqrtf((float)(v14 * v14) + (float)(v15 * v15));
    if ( v16 > 0.0 )
    {
      v17 = 1.0 / v16;
      v14 = v14 * v17;
      v15 = v15 * v17;
    }
    return (*(int (__fastcall **)(float *, int, _DWORD, _DWORD, float, float))(*(_DWORD *)v12 + 748))(
             v12,
             1,
             0,
             0,
             v14,
             v15 * 1.5);
  }
  return result;
}
