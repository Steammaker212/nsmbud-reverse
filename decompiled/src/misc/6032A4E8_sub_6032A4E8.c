/* sub_6032A4E8
 * address: 0x6032A4E8   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6032A4E8(int result)
{
  float v1; // s0
  int v2; // r1
  int v3; // r2

  v1 = FIELD_F32(AreaTask_intance, 1812) + -128.0;
  FIELD_F32(result, 108) = v1;
  v2 = FIELD_U32(result, 112);
  v3 = FIELD_U32(result, 116);
  FIELD_F32(result, 584) = v1;
  FIELD_U32(result, 588) = v2;
  FIELD_U32(result, 592) = v3;
  FIELD_F32(result, 608) = v1;
  FIELD_U32(result, 612) = v2;
  FIELD_U32(result, 616) = v3;
  return result;
}
