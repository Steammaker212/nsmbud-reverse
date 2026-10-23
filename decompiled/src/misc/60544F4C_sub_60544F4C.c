/* sub_60544F4C
 * address: 0x60544F4C   size: 376   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60544F4C(int a1)
{
  int v2; // r5
  _DWORD v4[2]; // [sp+4h] [bp-24h] BYREF
  int v5; // [sp+Ch] [bp-1Ch] BYREF

  FIELD_U32(a1, 33468) = sub_60834644(a1);
  sub_605450E0(a1);
  v5 = 0;
  sub_60502210(a1 + 3632, &v5, 8);
  v4[0] = &sead__SafeStringBase__vtable;
  v4[1] = "SelectMenu";
  sead__SafeStringBase__operator_assign(a1 + 4644, (int)v4);
  sub_605029FC(a1 + 3632, dword_60B03AD8, (int)"SE_SYS_BACK");
  sub_605028F0(a1 + 3632, dword_60B03AD8, 1);
  *(_DWORD *)(sub_608DE61C(a1 + 3684, 2) - FIELD_U32(a1, 3696) + 176) = "SE_SYS_BACK_BTN_OVER";
  *(_DWORD *)(sub_608DE61C(a1 + 3684, 2) - FIELD_U32(a1, 3696) + 180) = "SE_SYS_BACK_BTN_OVER_OFF";
  sub_60545310(a1);
  v2 = dword_60CC6D78;
  sub_6045BF58(a1 + 31448, 0);
  sub_6045BF58(a1 + 31852, 1);
  sub_6045BF58(a1 + 32256, 2);
  sub_6045BF58(a1 + 32660, 3);
  sub_6045BF58(a1 + 33064, 4);
  if ( (FIELD_U8(v2, 44) & 8) != 0 )
    FIELD_U8(a1, 33496) = 1;
  if ( (FIELD_U8(v2, 521) & 1) != 0 )
    FIELD_U8(a1, 33499) = 1;
  return sub_60547BF4(a1 + 5712);
}
