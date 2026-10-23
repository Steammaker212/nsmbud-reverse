/* sub_602EDD20
 * address: 0x602EDD20   size: 304   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_602EDD20(int a1, float *a2, unsigned int *a3)
{
  char v3; // r12
  int v7; // r5
  unsigned int v8; // r1
  float v9; // s12
  float *v10; // r0
  float v11; // s0
  float v12; // s2
  float v13; // s8
  float v14; // s4
  float v15; // s6
  float v16; // s0
  float v17; // s2
  float v18; // s4

  v7 = FIELD_U32(a1, 56);
  if ( ((unsigned int)dword_60C7B430 & ~(1613684036 << v3) & 1) == 0 && _cxa_guard_acquire(dword_60C7B430) )
  {
    Enemy_RTTI = (int)&off_60BC00C8;
    _cxa_guard_release(dword_60C7B430);
  }
  if ( v7 )
  {
    if ( (**(int (__fastcall ***)(int, int *))v7)(v7, &Enemy_RTTI) == 1 )
    {
      v8 = FIELD_U32(v7, 164);
      *a3 = v8;
      v9 = FIELD_F32(a1, 7376);
      v10 = (float *)((char *)sinLutTable + ((v8 >> 20) & 0xFF0));
      v11 = (float)(v8 & 0xFFFFFF) * 0.000000059605;
      v12 = FIELD_F32(a1, 7372);
      v13 = v10[2] + (float)(v11 * v10[3]);
      v14 = *v10 + (float)(v11 * v10[1]);
      v15 = (float)(v9 * v13) + (float)(v12 * v14);
      v16 = (float)(v12 * v13) - (float)(v9 * v14);
      v17 = FIELD_F32(v7, 116) - FIELD_F32(a1, 7380);
      v18 = FIELD_F32(v7, 112) - v15;
      *a2 = FIELD_F32(v7, 108) - v16;
      a2[1] = v18;
      a2[2] = v17;
    }
  }
}
