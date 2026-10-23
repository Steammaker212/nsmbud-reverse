/* sub_6044364C
 * address: 0x6044364C   size: 124   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int sub_6044364C()
{
  int result; // r0

  result = sub_60441A3C();
  FIELD_U32(result, 420) = 0;
  FIELD_U32(result, 424) = -1;
  FIELD_U32(result, 428) = 0;
  *(_DWORD *)result = &off_60BFAE04;
  FIELD_U32(result, 16) = &off_60BFAE60;
  FIELD_U32(result, 432) = 1065353216;
  FIELD_U32(result, 436) = 0;
  FIELD_U32(result, 440) = 0;
  FIELD_U32(result, 444) = 0;
  FIELD_U32(result, 448) = 0;
  FIELD_U32(result, 452) = 1065353216;
  FIELD_U32(result, 456) = 0;
  FIELD_U32(result, 460) = 0;
  FIELD_U32(result, 464) = 0;
  FIELD_U32(result, 468) = 0;
  FIELD_U32(result, 472) = 1065353216;
  FIELD_U32(result, 476) = 0;
  FIELD_U32(result, 480) = 0;
  FIELD_U32(result, 484) = 0;
  FIELD_U32(result, 488) = 0;
  FIELD_U32(result, 492) = 1065353216;
  FIELD_U8(result, 496) = 1;
  FIELD_U32(result, 500) = -1077936128;
  FIELD_U32(result, 504) = -1082130432;
  return result;
}
