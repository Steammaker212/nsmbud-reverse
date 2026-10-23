/* sub_60989DE8
 * address: 0x60989DE8   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60989DE8(_DWORD *a1, int a2)
{
  int result; // r0

  sub_608502F4((int)a1, a2);
  if ( a2 == 1 )
  {
    result = a1[10];
    if ( (_DWORD *)result == a1 + 9 )
      return sub_6098BE3C(*(_DWORD *)(a1[13] + 72), a1);
  }
  else
  {
    a1[11] = 0;
    return 0;
  }
  return result;
}
