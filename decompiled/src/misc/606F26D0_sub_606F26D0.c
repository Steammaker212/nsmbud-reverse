/* sub_606F26D0
 * address: 0x606F26D0   size: 756   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_606F26D0(float *a1)
{
  char v1; // r12
  int v2; // r10
  int v3; // r11
  float v4; // s0
  float v5; // s0
  float *v6; // [sp+10h] [bp-70h]
  float *v7; // [sp+14h] [bp-6Ch]
  float *v8; // [sp+20h] [bp-60h]
  float *v9; // [sp+24h] [bp-5Ch]
  float *v10; // [sp+28h] [bp-58h]
  float *v11; // [sp+38h] [bp-48h]

  v2 = 12;
  v7 = a1 + 1883;
  v6 = a1 + 1885;
  v8 = a1 + 1529;
  v9 = a1 + 1527;
  v10 = a1 + 1528;
  v11 = a1 + 1526;
  do
  {
    v3 = *(_DWORD *)(PlayerMgr_instance + 4 * v2);
    if ( ((unsigned int)&dword_60C7B37C & ~(1617897508 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
    {
      dword_60C7B378 = (int)&off_60BC00BC;
      _cxa_guard_release(&dword_60C7B37C);
    }
    if ( v3 && (**(int (__fastcall ***)(int, int *))v3)(v3, &dword_60C7B378) == 1 )
    {
      if ( ((unsigned int)&dword_60C7B364 & ~(1617897592 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
      {
        StageActor_RTTI = (int)&off_60BC0098;
        _cxa_guard_release(&dword_60C7B364);
      }
      if ( (**(int (__fastcall ***)(int, int *))v3)(v3, &StageActor_RTTI) == 1
        && (FIELD_U16(PlayerMgr_instance, 66) & (unsigned __int16)(1 << FIELD_U8(v3, 84))) != 0 )
      {
        v4 = FIELD_F32(v3, 108);
        if ( *v11 <= v4 && v4 <= *v10 )
        {
          v5 = FIELD_F32(v3, 112);
          if ( *v9 <= v5 && v5 <= *v8 )
          {
            if ( ((unsigned int)&dword_60C7B374 & ~(1617897796 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B374) )
            {
              dword_60C7B370 = (int)&off_60BC00B0;
              _cxa_guard_release(&dword_60C7B374);
            }
            if ( (**(int (__fastcall ***)(int, int *))v3)(v3, &dword_60C7B370) == 1 )
              sub_607BFADC(v3, *v7 + (float)(*v6 * 0.5));
          }
        }
      }
    }
    ++v2;
  }
  while ( v2 != 16 );
}
