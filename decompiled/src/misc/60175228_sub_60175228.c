/* sub_60175228
 * address: 0x60175228   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60175228(int result)
{
  float v1; // s0

  FIELD_U8(result, 586) = 1;
  FIELD_U8(result, 587) = 1;
  FIELD_U32(result, 128) = 1075838976;
  FIELD_U32(result, 132) = 1075838976;
  FIELD_U32(result, 136) = 1075838976;
  FIELD_U32(result, 596) = 1075838976;
  FIELD_U32(result, 600) = 1075838976;
  FIELD_U32(result, 604) = 1075838976;
  FIELD_U32(result, 588) = 0;
  FIELD_U32(result, 592) = 0;
  v1 = FIELD_F32(result, 496) + 80.0;
  FIELD_F32(result, 84) = v1;
  FIELD_U32(result, 504) = FIELD_U32(result, 80);
  FIELD_F32(result, 508) = v1;
  FIELD_U32(result, 512) = FIELD_U32(result, 88);
  FIELD_U32(result, 620) = 30;
  return result;
}
