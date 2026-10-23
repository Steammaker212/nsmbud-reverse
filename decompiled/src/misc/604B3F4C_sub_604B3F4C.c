/* sub_604B3F4C
 * address: 0x604B3F4C   size: 436   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604B3F4C(int a1)
{
  int v2; // r5
  int v3; // r3
  int v4; // r5
  _DWORD *v5; // r0
  int v6; // r0
  int result; // r0
  int (**v8)(); // [sp+0h] [bp-20h] BYREF
  const char *v9; // [sp+4h] [bp-1Ch]

  v2 = FIELD_U32(dword_60CBC000, 104);
  v3 = 300 - FIELD_U32(dword_60CBC000, 100);
  v8 = &sead__SafeStringBase__vtable;
  v9 = "CoinEditScene_Coin_00";
  sub_6047E0EC(&v8, FIELD_U32(a1, 588), 1, v3);
  v8 = &sead__SafeStringBase__vtable;
  v9 = "CoinEditScene_StarCoin_00";
  sub_6047E0EC(&v8, FIELD_U32(a1, 592), 1, 3 - v2);
  sub_604DEA08(a1, 0);
  FIELD_U32(a1, 14920) = 0;
  FIELD_U32(a1, 14924) = 1;
  SE_SYS_CE_ref_2(a1);
  v4 = FIELD_U32(a1, 14924);
  FIELD_U32(a1, 20) = v4;
  sub_604DE988(a1);
  sub_6047EBB4(a1 + 24, *(_DWORD *)(FIELD_U32(a1, 16) + 4 * v4));
  sub_60473DE4((_DWORD *)(a1 + 4172), 0, &dword_60CA1B8C, 0);
  if ( FIELD_U8(dword_60CBC000, 148) == 1 )
  {
    sub_60473DE4((_DWORD *)(a1 + 632), 0, &dword_60CA1B8C, 0);
    v5 = (_DWORD *)(a1 + 4172);
    goto LABEL_5;
  }
  if ( !FIELD_U8(dword_60CBC000, 148) )
  {
    sub_60473DE4((_DWORD *)(a1 + 4172), 0, &dword_60CA1B8C, 0);
    v5 = (_DWORD *)(a1 + 632);
LABEL_5:
    sub_604741D8(v5, 0, &dword_60CA1B8C, 0);
  }
  FIELD_U8(a1, 12) = 1;
  sub_604B4228(a1);
  sub_6045BF58(a1 + 88, 4);
  sub_6045BF58(a1 + 14948, 0);
  v6 = sub_6047482C(FIELD_U32(a1, 4), 0);
  (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 108))(v6);
  FIELD_U8(a1, 14945) = 1;
  result = sub_604B4370(a1);
  FIELD_U8(a1, 14945) = 1;
  return result;
}
