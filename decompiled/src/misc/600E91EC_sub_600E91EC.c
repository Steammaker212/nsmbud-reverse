/* sub_600E91EC
 * address: 0x600E91EC   size: 1140   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_600E91EC(float *a1)
{
  int v2; // r9
  signed int v3; // r0
  int v4; // r5
  int v5; // r0
  int (__fastcall *v6)(int, ActorBuildInfo *); // r2
  int v7; // r0
  int (__fastcall *v8)(int, ActorBuildInfo *); // r2
  float v9; // s2
  int v10; // r1
  int v11; // r2
  int v12; // r0
  float v13; // r7
  int v14; // r8
  float v15; // s18
  float v16; // r5
  _BYTE *v17; // r0
  int v18; // r1
  int v19; // r0
  float v20; // s18
  float v21; // r7
  float v22; // r10
  float v23; // r8
  _BYTE *v24; // r0
  int v25; // r0
  int v27; // [sp+8h] [bp-70h]
  float v28; // [sp+Ch] [bp-6Ch]
  ActorBuildInfo v29; // [sp+10h] [bp-68h] BYREF

  v2 = 0;
  a1[29] = -2500.0;
  a1[36] = 1.3;
  a1[37] = 1.3;
  a1[38] = 1.3;
  a1[123] = 0.0;
  a1[124] = 24.0;
  a1[125] = 48.0;
  a1[126] = 48.0;
  a1[143] = 0.0;
  a1[144] = 16.0;
  a1[145] = 0.0;
  v3 = StageActor__directionToPlayerX((StateActor *)a1, (Vec3 *)a1 + 9);
  *((_DWORD *)a1 + 20) = v3;
  v4 = byte_60AFE3F4[v3];
  *((_DWORD *)a1 + 40) = (*(int (__fastcall **)(float *))(*(_DWORD *)a1 + 1216))(a1) * v4;
  a1[1873] = -157.0;
  a1[1872] = 157.0;
  *((_DWORD *)a1 + 1776) = &dword_60C852C0;
  *((_DWORD *)a1 + 1777) = &dword_60C85370;
  *((_DWORD *)a1 + 1778) = &dword_60C852D0;
  *((_DWORD *)a1 + 1779) = &dword_60C852F8;
  *((_DWORD *)a1 + 1780) = &unk_60C85330;
  *((_DWORD *)a1 + 1950) = &unk_60AF5EA0;
  *((_DWORD *)a1 + 2029) = &dword_60C853C0;
  v5 = **((_DWORD **)a1 + 1775);
  v6 = *(int (__fastcall **)(int, ActorBuildInfo *))(*(_DWORD *)v5 + 84);
  v29.settings1 = (int)&sead__SafeStringBase__vtable;
  v29.settings2 = (int)"ludwig_shell_model";
  *((_DWORD *)a1 + 1943) = v6(v5, &v29);
  v7 = **((_DWORD **)a1 + 1774);
  v8 = *(int (__fastcall **)(int, ActorBuildInfo *))(*(_DWORD *)v7 + 84);
  v29.settings1 = (int)&sead__SafeStringBase__vtable;
  v29.settings2 = (int)"ludwig_all_root";
  *((_DWORD *)a1 + 1942) = v8(v7, &v29);
  a1[1872] = 144.0;
  a1[1873] = -144.0;
  v9 = FIELD_F32(dword_60CC6484, 116);
  a1[2043] = v9 + -112.0;
  a1[2044] = v9;
  a1[2045] = v9 + 112.0;
  (*(void (__fastcall **)(float *))(*(_DWORD *)a1 + 1140))(a1);
  (*(void (__fastcall **)(float *))(*(_DWORD *)a1 + 76))(a1);
  CollisionMgr_init((CollisionMgr *)(a1 + 162), (StateActor *)a1, &stru_60AF5EEC, &stru_60AF5EF8, &stru_60AF5F04);
  v10 = *((_DWORD *)a1 + 796);
  v11 = *((_DWORD *)a1 + 798) | 0x14000A00;
  v12 = *((_DWORD *)a1 + 794) | 0x14000A00;
  *((_DWORD *)a1 + 800) |= 0x14000A00u;
  *((_DWORD *)a1 + 798) = v11;
  *((_DWORD *)a1 + 794) = v12;
  *((_DWORD *)a1 + 796) = v10 | 0x14000A00;
  v13 = a1[27];
  v14 = *((_DWORD *)a1 + 28);
  v15 = a1[29];
  a1[2084] = 0.0;
  v16 = a1[28];
  memset(&v29, 0, sizeof(v29));
  v29.parentId = (int)a1[2];
  v29.profile = Profile__get(0x2BFu);
  v29.position.x = v13;
  v29.position.y = v16;
  v29.position.z = v15;
  v29.field_20 = 0;
  v17 = ActorMgr__create((void *)ActorMgr__instance, &v29, 0);
  v18 = 0;
  if ( v17 )
    v18 = *((_DWORD *)v17 + 2);
  *((_DWORD *)a1 + 2084) = v18;
  v19 = (*(int (__fastcall **)(float *, _DWORD))(*(_DWORD *)a1 + 1676))(a1, 0);
  v20 = (float)(v15 + -300.0) + -300.0;
  v27 = v14;
  FIELD_U32(v19, 112) = v14;
  v28 = v13;
  FIELD_F32(v19, 108) = v13;
  FIELD_F32(v19, 116) = v20;
  *(_DWORD *)((*(int (__fastcall **)(float *, _DWORD))(*(_DWORD *)a1 + 1676))(a1, 0) + 8340) = 0;
  a1[2085] = 0.0;
  v21 = a1[29];
  v22 = a1[28];
  v23 = a1[27];
  memset(&v29, 0, sizeof(v29));
  v29.parentId = (int)a1[2];
  v29.profile = Profile__get(0x2BFu);
  v29.position.x = v23;
  v29.position.y = v22;
  v29.position.z = v21;
  v29.field_20 = 0;
  v24 = ActorMgr__create((void *)ActorMgr__instance, &v29, 0);
  if ( v24 )
    v2 = *((_DWORD *)v24 + 2);
  *((_DWORD *)a1 + 2085) = v2;
  v25 = (*(int (__fastcall **)(float *, int))(*(_DWORD *)a1 + 1676))(a1, 1);
  FIELD_U32(v25, 112) = v27;
  FIELD_F32(v25, 108) = v28;
  FIELD_F32(v25, 116) = v20 + -300.0;
  *(_DWORD *)((*(int (__fastcall **)(float *, int))(*(_DWORD *)a1 + 1676))(a1, 1) + 8340) = 1;
  *((_BYTE *)a1 + 8132) = 0;
  (*(void (__fastcall **)(float *, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C834AC);
  return 1;
}
