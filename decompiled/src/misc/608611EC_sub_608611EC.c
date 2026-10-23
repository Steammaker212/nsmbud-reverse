/* sub_608611EC
 * address: 0x608611EC   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_BYTE *__fastcall sub_608611EC(int a1, int a2, char *a3)
{
  int v3; // r0
  char v4; // r12
  char v5; // r4
  char v6; // r1
  char v7; // r2
  _BYTE *result; // r0

  v3 = a1 + 4 * a2;
  v4 = *a3;
  v5 = a3[1];
  v6 = a3[2];
  v7 = a3[3];
  FIELD_U8(v3, 188) = v4;
  result = (_BYTE *)(v3 + 188);
  result[3] = v7;
  result[2] = v6;
  result[1] = v5;
  return result;
}
