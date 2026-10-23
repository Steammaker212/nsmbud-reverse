/* sub_604682B4
 * address: 0x604682B4   size: 112   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604682B4(int a1)
{
  FIELD_U8(a1, 6199) = 1;
  FIELD_U32(a1, 6168) = 6;
  sub_60468324(a1);
  sub_6046135C(a1);
  FIELD_U32(a1, 144) = 1056964608;
  FIELD_U32(a1, 148) = 1056964608;
  FIELD_U32(a1, 152) = 1056964608;
  FIELD_U32(a1, 572) = 1065353216;
  FIELD_U32(a1, 576) = 1084227584;
  FIELD_U32(a1, 580) = 0;
  Item_playAppearSound_461C50(a1);
  sub_60462018(a1);
  return 1;
}
