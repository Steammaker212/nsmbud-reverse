/* sub_60213AC8
 * address: 0x60213AC8   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60213AC8(int result)
{
  float v1; // s0

  FIELD_U8(result, 424) = 1;
  FIELD_U8(result, 425) = 1;
  FIELD_U32(result, 428) = 0;
  FIELD_U32(result, 432) = 0;
  v1 = FIELD_F32(result, 392) + 80.0;
  FIELD_F32(result, 84) = v1;
  FIELD_U32(result, 400) = FIELD_U32(result, 80);
  FIELD_F32(result, 404) = v1;
  FIELD_U32(result, 408) = FIELD_U32(result, 88);
  FIELD_U32(result, 464) = 30;
  return result;
}
