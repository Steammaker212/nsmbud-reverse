/* sub_605E40C0
 * address: 0x605E40C0   size: 228   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605E40C0(int a1, int a2)
{
  char v2; // r12
  int result; // r0

  result = FIELD_U8(a1, 6261);
  if ( (result & 8) != 0 )
  {
    if ( (FIELD_U8(a1, 6267) & 0x20) != 0 )
    {
      if ( ((unsigned int)&dword_60C7B408 & ~(1616789776 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B408) )
      {
        dword_60C7B404 = (int)&off_60BC00B0;
        _cxa_guard_release(&dword_60C7B408);
      }
      if ( a2
        && (**(int (__fastcall ***)(int, int *))a2)(a2, &dword_60C7B404) == 1
        && FIELD_U8(a2, 84) != 255 )
      {
        FIELD_U32(a1, 6264) |= 0x40000000u;
        return a1 + 6264;
      }
      else
      {
        FIELD_U8(a1, 19) = 1;
        return 1;
      }
    }
    else
    {
      return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 384))(a1);
    }
  }
  return result;
}
