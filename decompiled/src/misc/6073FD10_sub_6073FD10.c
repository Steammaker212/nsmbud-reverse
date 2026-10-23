/* sub_6073FD10
 * address: 0x6073FD10   size: 156   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6073FD10(int a1)
{
  sub_60421AD4(FIELD_U32(a1, 6300));
  FIELD_F32(a1, 116) = (float)((float)FIELD_U8(a1, 6368) * 8.0) + 3500.0;
  sub_60807EF0(SoundSystem_instance, "SE_MG_SH_ITEM_NG", 0, 1);
  FIELD_U8(a1, 6340) = 0;
  return 6340;
}
