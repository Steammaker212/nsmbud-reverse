/* sub_6055B6FC
 * address: 0x6055B6FC   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6055B6FC(_DWORD *a1)
{
  int result; // r0

  *(_BYTE *)(a1[899] + 64) &= ~1u;
  *(_BYTE *)(a1[900] + 64) &= ~1u;
  result = a1[901];
  FIELD_U8(result, 64) &= ~1u;
  return result;
}
