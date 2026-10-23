/* sub_6070B84C
 * address: 0x6070B84C   size: 404   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_6070B84C(int a1, int a2)
{
  char v2; // r12
  int v3; // r4
  int v5; // r0
  char v6; // r12
  int v7; // r0

  v3 = FIELD_U32(a2, 64);
  v5 = FIELD_U8(v3, 533);
  if ( (unsigned int)(v5 - 1) >= 2 )
  {
    if ( v5 == 3
      && (Actor__getProfileId((Actor *)v3) == 521
       || Actor__getProfileId((Actor *)v3) == 522
       || Actor__getProfileId((Actor *)v3) == 523) )
    {
      if ( ((unsigned int)&dword_60C803F0 & ~(1618000228 << v6) & 1) == 0 && _cxa_guard_acquire(&dword_60C803F0) )
      {
        dword_60C803EC = (int)&off_60BC321C;
        _cxa_guard_release(&dword_60C803F0);
      }
      if ( v3 )
      {
        v7 = (**(int (__fastcall ***)(int, int *))v3)(v3, &dword_60C803EC);
        if ( v7 )
          v7 = v3;
        sub_6025E064(v7);
      }
      else
      {
        sub_6025E064(0);
      }
    }
  }
  else
  {
    if ( ((unsigned int)&dword_60C7B37C & ~(1617999992 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
    {
      dword_60C7B378 = (int)&off_60BC00BC;
      _cxa_guard_release(&dword_60C7B37C);
    }
    if ( v3 )
    {
      if ( (**(int (__fastcall ***)(int, int *))v3)(v3, &dword_60C7B378) == 1 )
        (*(void (__fastcall **)(int, _DWORD, int))(*(_DWORD *)v3 + 1168))(v3, FIELD_U32(a1, 64), 9);
    }
  }
}
