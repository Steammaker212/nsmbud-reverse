/* sub_6098CF00
 * address: 0x6098CF00   size: 64   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6098CF00(int a1, void *a2)
{
  int v2; // r0
  int result; // r0

  v2 = operator_new_8DE25C(0xF0u, a2, 16);
  result = sub_60853EC0(v2);
  *(_DWORD *)result = off_60BFCACC;
  FIELD_U32(result, 224) = 0;
  FIELD_U8(result, 228) = 0;
  FIELD_U32(result, 232) = result + 232;
  FIELD_U32(result, 236) = result + 232;
  return result;
}
