/* sub_607F982C
 * address: 0x607F982C   size: 640   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607F982C(int a1)
{
  int v2; // r5
  _DWORD *v3; // r1
  _DWORD *v4; // r1
  int v5; // r5
  int v6; // r7
  int v7; // r6
  int v8; // r4
  int v9; // t1
  int v10; // r0
  int v11; // r2
  int v12; // r2
  int v13; // r2
  unsigned int v14; // r1
  int v15; // r0
  int (**v17)(); // [sp+0h] [bp-28h] BYREF
  const char *v18; // [sp+4h] [bp-24h]

  sub_60815858(dword_60CC6B68, 3);
  FIELD_U8(dword_60C9BB38, 628) = FIELD_U8(dword_60CC6D78, 20) ^ 1;
  sub_604C0278(a1 + 1304);
  v2 = dword_60CD0B40;
  v17 = &sead__SafeStringBase__vtable;
  v18 = "WithMiiPackSelectScene";
  FIELD_U32(a1, 800) = a1;
  FIELD_U32(a1, 804) = sub_607F9AFC;
  FIELD_U32(a1, 808) = 0;
  FIELD_U32(a1, 796) = off_60C27CF8;
  sead__SafeStringBase__operator_assign(a1 + 776, (int)&v17);
  FIELD_U32(a1, 784) = 1;
  v3 = *(_DWORD **)(v2 + 36);
  if ( FIELD_U32(v2, 32) > 6u )
    v3 += 6;
  sub_6095537C(*v3, 1, a1 + 760);
  v17 = &sead__SafeStringBase__vtable;
  v18 = "WithMiiPackSelectSceneGather";
  FIELD_U32(a1, 868) = a1;
  FIELD_U32(a1, 872) = sub_607F9BB4;
  FIELD_U32(a1, 876) = 0;
  FIELD_U32(a1, 864) = off_60C27D34;
  sead__SafeStringBase__operator_assign(a1 + 844, (int)&v17);
  FIELD_U32(a1, 852) = 2;
  v4 = *(_DWORD **)(v2 + 36);
  if ( FIELD_U32(v2, 32) > 5u )
    v4 += 5;
  sub_6095537C(*v4, 0, a1 + 828);
  v5 = a1 + 280;
  sub_6090C9A0(a1 + 280);
  v6 = a1 + 192;
  FIELD_U32(a1, 428) = -1054867456;
  FIELD_U32(a1, 432) = 1167867904;
  FIELD_U8(a1, 284) = 1;
  sub_6090A7D4(a1 + 192, (float *)(a1 + 280));
  v7 = a1 + 540;
  sub_6090C42C(a1 + 540);
  FIELD_U32(a1, 520) = 0;
  FIELD_U32(a1, 516) = 0;
  FIELD_U32(a1, 512) = 0;
  FIELD_U32(a1, 508) = 0;
  FIELD_U32(a1, 504) = 0;
  FIELD_U32(a1, 524) = -1082130432;
  FIELD_U32(a1, 528) = 0;
  FIELD_U32(a1, 532) = 1065353216;
  FIELD_U32(a1, 536) = 0;
  v9 = FIELD_U32(a1, 452);
  v8 = a1 + 452;
  (*(void (__fastcall **)(int, int))(v9 + 16))(v8, v8 + 4);
  v10 = dword_60CD0B40;
  v11 = FIELD_U32(dword_60CD0B40, 36);
  if ( FIELD_U32(dword_60CD0B40, 32) > 6u )
    v11 += 24;
  *(_DWORD *)(*(_DWORD *)v11 + 72) = v6;
  v12 = FIELD_U32(v10, 36);
  if ( FIELD_U32(v10, 32) > 6u )
    v12 += 24;
  *(_DWORD *)(*(_DWORD *)v12 + 76) = v5;
  v13 = FIELD_U32(v10, 36);
  if ( FIELD_U32(v10, 32) > 5u )
    v13 += 20;
  *(_DWORD *)(*(_DWORD *)v13 + 72) = v8;
  v14 = FIELD_U32(v10, 32);
  v15 = FIELD_U32(v10, 36);
  if ( v14 > 5 )
    v15 += 20;
  *(_DWORD *)(*(_DWORD *)v15 + 76) = v7;
  FIELD_U8(dword_60CC6C2C, 286) |= 1u;
  return sub_604B8400(dword_60C99DD0 + 16, 5.0);
}
