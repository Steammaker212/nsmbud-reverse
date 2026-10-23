/* SE_SYS_BTN_GAME_START_ref
 * address: 0x604AB860   size: 312   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_SYS_BTN_GAME_START_ref(int a1)
{
  int v1; // r4
  int v2; // r5
  int v3; // r7
  int v4; // r0
  int v5; // t1
  int result; // r0

  v1 = a1;
  v2 = a1 + 85956;
  sub_60502210(a1 + 85956, &unk_60B02D48, 17);
  sub_6050292C(v2, 15);
  sub_60502960(v2, 15);
  sub_60502994(v2, 15);
  sub_605029C8(v2, 15);
  sub_605029FC(v2, &unk_60B02D4C, "SE_SYS_BACK");
  v3 = v1 + 86008;
  v4 = sub_608DE61C(v1 + 86008, 12);
  v5 = FIELD_U32(v1, 86020);
  v1 += 86020;
  *(_DWORD *)(v4 - v5 + 176) = "SE_SYS_BACK_BTN_OVER";
  *(_DWORD *)(sub_608DE61C(v3, 12) - *(_DWORD *)v1 + 180) = "SE_SYS_BACK_BTN_OVER_OFF";
  sub_605028F0(v2, &unk_60B02D4C, 1);
  sub_605029FC(v2, &unk_60B02D48, "SE_SYS_BACK");
  sub_605029FC(v2, &unk_60B02D50, "SE_SYS_BTN_GAME_START");
  sub_605029FC(v2, &unk_60B02D54, "SE_SYS_BACK");
  result = sub_605029FC(v2, &unk_60B02D58, "SE_SYS_BTN_GAME_START");
  FIELD_U8(v1, 990) = 1;
  return result;
}
