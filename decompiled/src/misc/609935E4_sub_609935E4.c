/* sub_609935E4
 * address: 0x609935E4   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_609935E4(_DWORD *result, _DWORD *a2)
{
  int v2; // r1
  int v3; // r2
  int v4; // r1

  result[16] = *a2;
  result[17] = a2[1];
  v2 = result[15];
  v3 = FIELD_U32(v2, 24);
  v4 = FIELD_U32(v2, 28);
  result[18] = v3;
  result[19] = v4;
  return result;
}
