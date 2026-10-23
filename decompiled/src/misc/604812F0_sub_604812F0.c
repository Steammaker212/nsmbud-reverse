/* sub_604812F0
 * address: 0x604812F0   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604812F0(int a1, int *a2)
{
  int result; // r0
  int v3; // r2
  int v4; // r1

  result = FIELD_U32(a1, 12828);
  v3 = *a2;
  v4 = a2[1];
  FIELD_U32(result, 24) = v3;
  FIELD_U32(result, 28) = v4;
  FIELD_U32(result, 32) = 0;
  FIELD_U8(result, 64) |= 0x10u;
  return result;
}
