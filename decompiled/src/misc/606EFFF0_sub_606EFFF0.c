/* sub_606EFFF0
 * address: 0x606EFFF0   size: 412   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606EFFF0(float *a1, int a2)
{
  int *v4; // r6
  char v5; // r12
  int v6; // r5
  float v7; // s0
  float v8; // s2
  float v9; // s4
  float v10; // s6
  float v11; // s8

  while ( 1 )
  {
    if ( !a2 )
      a2 = FIELD_U32(ActorMgr__instance, 27172);
    v4 = (int *)sub_60008598(ActorMgr__instance, 392, a2);
    v6 = *v4;
    if ( !*v4 )
      break;
    if ( ((unsigned int)&dword_60C7B39C & ~(1617887388 << v5) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B39C) )
    {
      dword_60C7B398 = (int)&off_60BC00E0;
      _cxa_guard_release(&dword_60C7B39C);
    }
    if ( (**(int (__fastcall ***)(int, int *))v6)(v6, &dword_60C7B398) == 1 )
    {
      v7 = FIELD_F32(v6, 108);
      v8 = a1[27] + a1[143];
      v9 = FIELD_F32(v6, 7400) * 0.5;
      if ( (float)(v7 + v9) >= (float)(v8 + a1[161]) )
      {
        v10 = FIELD_F32(v6, 112);
        v11 = a1[28] + a1[144];
        if ( v10 <= (float)(v11 + a1[162])
          && (float)(v10 + FIELD_F32(v6, 7404)) >= (float)(v11 + a1[164])
          && (float)(v7 - v9) <= (float)(v8 + a1[163]) )
        {
          return 1;
        }
      }
    }
    a2 = (int)(v4 + 1);
  }
  return 0;
}
