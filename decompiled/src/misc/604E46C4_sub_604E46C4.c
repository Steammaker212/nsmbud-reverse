/* sub_604E46C4
 * address: 0x604E46C4   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604E46C4(int a1, _DWORD *a2)
{
  int result; // r0

  result = FIELD_U8(a1, 20523);
  if ( result )
  {
    sub_60473B88((_DWORD *)(a1 + 40), a2, 0);
    sub_604BAE74(a1 + 3608, a2);
    sub_604BAE74(a1 + 7308, a2);
    sub_604BAE74(a1 + 11008, a2);
    return sub_604BAE74(a1 + 14708, a2);
  }
  return result;
}
