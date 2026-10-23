/* sub_6083EBA8
 * address: 0x6083EBA8   size: 964   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6083EBA8(int a1)
{
  int v2; // r8
  _DWORD *v3; // r9

  memset(a1, 0, 36);
  sub_60847FC8(a1 + 40);
  sub_60847FC8(a1 + 336);
  sub_60847FC8(a1 + 632);
  sub_60847FC8(a1 + 928);
  v2 = 0;
  do
  {
    sub_608353A4(a1 + 1224 + v2);
    v3 = (_DWORD *)(a1 + v2);
    sub_608353A4(a1 + v2 + 1296);
    sub_608353A4(a1 + 1368 + v2);
    sub_608353A4(a1 + v2 + 1440);
    sub_608353A4(a1 + 1512 + v2);
    sub_608353A4(a1 + 1608 + v2);
    v3[420] = 0;
    sub_6083DC90((_DWORD *)(a1 + 1684 + v2));
    v2 += 536;
    v3[396] = 0;
    v3[397] = 0;
    v3[398] = 0;
    v3[399] = 0;
    v3[400] = 0;
  }
  while ( v2 != 6968 );
  sub_60847FC8(a1 + 8208);
  sub_60847FC8(a1 + 8504);
  sub_60847FC8(a1 + 8800);
  sub_60847FC8(a1 + 9096);
  sub_60847FC8(a1 + 9392);
  sub_60847FC8(a1 + 9688);
  sub_60847FC8(a1 + 9984);
  sub_60847FC8(a1 + 10280);
  sub_60847FC8(a1 + 10576);
  sub_60847FC8(a1 + 10872);
  sub_60847FC8(a1 + 11168);
  sub_60847FC8(a1 + 11464);
  sub_60847FC8(a1 + 11760);
  sub_60847FC8(a1 + 12056);
  sub_60847FC8(a1 + 12352);
  sub_60847FC8(a1 + 12648);
  sub_60847FC8(a1 + 12944);
  sub_60847FC8(a1 + 13240);
  sub_60847FC8(a1 + 13536);
  sub_608353A4(a1 + 13832);
  sub_608353A4(a1 + 13904);
  sub_608353A4(a1 + 13976);
  sub_608353A4(a1 + 14048);
  sub_608353A4(a1 + 14120);
  sub_608353A4(a1 + 14216);
  FIELD_U32(a1, 14288) = 0;
  sub_6083DC90((_DWORD *)(a1 + 14292));
  FIELD_U32(a1, 14208) = 0;
  FIELD_U32(a1, 14204) = 0;
  FIELD_U32(a1, 14200) = 0;
  FIELD_U32(a1, 14196) = 0;
  FIELD_U32(a1, 14192) = 0;
  sub_6083DC90((_DWORD *)(a1 + 14368));
  sub_6083DC90((_DWORD *)(a1 + 14440));
  sub_6083DC90((_DWORD *)(a1 + 14512));
  sub_6083DC90((_DWORD *)(a1 + 14584));
  sub_6083DC90((_DWORD *)(a1 + 14656));
  sub_6083DC90((_DWORD *)(a1 + 14728));
  sub_6083DC90((_DWORD *)(a1 + 14800));
  sub_6083DC90((_DWORD *)(a1 + 14872));
  sub_6083DC90((_DWORD *)(a1 + 14944));
  sub_6083DC90((_DWORD *)(a1 + 15016));
  sub_6083DC90((_DWORD *)(a1 + 15088));
  sub_6083DC90((_DWORD *)(a1 + 15160));
  sub_6083DC90((_DWORD *)(a1 + 15232));
  sub_6083DC90((_DWORD *)(a1 + 15304));
  sub_6083DC90((_DWORD *)(a1 + 15376));
  sub_6083DC90((_DWORD *)(a1 + 15448));
  sub_6083DC90((_DWORD *)(a1 + 15520));
  sub_6083DC90((_DWORD *)(a1 + 15592));
  sub_6083DC90((_DWORD *)(a1 + 15664));
  sub_60843D38(a1 + 15736);
  nullsub_77();
  FIELD_U8(a1, 8201) = 0;
  FIELD_U8(a1, 8197) = 0;
  FIELD_U8(a1, 8193) = 0;
  FIELD_U8(a1, 8204) = 0;
  FIELD_U8(a1, 8200) = 0;
  FIELD_U8(a1, 8203) = 0;
  FIELD_U8(a1, 8202) = 0;
  FIELD_U8(a1, 8196) = 0;
  FIELD_U8(a1, 8199) = 0;
  FIELD_U8(a1, 8198) = 0;
  FIELD_U8(a1, 0x2000) = 0;
  FIELD_U8(a1, 8195) = 0;
  FIELD_U8(a1, 8194) = 0;
  FIELD_U32(a1, 16044) = 0;
  FIELD_U32(a1, 16040) = 0;
  FIELD_U32(a1, 16036) = 0;
  FIELD_U32(a1, 16032) = 0;
  return a1;
}
