/* sub_60853D18
 * address: 0x60853D18   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60853D18(int result, int a2, int a3)
{
  int v3; // r12

  *(_DWORD *)result = a2 + 28;
  FIELD_U32(result, 4) = a2 + FIELD_U32(a2, 8);
  v3 = FIELD_U16(a2, 16);
  FIELD_U16(result, 8) = v3;
  FIELD_U16(result, 10) = FIELD_U16(a2, 18);
  FIELD_U32(result, 12) = a2 + FIELD_U32(a2, 12);
  FIELD_U32(result, 16) = a2 + FIELD_U32(a2, 12) + 24 * v3;
  FIELD_U32(result, 20) = a2 + FIELD_U32(a2, 20);
  FIELD_U32(result, 24) = a2 + FIELD_U32(a2, 24);
  FIELD_U32(result, 28) = a3;
  return result;
}
