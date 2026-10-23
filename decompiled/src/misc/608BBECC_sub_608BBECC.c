/* sub_608BBECC
 * address: 0x608BBECC   size: 188   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608BBECC(int a1, int a2)
{
  int v3; // r1
  int result; // r0

  v3 = sub_608AEE30(a1, a2);
  result = 0;
  if ( v3 == 1 )
  {
    FIELD_U32(a1, 436) = 0;
    FIELD_U32(a1, 444) = 0;
    FIELD_U32(a1, 448) = 1065353216;
    FIELD_U32(a1, 452) = 1;
    FIELD_U32(a1, 460) = 0;
    FIELD_U32(a1, 456) = 0;
    FIELD_U32(a1, 464) = 1065353216;
    FIELD_U32(a1, 468) = 1;
    FIELD_U32(a1, 476) = 0;
    FIELD_U32(a1, 472) = 0;
    FIELD_U32(a1, 480) = 1065353216;
    FIELD_U32(a1, 484) = 1;
    FIELD_U32(a1, 492) = 0;
    FIELD_U32(a1, 488) = 0;
    FIELD_U32(a1, 496) = 1065353216;
    FIELD_U32(a1, 500) = 1;
    FIELD_U32(a1, 508) = 0;
    FIELD_U32(a1, 504) = 0;
    FIELD_U32(a1, 512) = 1065353216;
    FIELD_U32(a1, 516) = 1;
    FIELD_U32(a1, 524) = 0;
    FIELD_U32(a1, 520) = 0;
    FIELD_U32(a1, 528) = 1065353216;
    FIELD_U32(a1, 532) = 1;
    FIELD_U32(a1, 540) = 0;
    FIELD_U32(a1, 536) = 0;
    FIELD_U32(a1, 544) = 1065353216;
    FIELD_U32(a1, 548) = 1;
    FIELD_U32(a1, 556) = 0;
    FIELD_U32(a1, 552) = 0;
    FIELD_U32(a1, 560) = 1065353216;
    FIELD_U32(a1, 564) = 1;
    FIELD_U32(a1, 568) = 0;
    FIELD_U32(a1, 576) = 0;
    FIELD_U32(a1, 580) = 0;
    FIELD_U8(a1, 574) = 1;
    return 1;
  }
  return result;
}
