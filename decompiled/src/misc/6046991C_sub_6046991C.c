/* sub_6046991C
 * address: 0x6046991C   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6046991C(int a1)
{
  int v2; // r5

  FIELD_U32(a1, 6112) = FIELD_U32(a1, 108);
  FIELD_U32(a1, 6116) = FIELD_U32(a1, 112);
  FIELD_U32(a1, 6120) = FIELD_U32(a1, 116);
  v2 = 2;
  if ( !sub_60461BE4(a1) )
  {
    v2 = 1;
    FIELD_U8(a1, 6199) = 1;
    FIELD_U32(a1, 6168) = 4;
    sub_6046999C(a1);
    sub_6046135C(a1);
    Item_playAppearSound_461C50(a1);
    sub_60462018(a1);
  }
  return v2;
}
