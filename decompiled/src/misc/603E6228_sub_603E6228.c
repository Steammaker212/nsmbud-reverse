/* sub_603E6228
 * address: 0x603E6228   size: 212   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603E6228(int a1)
{
  int v2; // r0
  int result; // r0
  int (__fastcall ***v4)(_DWORD, int *); // r5
  char v5; // r12
  int v6; // r0

  v2 = FIELD_U32(a1, 48);
  if ( !v2 || (result = v2 - 1, (FIELD_U32(a1, 48) = result) == 0) )
  {
    sub_603FBAF8(dword_60C99DD4);
    v4 = *(int (__fastcall ****)(_DWORD, int *))(dword_60C96478 + 104);
    if ( ((unsigned int)&dword_60C965B4 & ~(1614701176 << v5) & 1) == 0 && _cxa_guard_acquire(&dword_60C965B4) )
    {
      dword_60C965B0 = (int)&off_60BC04AC;
      _cxa_guard_release(&dword_60C965B4);
    }
    if ( v4 )
    {
      v6 = (**v4)(v4, &dword_60C965B0);
      if ( v6 )
        v6 = (int)v4;
    }
    else
    {
      v6 = 0;
    }
    sub_6039E438(v6);
    sub_60024054(0);
    FIELD_U32(a1, 52) = 1;
    return 1;
  }
  return result;
}
