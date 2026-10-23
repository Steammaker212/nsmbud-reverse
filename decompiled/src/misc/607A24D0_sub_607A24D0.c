/* sub_607A24D0
 * address: 0x607A24D0   size: 112   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607A24D0(_DWORD *a1)
{
  int result; // r0

  (*(void (__fastcall **)(_DWORD *, int))(*a1 + 628))(a1, 1);
  a1[301] &= ~0x20000u;
  sub_607865BC((int)(a1 + 172), 1);
  result = (*(int (__fastcall **)(_DWORD *))(*a1 + 1064))(a1);
  if ( result == 1 )
  {
    result = sub_6079D894((int)a1);
    if ( result )
      return sub_607949A4(FIELD_U32(result, 648), 0);
  }
  return result;
}
