/* sub_60323F24
 * address: 0x60323F24   size: 116   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60323F24(int result)
{
  int v1; // r1
  float v2; // s2

  FIELD_U32(result, 7584) = FIELD_U32(result, 108);
  v1 = FIELD_U32(result, 112);
  FIELD_U32(result, 7592) = FIELD_U32(result, 116);
  FIELD_U32(result, 7596) = FIELD_U32(result, 144);
  FIELD_U32(result, 7604) = FIELD_U32(result, 152);
  v2 = FIELD_F32(result, 7632);
  FIELD_U32(result, 7588) = v1;
  FIELD_F32(result, 7600) = (float)(v2 + -32.0) * 0.0625;
  FIELD_U32(result, 7676) = 2;
  return result;
}
