/* sub_608D4178
 * address: 0x608D4178   size: 112   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608D4178(int result, int a2)
{
  if ( !FIELD_U8(result, 608) )
  {
    FIELD_U8(result, 608) = 1;
    FIELD_U8(result, 609) = 0;
    FIELD_U32(result, 536) = -1;
    FIELD_U32(result, 540) = 0;
    FIELD_U32(result, 544) = -1;
    FIELD_U32(result, 548) = 0;
    FIELD_U32(result, 552) = -1;
    FIELD_U32(result, 556) = 0;
    FIELD_U32(result, 560) = -1;
    FIELD_U32(result, 564) = 0;
    FIELD_U32(result, 568) = -1;
    FIELD_U32(result, 572) = 0;
    FIELD_U32(result, 576) = -1;
    FIELD_U32(result, 580) = 0;
    FIELD_U32(result, 584) = -1;
    FIELD_U32(result, 588) = 0;
    FIELD_U32(result, 592) = -1;
    FIELD_U32(result, 596) = 0;
    FIELD_U32(result, 600) = -1;
    FIELD_U32(result, 604) = 0;
    return sub_608B2C20(result + 12, a2);
  }
  return result;
}
