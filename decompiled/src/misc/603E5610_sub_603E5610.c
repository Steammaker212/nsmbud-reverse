/* sub_603E5610
 * address: 0x603E5610   size: 124   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_603E5610(_DWORD *a1, _DWORD *a2)
{
  _DWORD *result; // r0

  if ( a2[5] || a2[4] )
  {
    (*(void (__fastcall **)(_DWORD *))(*a2 + 28))(a2);
    sead__ListNode__erase((char *)a2 + a1[7]);
    --a1[6];
  }
  result = (_DWORD *)a1[8];
  if ( result )
  {
    if ( result == a2 )
    {
      (*(void (__fastcall **)(_DWORD *))(*a2 + 32))(a2);
      a1[8] = 0;
      return 0;
    }
  }
  return result;
}
