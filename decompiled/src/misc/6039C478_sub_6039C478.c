/* sub_6039C478
 * address: 0x6039C478   size: 168   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6039C478(int result, int a2)
{
  char v2; // r12
  int v3; // r1
  int v4; // r2
  bool v5; // zf
  int (__fastcall ***v6)(_DWORD, int *); // r4
  int v7; // r0

  v3 = FIELD_U32(a2, 64);
  v4 = FIELD_U8(v3, 533);
  v5 = v4 == 2;
  if ( v4 == 2 )
    v5 = FIELD_U8(v3, 84) == 255;
  if ( !v5 )
  {
    v6 = *(int (__fastcall ****)(_DWORD, int *))(result + 64);
    if ( ((unsigned int)&dword_60C965B4 & ~(1614398632 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C965B4) )
    {
      dword_60C965B0 = (int)&off_60BC04AC;
      _cxa_guard_release(&dword_60C965B4);
    }
    if ( v6 )
    {
      v7 = (**v6)(v6, &dword_60C965B0);
      if ( v7 )
        v7 = (int)v6;
      return sub_6039AE38(v7);
    }
    else
    {
      return sub_6039AE38(0);
    }
  }
  return result;
}
