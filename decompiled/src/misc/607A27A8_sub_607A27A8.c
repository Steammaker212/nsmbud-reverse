/* sub_607A27A8
 * address: 0x607A27A8   size: 116   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607A27A8(_DWORD *a1, int a2)
{
  int v4; // r1
  int result; // r0

  v4 = sub_60766708((int)a1);
  result = 0;
  if ( !v4 && a1[2847] != a2 )
  {
    a1[2847] = a2;
    if ( a1[330] != a2 )
    {
      (*(void (__fastcall **)(_DWORD *, int))(*a1 + 624))(a1, 2);
      sub_60777F54(dword_60CBFA90, (int)a1);
      return 1;
    }
  }
  return result;
}
