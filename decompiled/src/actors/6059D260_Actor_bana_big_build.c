/* Actor_bana_big_build
 * address: 0x6059D260   size: 64   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall Actor_bana_big_build(int a1)
{
  int v2; // r0
  _DWORD *result; // r0

  v2 = operator_new(0x1BE8u);
  result = (_DWORD *)sub_6059BFA4(v2, a1, 1);
  *result = off_60C079B4;
  result[1785] = 90;
  return result;
}
