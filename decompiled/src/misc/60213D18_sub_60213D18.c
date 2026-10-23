/* sub_60213D18
 * address: 0x60213D18   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60213D18(int result)
{
  float v1; // s0

  FIELD_U16(result, 424) = 257;
  v1 = FIELD_F32(result, 392) + 80.0;
  FIELD_F32(result, 84) = v1;
  FIELD_U32(result, 400) = FIELD_U32(result, 80);
  FIELD_F32(result, 404) = v1;
  FIELD_U32(result, 408) = FIELD_U32(result, 88);
  FIELD_U32(result, 128) = 1075838976;
  FIELD_U32(result, 132) = 1075838976;
  FIELD_U32(result, 136) = 1075838976;
  FIELD_U32(result, 436) = 1075838976;
  FIELD_U32(result, 440) = 1075838976;
  FIELD_U32(result, 444) = 1075838976;
  return result;
}
