/* sub_607FF584
 * address: 0x607FF584   size: 64   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_607FF584(sead_IDisposer *a1, int a2)
{
  sead_IDisposer *v3; // r0
  float result; // s0

  v3 = sead_IDisposer_ctor(a1);
  FIELD_U32(v3, 0x0) = (int)off_60C27DEC;
  *(float *)&FIELD_U32(v3 + (1) * 16, 0x0) = (float)FIELD_S16(a2, 4);
  result = (float)FIELD_S16(a2, 6);
  *(float *)&FIELD_U32(v3 + (1) * 16, 0x4) = result;
  return result;
}
