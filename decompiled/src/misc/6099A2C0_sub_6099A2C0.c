/* sub_6099A2C0
 * address: 0x6099A2C0   size: 32   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_BYTE *__fastcall sub_6099A2C0(int a1, char *a2)
{
  _BYTE *result; // r0
  char v3; // r2
  char v4; // r3
  char v5; // r1

  result = *(_BYTE **)(a1 + 16);
  v3 = *a2;
  v4 = a2[1];
  v5 = a2[2];
  result[9] = v4;
  result[8] = v3;
  result[10] = v5;
  return result;
}
