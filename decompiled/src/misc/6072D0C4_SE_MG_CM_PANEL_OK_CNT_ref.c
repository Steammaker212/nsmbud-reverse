/* SE_MG_CM_PANEL_OK_CNT_ref
 * address: 0x6072D0C4   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_MG_CM_PANEL_OK_CNT_ref(int a1)
{
  FIELD_U8(a1, 6105) = 1;
  FIELD_U8(a1, 6104) = 0;
  FIELD_U32(a1, 6108) = 0;
  FIELD_U32(a1, 164) = 0;
  sub_60807EF0(SoundSystem_instance, "SE_MG_CM_PANEL_OK_CNT", 0, 1);
  FIELD_U32(a1, 116) = 1163575296;
  return 1163575296;
}
