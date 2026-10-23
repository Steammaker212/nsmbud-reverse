/* sub_6054550C
 * address: 0x6054550C   size: 64   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6054550C(int a1, _DWORD *a2)
{
  int result; // r0

  result = FIELD_U8(a1, 33498);
  if ( result )
  {
    sub_60473B88((_DWORD *)(a1 + 44), a2, 0);
    return sub_60548F10(a1 + 5712, a2);
  }
  return result;
}
