/* fly_throw3_ref
 * address: 0x600A6528   size: 676   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall fly_throw3_ref(_DWORD *a1)
{
  int v1; // r0
  float *v2; // r4
  float v3; // s16
  float v4; // r5
  float v5; // r7
  float *v6; // r0
  float v7; // s16
  float v8; // r5
  float v9; // r7
  float *v10; // r0
  float v11; // s16
  float v12; // r5
  float v13; // r7
  float *v14; // r0
  _DWORD **v15; // r0
  _DWORD *v16; // r5
  int ResArchiveById; // r0
  int v18; // r0
  int *v19; // r0
  int v20; // r0
  ActorBuildInfo v22[2]; // [sp+8h] [bp-68h] BYREF

  a1[2158] = 1;
  a1[2159] = 1101529088;
  v2 = (float *)(a1 + 1774);
  v1 = a1[1774];
  v22[0].settings1 = (int)&sead__SafeStringBase__vtable;
  v22[0].settings2 = (int)"fly_throw3";
  sub_60421AD4(v1);
  v3 = *(v2 - 1745);
  v4 = *(v2 - 1746);
  v5 = *(v2 - 1747);
  memset(v22, 0, 44);
  v22[0].parentId = *(int *)(v2 - 1772);
  v22[0].profile = Profile__get(0x2CAu);
  v22[0].position.x = v5;
  v22[0].position.y = v4;
  v22[0].position.z = v3 + 600.0;
  v6 = (float *)ActorMgr__create((void *)ActorMgr__instance, v22, 0);
  v2[386] = v6[2];
  v6[1690] = 0.0;
  v7 = *(v2 - 1745);
  v8 = *(v2 - 1746);
  v9 = *(v2 - 1747);
  memset(v22, 0, 44);
  v22[0].parentId = *(int *)(v2 - 1772);
  v22[0].profile = Profile__get(0x2CAu);
  v22[0].position.x = v9;
  v22[0].position.y = v8;
  v22[0].position.z = v7 + 600.0;
  v10 = (float *)ActorMgr__create((void *)ActorMgr__instance, v22, 0);
  v2[387] = v10[2];
  *((_DWORD *)v10 + 1690) = 1;
  v11 = *(v2 - 1745);
  v12 = *(v2 - 1746);
  v13 = *(v2 - 1747);
  memset(v22, 0, 44);
  v22[0].parentId = *(int *)(v2 - 1772);
  v22[0].profile = Profile__get(0x2CAu);
  v22[0].position.x = v13;
  v22[0].position.y = v12;
  v22[0].position.z = v11 + 600.0;
  v14 = (float *)ActorMgr__create((void *)ActorMgr__instance, v22, 0);
  v2[388] = v14[2];
  *((_DWORD *)v14 + 1690) = 2;
  v15 = *(_DWORD ***)(*(_DWORD *)v2 + 28);
  if ( *(_DWORD *)(*(_DWORD *)v2 + 24) > 1u )
    ++v15;
  v16 = *v15;
  ResArchiveById = Profile__getResArchiveById(*((Profile **)v2 - 1771), 0);
  v22[0].settings1 = (int)&sead__SafeStringBase__vtable;
  v22[0].settings2 = (int)"wand";
  ShuAnim_play(v16, ResArchiveById, (int)v22);
  v18 = *(_DWORD *)(*(_DWORD *)v2 + 28);
  if ( *(_DWORD *)(*(_DWORD *)v2 + 24) > 1u )
    v18 += 4;
  AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v18 + 4), 0);
  v19 = *(int **)(*(_DWORD *)v2 + 28);
  if ( *(_DWORD *)(*(_DWORD *)v2 + 24) > 1u )
    ++v19;
  v20 = *v19;
  FIELD_U32(v20, 20) = 0;
  FIELD_U32(v20, 28) |= 2u;
  *((_DWORD *)v2 - 1) = 1;
  return 1;
}
