/* sub_60955570
 * address: 0x60955570   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60955570(int a1, int a2)
{
  char v3; // r5
  int result; // r0

  v3 = a2;
  result = FIELD_S8(a1, 88);
  if ( result != a2 )
  {
    sub_60958440(FIELD_U32(a1, 20));
    FIELD_U8(a1, 88) = v3;
    FIELD_U16(a1, 80) |= 0x20u;
    return sub_60958448(FIELD_U32(a1, 20));
  }
  return result;
}
