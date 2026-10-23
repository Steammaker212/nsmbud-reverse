/* sub_604998E4
 * address: 0x604998E4   size: 160   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604998E4(int a1, _DWORD *a2)
{
  int result; // r0

  result = FIELD_U8(a1, 146854);
  if ( result )
  {
    sub_60473B88((_DWORD *)(a1 + 64), a2, 0);
    sub_604A4C4C(a1 + 5728, a2);
    sub_604A4C4C(a1 + 26284, a2);
    sub_604A4C4C(a1 + 46840, a2);
    sub_604A4C4C(a1 + 67396, a2);
    if ( dword_60C99E24 )
      sub_603FF044(dword_60C99E24, (int)a2);
    return sub_60515A34(a1 + 98748, a2);
  }
  return result;
}
