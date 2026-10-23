/* sub_60551760
 * address: 0x60551760   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60551760(_DWORD *a1)
{
  int v1; // r1
  int v2; // r1
  int result; // r0

  v1 = a1[4980];
  FIELD_F32(v1, 28) = FIELD_F32(v1, 28) + -10000.0;
  FIELD_U8(v1, 64) |= 0x10u;
  v2 = a1[4981];
  FIELD_F32(v2, 28) = FIELD_F32(v2, 28) + -10000.0;
  FIELD_U8(v2, 64) |= 0x10u;
  result = a1[4982];
  FIELD_F32(result, 28) = FIELD_F32(result, 28) + -10000.0;
  FIELD_U8(result, 64) |= 0x10u;
  return result;
}
