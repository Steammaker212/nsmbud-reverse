/* sub_603F2858
 * address: 0x603F2858   size: 1912   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603F2858(int a1)
{
  int v2; // r7
  _DWORD *v3; // r1
  _DWORD *v4; // r2
  _DWORD *v5; // r1
  _DWORD *v6; // r2
  _DWORD *v7; // r1
  _DWORD *v8; // r2
  _DWORD *v9; // r1
  _DWORD *v10; // r1
  char v11; // r12
  int *v12; // r1
  int v13; // r5
  int v14; // r6
  int *v15; // r1
  int v16; // r0
  int v17; // r2
  int v18; // r1
  int v19; // r3
  int v20; // r3
  int v21; // r2
  _DWORD *v22; // r1
  char v23; // r12
  int *v24; // r1
  int v25; // r6
  int v26; // r5
  int *v27; // r1
  int v28; // r6
  int v29; // r0
  bool v30; // zf
  int result; // r0
  int v32; // r4
  int v33; // r2
  bool v34; // zf
  int (**v35)(); // [sp+4h] [bp-2Ch] BYREF
  const char *v36; // [sp+8h] [bp-28h]

  if ( !FIELD_U8(dword_60C9A230, 2084) && !sub_6040E510(LevelInfo_instance) )
    FIELD_U8(dword_60CC6C2C, 286) |= 1u;
  sub_6045BF58(a1 + 196, 0);
  sub_6045BF58(a1 + 600, 1);
  sub_6045BF58(a1 + 1004, 2);
  sub_6045BF58(a1 + 1408, 3);
  v2 = dword_60CD0B40;
  v35 = &sead__SafeStringBase__vtable;
  v36 = "PrepareAA";
  FIELD_U32(a1, 1916) = a1;
  FIELD_U32(a1, 1920) = sub_603F30AC;
  FIELD_U32(a1, 1924) = 0;
  FIELD_U32(a1, 1912) = off_60BF9438;
  sead__SafeStringBase__operator_assign(a1 + 1892, (int)&v35);
  FIELD_U32(a1, 1900) = 2;
  FIELD_U32(a1, 1904) = -50;
  v3 = *(_DWORD **)(v2 + 36);
  if ( FIELD_U32(v2, 32) > 5u )
    v3 += 5;
  sub_6095537C(*v3, 0, a1 + 1876);
  v35 = &sead__SafeStringBase__vtable;
  v36 = "Gather";
  FIELD_U32(a1, 1984) = a1;
  FIELD_U32(a1, 1988) = sub_603F30C0;
  FIELD_U32(a1, 1992) = 0;
  FIELD_U32(a1, 1980) = off_60BF9460;
  sead__SafeStringBase__operator_assign(a1 + 1960, (int)&v35);
  FIELD_U32(a1, 1968) = 1;
  sub_609553AC(**(_DWORD **)(v2 + 36), a1 + 1944);
  v35 = &sead__SafeStringBase__vtable;
  v36 = "UpdateBG";
  FIELD_U32(a1, 2052) = a1;
  FIELD_U32(a1, 2056) = sub_603F3294;
  FIELD_U32(a1, 2060) = 0;
  FIELD_U32(a1, 2048) = off_60BF9460;
  sead__SafeStringBase__operator_assign(a1 + 2028, (int)&v35);
  FIELD_U32(a1, 2036) = 1;
  v4 = *(_DWORD **)(v2 + 36);
  if ( FIELD_U32(v2, 32) > 6u )
    v4 += 6;
  sub_609553AC(*v4, a1 + 2012);
  v35 = &sead__SafeStringBase__vtable;
  v36 = "FinalKoopaShadow";
  FIELD_U32(a1, 2120) = a1;
  FIELD_U32(a1, 2124) = gbuffer_texture_ref;
  FIELD_U32(a1, 2128) = 0;
  FIELD_U32(a1, 2116) = off_60BF9460;
  sead__SafeStringBase__operator_assign(a1 + 2096, (int)&v35);
  FIELD_U32(a1, 2104) = 1;
  v5 = *(_DWORD **)(v2 + 36);
  if ( FIELD_U32(v2, 32) > 7u )
    v5 += 7;
  sub_609553AC(*v5, a1 + 2080);
  v35 = &sead__SafeStringBase__vtable;
  v36 = "Layer3D";
  FIELD_U32(a1, 2188) = a1;
  FIELD_U32(a1, 2192) = sub_603F32D4;
  FIELD_U32(a1, 2196) = 0;
  FIELD_U32(a1, 2184) = off_60BF9460;
  sead__SafeStringBase__operator_assign(a1 + 2164, (int)&v35);
  FIELD_U32(a1, 2172) = 1;
  v6 = *(_DWORD **)(v2 + 36);
  if ( FIELD_U32(v2, 32) > 9u )
    v6 += 9;
  sub_609553AC(*v6, a1 + 2148);
  v35 = &sead__SafeStringBase__vtable;
  v36 = "ApplyAA";
  FIELD_U32(a1, 2256) = a1;
  FIELD_U32(a1, 2260) = sub_603F3348;
  FIELD_U32(a1, 2264) = 0;
  FIELD_U32(a1, 2252) = off_60BF9438;
  sead__SafeStringBase__operator_assign(a1 + 2232, (int)&v35);
  FIELD_U32(a1, 2240) = 2;
  FIELD_U32(a1, 2244) = 50;
  v7 = *(_DWORD **)(v2 + 36);
  if ( FIELD_U32(v2, 32) > 9u )
    v7 += 9;
  sub_6095537C(*v7, 5, a1 + 2216);
  v35 = &sead__SafeStringBase__vtable;
  v36 = "Layer2D";
  FIELD_U32(a1, 2324) = a1;
  FIELD_U32(a1, 2328) = sub_603F335C;
  FIELD_U32(a1, 2332) = 0;
  FIELD_U32(a1, 2320) = off_60BF9460;
  sead__SafeStringBase__operator_assign(a1 + 2300, (int)&v35);
  FIELD_U32(a1, 2308) = 1;
  v8 = *(_DWORD **)(v2 + 36);
  if ( FIELD_U32(v2, 32) > 0xAu )
    v8 += 10;
  sub_609553AC(*v8, a1 + 2284);
  v35 = &sead__SafeStringBase__vtable;
  v36 = "LayerSystem";
  FIELD_U32(a1, 2392) = a1;
  FIELD_U32(a1, 2396) = sub_603F3640;
  FIELD_U32(a1, 2400) = 0;
  FIELD_U32(a1, 2388) = off_60BF9460;
  sead__SafeStringBase__operator_assign(a1 + 2368, (int)&v35);
  FIELD_U32(a1, 2376) = 1;
  v9 = *(_DWORD **)(v2 + 36);
  if ( FIELD_U32(v2, 32) > 0xEu )
    v9 += 14;
  sub_609553AC(*v9, a1 + 2352);
  v35 = &sead__SafeStringBase__vtable;
  v36 = "Debug";
  FIELD_U32(a1, 2460) = a1;
  FIELD_U32(a1, 2464) = nullsub_3663;
  FIELD_U32(a1, 2468) = 0;
  FIELD_U32(a1, 2456) = off_60BF9460;
  sead__SafeStringBase__operator_assign(a1 + 2436, (int)&v35);
  FIELD_U32(a1, 2444) = 1;
  v10 = *(_DWORD **)(v2 + 36);
  if ( FIELD_U32(v2, 32) > 0x14u )
    v10 += 20;
  sub_6095537C(*v10, 0, a1 + 2420);
  v12 = *(int **)(v2 + 36);
  if ( FIELD_U32(v2, 32) > 9u )
    v12 += 9;
  v13 = *v12;
  if ( ((unsigned int)&dword_60C81740 & ~(1614752888 << v11) & 1) == 0 && _cxa_guard_acquire(&dword_60C81740) )
  {
    dword_60C8173C = (int)&off_60BC6E70;
    _cxa_guard_release(&dword_60C81740);
  }
  v14 = v13 + 420;
  if ( !(*(int (__fastcall **)(int, int *))(*(_DWORD *)v13 + 8))(v13, &dword_60C8173C) )
    v14 = 420;
  *(_DWORD *)(*(_DWORD *)v14 + 880) = a1 + 2556;
  v15 = *(int **)(v2 + 36);
  if ( FIELD_U32(v2, 32) > 0xAu )
    v15 += 10;
  v16 = *v15;
  v17 = dword_60C9BB38 + 368;
  v18 = dword_60C9BB38 + 540;
  FIELD_U32(v16, 76) = dword_60C9BB38 + 368;
  v19 = FIELD_U32(v2, 36);
  if ( FIELD_U32(v2, 32) > 0xAu )
    v19 += 40;
  *(_DWORD *)(*(_DWORD *)v19 + 72) = v18;
  v20 = FIELD_U32(v2, 36);
  if ( FIELD_U32(v2, 32) > 0xFu )
    v20 += 60;
  *(_DWORD *)(*(_DWORD *)v20 + 76) = v17;
  v21 = FIELD_U32(v2, 36);
  if ( FIELD_U32(v2, 32) > 0xFu )
    v21 += 60;
  *(_DWORD *)(*(_DWORD *)v21 + 72) = v18;
  v35 = &sead__SafeStringBase__vtable;
  v36 = "LayerMenu3D";
  FIELD_U32(a1, 2528) = a1;
  FIELD_U32(a1, 2532) = sub_603F366C;
  FIELD_U32(a1, 2536) = 0;
  FIELD_U32(a1, 2524) = off_60BF9460;
  sead__SafeStringBase__operator_assign(a1 + 2504, (int)&v35);
  FIELD_U32(a1, 2512) = 1;
  v22 = *(_DWORD **)(v2 + 36);
  if ( FIELD_U32(v2, 32) > 0xFu )
    v22 += 15;
  sub_6095537C(*v22, 4, a1 + 2488);
  v24 = *(int **)(v2 + 36);
  if ( FIELD_U32(v2, 32) > 8u )
    v24 += 8;
  v25 = *v24;
  if ( ((unsigned int)&dword_60C81740 & ~(1614753272 << v23) & 1) == 0 && _cxa_guard_acquire(&dword_60C81740) )
  {
    dword_60C8173C = (int)&off_60BC6E70;
    _cxa_guard_release(&dword_60C81740);
  }
  if ( v25 )
  {
    v26 = (*(int (__fastcall **)(int, int *))(*(_DWORD *)v25 + 8))(v25, &dword_60C8173C);
    if ( v26 )
      v26 = v25;
  }
  else
  {
    v26 = 0;
  }
  v27 = *(int **)(v2 + 36);
  if ( FIELD_U32(v2, 32) > 7u )
    v27 += 7;
  v28 = *v27;
  if ( ((unsigned int)&dword_60C8C214 & ~(1614753420 << v23) & 1) == 0 && _cxa_guard_acquire(&dword_60C8C214) )
  {
    dword_60C8C210 = (int)&off_60BC6E70;
    _cxa_guard_release(&dword_60C8C214);
  }
  if ( !v28 )
    goto LABEL_59;
  v29 = (*(int (__fastcall **)(int, int *))(*(_DWORD *)v28 + 8))(v28, &dword_60C8C210);
  if ( v29 )
    v29 = v28;
  v30 = v26 == 0;
  if ( v26 )
    v30 = v29 == 0;
  if ( v30 )
  {
LABEL_59:
    if ( !v26 )
      goto LABEL_61;
  }
  else
  {
    sub_60446A98(v29, v26);
  }
  *(_DWORD *)(FIELD_U32(v26, 420) + 880) = a1 + 2560;
LABEL_61:
  sub_60722468(dword_60CBD85C);
  sub_60726A40(dword_60CBD894);
  DistantViewMgr_ref(dword_60C8D904);
  sub_6023895C(dword_60C8D9DC);
  FIELD_U8(a1, 195) = 1;
  result = Level_getArea(Level_instance, FIELD_U8(LevelInfo_instance, 18));
  v32 = result;
  if ( result )
  {
    v33 = 0;
    do
    {
      result = sub_60727CF0(v32, 486, v33);
      v33 = result;
      v34 = result == 0;
      if ( result )
      {
        result = FIELD_U8(LevelInfo_instance, 20);
        v34 = result == (unsigned __int8)(FIELD_U32(v33, 8) >> 4);
      }
    }
    while ( !v34 );
  }
  return result;
}
