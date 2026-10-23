/* sub_6085F01C
 * address: 0x6085F01C   size: 24   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_WORD *__fastcall sub_6085F01C(_WORD *result, int a2)
{
  int v2; // r1
  int v3; // r2
  int v4; // r1

  v2 = FIELD_U32(a2, 16);
  v3 = FIELD_U32(v2, 36);
  v4 = FIELD_U32(v2, 40);
  *result = v3;
  result[1] = v4;
  return result;
}
