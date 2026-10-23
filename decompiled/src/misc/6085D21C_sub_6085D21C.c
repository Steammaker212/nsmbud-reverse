/* sub_6085D21C
 * address: 0x6085D21C   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6085D21C(int result, int a2, int a3)
{
  int v3; // lr

  v3 = result + 4 * (a2 / 8) + a2 % 4;
  FIELD_U16(result, 216) = FIELD_U16(result, 216) & 0xFFFB
                           | (4 * ((FIELD_U8(v3, 180) != a3) | (FIELD_U16(result, 216) >> 2) & 1));
  FIELD_U8(v3, 180) = a3;
  return result;
}
