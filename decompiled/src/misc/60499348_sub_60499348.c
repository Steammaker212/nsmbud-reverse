/* sub_60499348
 * address: 0x60499348   size: 308   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60499348(int a1)
{
  int v2; // r5

  v2 = a1 + 3648;
  sub_60502210(a1 + 3648, &unk_60B02B78, 17);
  sub_6050292C(v2, 15);
  sub_60502960(v2, 15);
  sub_60502994(v2, 15);
  sub_605029C8(v2, 15);
  sub_605029FC(v2, &unk_60B02B7C, "SE_SYS_BACK");
  *(_DWORD *)(sub_608DE61C(a1 + 3700, 8) - FIELD_U32(a1, 3712) + 176) = "SE_SYS_BACK_BTN_OVER";
  *(_DWORD *)(sub_608DE61C(a1 + 3700, 8) - FIELD_U32(a1, 3712) + 180) = "SE_SYS_BACK_BTN_OVER_OFF";
  sub_605028F0(v2, &unk_60B02B7C, 1);
  sub_605029FC(v2, &unk_60B02B78, "SE_SYS_PAGE");
  *(_DWORD *)(sub_608DE61C(a1 + 3700, 0) - FIELD_U32(a1, 3712) + 184) = "SE_SYS_PAGE";
  sub_605029FC(v2, &unk_60B02B80, "SE_SYS_PAGE");
  *(_DWORD *)(sub_608DE61C(a1 + 3700, 1) - FIELD_U32(a1, 3712) + 184) = "SE_SYS_PAGE";
  FIELD_U8(a1, 4702) = 1;
  return 4702;
}
