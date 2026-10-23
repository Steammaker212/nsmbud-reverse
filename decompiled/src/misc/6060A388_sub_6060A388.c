/* sub_6060A388
 * address: 0x6060A388   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_6060A388(int a1, int a2)
{
  float v2; // s0
  int v3; // r12
  float v4; // s2
  float result; // s0

  v2 = FIELD_F32(a1, 112);
  v3 = FIELD_U32(a1, 116);
  v4 = FIELD_F32(a1, 1060);
  *(_DWORD *)a2 = FIELD_U32(a1, 108);
  result = v2 - v4;
  FIELD_F32(a2, 4) = result;
  FIELD_U32(a2, 8) = v3;
  return result;
}
