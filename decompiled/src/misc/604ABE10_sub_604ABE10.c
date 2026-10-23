/* sub_604ABE10
 * address: 0x604ABE10   size: 148   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604ABE10(int a1, _DWORD *a2)
{
  int result; // r0

  result = FIELD_U8(a1, 279731);
  if ( result )
  {
    sub_60473B88((_DWORD *)(a1 + 64), a2, 0);
    sub_604A4C4C(a1 + 3732, a2);
    sub_604A4C4C(a1 + 24288, a2);
    sub_604A4C4C(a1 + 44844, a2);
    sub_604A4C4C(a1 + 65400, a2);
    result = dword_60C99E24;
    if ( dword_60C99E24 )
      return sub_603FF044(dword_60C99E24, (int)a2);
  }
  return result;
}
