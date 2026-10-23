/* SE_SYS_CE_ref
 * address: 0x604B1BE0   size: 192   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_SYS_CE_ref(int a1)
{
  FIELD_U8(a1, 38088) = 1;
  sub_6045BF58(a1 + 5688, 0);
  sub_605029FC(a1 + 3608, &unk_60B02E6C, "SE_SYS_CE_MENU_OUT");
  *(_DWORD *)(sub_608DE61C(a1 + 3660, 8) - FIELD_U32(a1, 3672) + 192) = 0;
  sub_605029FC(a1 + 3608, &unk_60B02E4C, "SE_SYS_CE_AREA_CHANGE");
  sub_605029FC(a1 + 3608, &unk_60B02E50, "SE_SYS_CE_AREA_CHANGE");
  sub_605029FC(a1 + 3608, &unk_60B02E54, "SE_SYS_CE_AREA_CHANGE");
  return sub_605029FC(a1 + 3608, &unk_60B02E58, "SE_SYS_CE_AREA_CHANGE");
}
