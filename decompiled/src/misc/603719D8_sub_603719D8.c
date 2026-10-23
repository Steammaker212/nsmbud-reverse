/* sub_603719D8
 * address: 0x603719D8   size: 192   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603719D8(_DWORD *a1)
{
  char v2; // r12
  int result; // r0
  int (__fastcall ***v4)(_DWORD, int *); // r5

  nullsub_1226();
  result = a1[2922];
  if ( !result )
  {
    result = a1[5] & 0x30000000;
    if ( result == 805306368 )
    {
      v4 = (int (__fastcall ***)(_DWORD, int *))a1[14];
      if ( v4 )
      {
        if ( ((unsigned int)&dword_60C9617C & ~(1614223904 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C9617C) )
        {
          dword_60C96178 = (int)&off_60BC00E0;
          _cxa_guard_release(&dword_60C9617C);
        }
        result = (**v4)(v4, &dword_60C96178);
        if ( result == 1 )
        {
          result = (int)v4[(HIBYTE(a1[5]) & 0xF) + 1526];
          a1[28] = result;
        }
      }
    }
  }
  return result;
}
