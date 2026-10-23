/* sub_600D18C8
 * address: 0x600D18C8   size: 464   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_600D18C8(int a1, int a2)
{
  char v2; // r12
  float *v3; // r6
  int v4; // r5
  float *v5; // r4
  char v6; // r12
  bool v7; // zf
  float *v8; // r6
  float v9; // s18
  float v10; // s20
  float v11; // s0
  float v12; // s0
  float v13; // s16
  float v14; // s0

  v3 = *(float **)(a1 + 64);
  v4 = FIELD_U32(a2, 64);
  if ( ((unsigned int)&dword_60C80050 & ~(1611471080 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C80050) )
  {
    dword_60C8004C = (int)&off_60BC04AC;
    _cxa_guard_release(&dword_60C80050);
  }
  if ( v3 )
  {
    v5 = (float *)(**(int (__fastcall ***)(float *, int *))v3)(v3, &dword_60C8004C);
    if ( v5 )
      v5 = v3;
    v7 = v4 == 0;
    if ( v4 )
      v7 = v5 == 0;
    if ( !v7 && FIELD_U8(v4, 533) == 1 )
    {
      if ( ((unsigned int)&dword_60C7B37C & ~(1611471224 << v6) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
      {
        dword_60C7B378 = (int)&off_60BC00BC;
        _cxa_guard_release(&dword_60C7B37C);
      }
      v8 = (float *)(**(int (__fastcall ***)(int, int *))v4)(v4, &dword_60C7B378);
      if ( v8 )
        v8 = (float *)v4;
      if ( !(*(int (__fastcall **)(float *, float *))(*(_DWORD *)v5 + 748))(v5, v8) )
      {
        v9 = v8[28] - v5[28];
        v10 = v8[27] - v5[27];
        v11 = sqrtf((float)(v9 * v9) + (float)(v10 * v10));
        if ( v11 > 0.0 )
        {
          v12 = 1.0 / v11;
          v9 = v9 * v12;
          v10 = v10 * v12;
        }
        v13 = (*(float (__fastcall **)(float *))(*(_DWORD *)v5 + 660))(v5);
        v14 = (*(float (__fastcall **)(float *, float))(*(_DWORD *)v5 + 664))(v5, v13);
        (*(void (__fastcall **)(float *, int, _DWORD, _DWORD, float, float))(*(_DWORD *)v8 + 748))(
          v8,
          1,
          0,
          0,
          v9 * v14,
          v10 * v13);
      }
    }
  }
}
