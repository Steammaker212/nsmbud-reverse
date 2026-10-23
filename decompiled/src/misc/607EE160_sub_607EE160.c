/* sub_607EE160
 * address: 0x607EE160   size: 956   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607EE160(int a1)
{
  int v2; // r1
  int v3; // r5
  _DWORD *v4; // r1
  _DWORD *v5; // r1
  _DWORD *v6; // r1
  int v7; // r9
  int v8; // r6
  int v9; // r4
  int v10; // t1
  int v11; // r1
  int v12; // r1
  int v13; // r1
  int v14; // r1
  int v15; // r1
  int v16; // r1
  int (**v18)(); // [sp+8h] [bp-28h] BYREF
  const char *v19; // [sp+Ch] [bp-24h]

  sub_6045BE8C(dword_60C9CFB8, 1);
  FIELD_U8(dword_60C9CFB8, 83) = 1;
  v2 = dword_60CC6D78;
  FIELD_U8(dword_60CC6D78, 109051) = 0;
  FIELD_U8(v2, 109055) = 0;
  FIELD_U8(v2, 109056) = 0;
  nullsub_20();
  v3 = dword_60CD0B40;
  v18 = &sead__SafeStringBase__vtable;
  v19 = "GameSetupScene";
  FIELD_U32(a1, 476) = a1;
  FIELD_U32(a1, 480) = sub_607EE584;
  FIELD_U32(a1, 484) = 0;
  FIELD_U32(a1, 472) = off_60C26F98;
  sead__SafeStringBase__operator_assign(a1 + 452, (int)&v18);
  FIELD_U32(a1, 460) = 2;
  sub_6095537C(**(_DWORD **)(v3 + 36), 0, a1 + 436);
  v18 = &sead__SafeStringBase__vtable;
  v19 = "GameSetupSceneBack";
  FIELD_U32(a1, 272) = a1;
  FIELD_U32(a1, 276) = sub_607EE67C;
  FIELD_U32(a1, 280) = 0;
  FIELD_U32(a1, 268) = off_60C26FC0;
  sead__SafeStringBase__operator_assign(a1 + 248, (int)&v18);
  FIELD_U32(a1, 256) = 1;
  v4 = *(_DWORD **)(v3 + 36);
  if ( FIELD_U32(v3, 32) > 5u )
    v4 += 5;
  sub_6095537C(*v4, 1, a1 + 232);
  v18 = &sead__SafeStringBase__vtable;
  v19 = "GameSetupScene3DUI";
  FIELD_U32(a1, 340) = a1;
  FIELD_U32(a1, 344) = sub_607EE820;
  FIELD_U32(a1, 348) = 0;
  FIELD_U32(a1, 336) = off_60C26FC0;
  sead__SafeStringBase__operator_assign(a1 + 316, (int)&v18);
  FIELD_U32(a1, 324) = 1;
  v5 = *(_DWORD **)(v3 + 36);
  if ( FIELD_U32(v3, 32) > 6u )
    v5 += 6;
  sub_6095537C(*v5, 2, a1 + 300);
  v18 = &sead__SafeStringBase__vtable;
  v19 = "GameSetupSceneFront";
  FIELD_U32(a1, 408) = a1;
  FIELD_U32(a1, 412) = sub_607EE85C;
  FIELD_U32(a1, 416) = 0;
  FIELD_U32(a1, 404) = off_60C26FC0;
  sead__SafeStringBase__operator_assign(a1 + 384, (int)&v18);
  FIELD_U32(a1, 392) = 1;
  v6 = *(_DWORD **)(v3 + 36);
  if ( FIELD_U32(v3, 32) > 8u )
    v6 += 8;
  sub_6095537C(*v6, 1, a1 + 368);
  v7 = a1 + 864;
  sub_6090C9A0(a1 + 864);
  v8 = a1 + 776;
  FIELD_U32(a1, 1012) = 0;
  FIELD_U32(a1, 1016) = 1184645120;
  FIELD_U8(a1, 868) = 1;
  sub_6090A7D4(a1 + 776, (float *)(a1 + 864));
  (*(void (__fastcall **)(int, int))(FIELD_U32(a1, 776) + 16))(a1 + 776, a1 + 780);
  FIELD_U32(a1, 588) = 0;
  FIELD_U32(a1, 556) = 0;
  FIELD_U32(a1, 560) = 0;
  FIELD_U32(a1, 564) = 1158578176;
  FIELD_U32(a1, 568) = 0;
  FIELD_U32(a1, 572) = 0;
  FIELD_U32(a1, 576) = -1014693888;
  FIELD_U32(a1, 580) = 0;
  FIELD_U32(a1, 584) = 1065353216;
  v10 = FIELD_U32(a1, 504);
  v9 = a1 + 504;
  (*(void (__fastcall **)(int, int))(v10 + 16))(v9, v9 + 4);
  sub_6090C42C(v9 + 88);
  v11 = FIELD_U32(v3, 36);
  if ( FIELD_U32(v3, 32) > 6u )
    v11 += 24;
  *(_DWORD *)(*(_DWORD *)v11 + 72) = v9;
  v12 = FIELD_U32(v3, 36);
  if ( FIELD_U32(v3, 32) > 6u )
    v12 += 24;
  *(_DWORD *)(*(_DWORD *)v12 + 76) = v9 + 88;
  v13 = FIELD_U32(v3, 36);
  if ( FIELD_U32(v3, 32) > 5u )
    v13 += 20;
  *(_DWORD *)(*(_DWORD *)v13 + 72) = v8;
  v14 = FIELD_U32(v3, 36);
  if ( FIELD_U32(v3, 32) > 5u )
    v14 += 20;
  *(_DWORD *)(*(_DWORD *)v14 + 76) = v7;
  v15 = FIELD_U32(v3, 36);
  if ( FIELD_U32(v3, 32) > 8u )
    v15 += 32;
  *(_DWORD *)(*(_DWORD *)v15 + 72) = v8;
  v16 = FIELD_U32(v3, 36);
  if ( FIELD_U32(v3, 32) > 8u )
    v16 += 32;
  *(_DWORD *)(*(_DWORD *)v16 + 76) = v7;
  sub_60427258(dword_60C9BBD4, v9, v9 + 88);
  sub_60538018(dword_60CAADA8);
  sub_6053E53C(dword_60CAB438);
  FIELD_U32(v9, 43840) = 5;
  sub_605159B8(v9 + 13872);
  sub_605571D8(v9 + 43848);
  return sub_6080C38C(dword_60CC6B0C, 40, 1.0);
}
