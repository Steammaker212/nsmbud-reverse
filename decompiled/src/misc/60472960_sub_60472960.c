/* sub_60472960
 * address: 0x60472960   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_60472960(int a1, int a2, int a3)
{
  float result; // s0
  _DWORD v5[6]; // [sp+0h] [bp-18h] BYREF

  FIELD_U32(a1, 3244) = FIELD_U8(a2, 218) & 3;
  FIELD_U32(a1, 3264) = FIELD_U32(a2, 200);
  sub_60858A78(v5, a3);
  FIELD_U32(a1, 3236) = v5[0];
  FIELD_U32(a1, 3240) = v5[2];
  result = (float)(*(float *)&v5[1] + *(float *)&v5[3]) * 0.5;
  FIELD_F32(a1, 3260) = result;
  return result;
}
