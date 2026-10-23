/* sub_6085D15C
 * address: 0x6085D15C   size: 152   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6085D15C(int a1, int a2, unsigned __int8 *a3)
{
  _BOOL2 v3; // r12
  unsigned __int8 *v4; // lr
  int result; // r0
  unsigned __int8 v6; // r3
  unsigned __int8 v7; // r4

  v3 = 1;
  v4 = (unsigned __int8 *)(a1 + 4 * (a2 / 2));
  if ( v4[180] == *a3 && v4[181] == a3[1] && v4[182] == a3[2] )
    v3 = v4[183] != a3[3];
  FIELD_U16(a1, 216) = FIELD_U16(a1, 216) & 0xFFFB | (4 * ((v3 | (FIELD_U16(a1, 216) >> 2)) & 1));
  result = *a3;
  v6 = a3[1];
  v7 = a3[2];
  v4[183] = a3[3];
  v4[182] = v7;
  v4[181] = v6;
  v4[180] = result;
  return result;
}
