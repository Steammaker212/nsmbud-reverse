/* sub_60859A1C
 * address: 0x60859A1C   size: 96   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60859A1C(int result, int a2, int a3)
{
  int v3; // r12

  *(_DWORD *)result = *(_DWORD *)(FIELD_U32(a2, 184) + 64);
  FIELD_U32(result, 4) = a2 + 80;
  v3 = FIELD_U32(a2, 176);
  FIELD_U32(result, 12) = FIELD_U32(a2, 180);
  FIELD_U32(result, 8) = v3;
  FIELD_U32(result, 16) = 1065353216;
  FIELD_U8(result, 20) = FIELD_U8(a2, 214) & 1;
  FIELD_U8(result, 21) = (FIELD_U8(a2, 214) & 2) != 0;
  FIELD_U8(result, 22) = (FIELD_U8(a2, 214) & 4) != 0;
  FIELD_U8(result, 23) = 0;
  FIELD_U32(result, 24) = a3;
  return result;
}
