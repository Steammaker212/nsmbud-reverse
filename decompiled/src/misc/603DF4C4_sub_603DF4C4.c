/* sub_603DF4C4
 * address: 0x603DF4C4   size: 372   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_603DF4C4(int a1, int a2)
{
  char v2; // r12
  float v5; // s16
  float v6; // s2
  float v7; // s0
  float v8; // s0

  if ( FIELD_U32(a1, 6360) != 3 )
  {
    if ( ((unsigned int)&dword_60C90E54 & ~(1614673144 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C90E54) )
    {
      dword_60C90E50 = (int)&off_60BC04AC;
      _cxa_guard_release(&dword_60C90E54);
    }
    if ( a2 && (**(int (__fastcall ***)(int, int *))a2)(a2, &dword_60C90E50) == 1 )
    {
      v5 = 0.3;
      v6 = (float)((float)(FIELD_F32(a2, 6464) - (float)(FIELD_F32(a1, 112) + 48.0)) / 96.0) + 0.3;
      v7 = 0.3;
      if ( v6 >= 0.3 )
      {
        v7 = (float)((float)(FIELD_F32(a2, 6464) - (float)(FIELD_F32(a1, 112) + 48.0)) / 96.0) + 0.3;
        if ( v6 > 1.0 )
          v7 = 1.0;
      }
      sub_60236238(a1 + 6384, v7);
      v8 = (float)((float)(FIELD_F32(a2, 6468) - (float)(FIELD_F32(a1, 112) + 48.0)) / 96.0) + 0.3;
      if ( v8 >= 0.3 )
      {
        v5 = (float)((float)(FIELD_F32(a2, 6468) - (float)(FIELD_F32(a1, 112) + 48.0)) / 96.0) + 0.3;
        if ( v8 > 1.0 )
          v5 = 1.0;
      }
      sub_602361D4(a1 + 6384, v5);
      EffectWrapper_update((EffectWrapper *)(a1 + 6368), 341, (Vec3 *)(a1 + 6576), 0, 0);
    }
  }
}
