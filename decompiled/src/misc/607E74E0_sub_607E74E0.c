/* sub_607E74E0
 * address: 0x607E74E0   size: 1004   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_607E74E0(int a1)
{
  int v2; // r7
  _DWORD *v3; // r1
  _DWORD *v4; // r1
  _DWORD *v5; // r1
  _DWORD *v6; // r1
  int v7; // r1
  _DWORD *v8; // r1
  _DWORD *v9; // r1
  int v10; // r1
  int v11; // r1
  int v12; // r1
  int v13; // r2
  bool v14; // zf
  int (**v15)(); // [sp+0h] [bp-28h] BYREF
  const char *v16; // [sp+4h] [bp-24h]

  FIELD_U8(dword_60C9BB38, 628) = FIELD_U8(dword_60CC6D78, 20) ^ 1;
  v2 = dword_60CD0B40;
  v15 = &sead__SafeStringBase__vtable;
  v16 = "DemoTestScene";
  FIELD_U32(a1, 368) = a1;
  FIELD_U32(a1, 372) = sub_607E792C;
  FIELD_U32(a1, 376) = 0;
  FIELD_U32(a1, 364) = off_60C26C3C;
  sead__SafeStringBase__operator_assign(a1 + 344, (int)&v15);
  FIELD_U32(a1, 352) = 1;
  v3 = *(_DWORD **)(v2 + 36);
  if ( FIELD_U32(v2, 32) > 5u )
    v3 += 5;
  sub_609553AC(*v3, a1 + 328);
  v15 = &sead__SafeStringBase__vtable;
  v16 = "DemoTestScene";
  FIELD_U32(a1, 436) = a1;
  FIELD_U32(a1, 440) = sub_607E7AA8;
  FIELD_U32(a1, 444) = 0;
  FIELD_U32(a1, 432) = off_60C26C3C;
  sead__SafeStringBase__operator_assign(a1 + 412, (int)&v15);
  FIELD_U32(a1, 420) = 1;
  v4 = *(_DWORD **)(v2 + 36);
  if ( FIELD_U32(v2, 32) > 5u )
    v4 += 5;
  sub_6095537C(*v4, 5, a1 + 396);
  v15 = &sead__SafeStringBase__vtable;
  v16 = "DemoTestScene";
  FIELD_U32(a1, 232) = a1;
  FIELD_U32(a1, 236) = sub_607E7B48;
  FIELD_U32(a1, 240) = 0;
  FIELD_U32(a1, 228) = off_60C26C3C;
  sead__SafeStringBase__operator_assign(a1 + 208, (int)&v15);
  FIELD_U32(a1, 216) = 1;
  sub_609553AC(**(_DWORD **)(v2 + 36), a1 + 192);
  v15 = &sead__SafeStringBase__vtable;
  v16 = "DemoTestScene";
  FIELD_U32(a1, 300) = a1;
  FIELD_U32(a1, 304) = sub_607E8134;
  FIELD_U32(a1, 308) = 0;
  FIELD_U32(a1, 296) = off_60C26C3C;
  sead__SafeStringBase__operator_assign(a1 + 276, (int)&v15);
  FIELD_U32(a1, 284) = 1;
  v5 = *(_DWORD **)(v2 + 36);
  if ( FIELD_U32(v2, 32) > 7u )
    v5 += 7;
  sub_609553AC(*v5, a1 + 260);
  v15 = &sead__SafeStringBase__vtable;
  v16 = "DemoTestScene";
  FIELD_U32(a1, 3980) = a1;
  FIELD_U32(a1, 3984) = sub_607E815C;
  FIELD_U32(a1, 3988) = 0;
  FIELD_U32(a1, 3976) = off_60C26C3C;
  sead__SafeStringBase__operator_assign(a1 + 3956, (int)&v15);
  FIELD_U32(a1, 3964) = 1;
  v6 = *(_DWORD **)(v2 + 36);
  if ( FIELD_U32(v2, 32) > 0xEu )
    v6 += 14;
  sub_6095537C(*v6, 1, a1 + 3940);
  v7 = FIELD_U32(v2, 36);
  if ( FIELD_U32(v2, 32) > 0xEu )
    v7 += 56;
  *(_BYTE *)(*(_DWORD *)v7 + 91) = 4;
  v15 = &sead__SafeStringBase__vtable;
  v16 = "DemoTestScene__prepareFilterAA_";
  FIELD_U32(a1, 504) = a1;
  FIELD_U32(a1, 508) = sub_607E81F0;
  FIELD_U32(a1, 512) = 0;
  FIELD_U32(a1, 500) = off_60C26C3C;
  sead__SafeStringBase__operator_assign(a1 + 480, (int)&v15);
  FIELD_U32(a1, 488) = 1;
  FIELD_U32(a1, 492) = -300;
  v8 = *(_DWORD **)(v2 + 36);
  if ( FIELD_U32(v2, 32) > 5u )
    v8 += 5;
  sub_6095537C(*v8, 2, a1 + 464);
  v15 = &sead__SafeStringBase__vtable;
  v16 = "DemoTestScene__applyFilterAA_";
  FIELD_U32(a1, 572) = a1;
  FIELD_U32(a1, 576) = sub_607E8204;
  FIELD_U32(a1, 580) = 0;
  FIELD_U32(a1, 568) = off_60C26C3C;
  sead__SafeStringBase__operator_assign(a1 + 548, (int)&v15);
  FIELD_U32(a1, 556) = 1;
  v9 = *(_DWORD **)(v2 + 36);
  if ( FIELD_U32(v2, 32) > 7u )
    v9 += 7;
  sub_6095537C(*v9, 5, a1 + 532);
  sub_6090C9A0(a1 + 2624);
  FIELD_U32(a1, 2772) = 1065353216;
  FIELD_U32(a1, 2776) = 1203982336;
  FIELD_U8(a1, 2628) = 1;
  sub_6090A7D4(a1 + 2796, (float *)(a1 + 2624));
  v10 = FIELD_U32(v2, 36);
  if ( FIELD_U32(v2, 32) > 7u )
    v10 += 28;
  *(_DWORD *)(*(_DWORD *)v10 + 76) = a1 + 2624;
  v11 = FIELD_U32(v2, 36);
  if ( FIELD_U32(v2, 32) > 7u )
    v11 += 28;
  *(_DWORD *)(*(_DWORD *)v11 + 72) = a1 + 2796;
  v12 = FIELD_U32(v2, 36);
  if ( FIELD_U32(v2, 32) > 5u )
    v12 += 20;
  *(_DWORD *)(*(_DWORD *)v12 + 76) = a1 + 3232;
  v13 = FIELD_U32(v2, 36);
  if ( FIELD_U32(v2, 32) > 5u )
    v13 += 20;
  *(_DWORD *)(*(_DWORD *)v13 + 72) = a1 + 2884;
  sub_6090C9A0(a1 + 3060);
  FIELD_U32(a1, 3208) = 0;
  FIELD_U32(a1, 3212) = 1184645120;
  FIELD_U8(a1, 3064) = 1;
  sub_6090A7D4(a1 + 2972, (float *)(a1 + 3060));
  FIELD_U8(a1, 1729176) = 0;
  v14 = dword_60C9A230 == 0;
  if ( dword_60C9A230 )
    v14 = FIELD_U8(dword_60C9A230, 2084) == 0;
  if ( v14 )
    nullsub_64();
}
