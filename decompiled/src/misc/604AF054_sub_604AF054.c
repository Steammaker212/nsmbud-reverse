/* sub_604AF054
 * address: 0x604AF054   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604AF054(int a1, _DWORD *a2)
{
  int result; // r0
  int v4; // r2
  int v5; // r3

  result = sub_60473B4C(a1 + 36);
  v4 = a2[1];
  v5 = a2[2];
  FIELD_U32(result, 24) = *a2;
  FIELD_U32(result, 28) = v4;
  FIELD_U32(result, 32) = v5;
  FIELD_U8(result, 64) |= 0x10u;
  return result;
}
