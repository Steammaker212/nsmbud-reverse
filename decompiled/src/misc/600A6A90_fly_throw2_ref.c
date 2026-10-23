/* fly_throw2_ref
 * address: 0x600A6A90   size: 528   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall fly_throw2_ref(int a1)
{
  _DWORD *v2; // r7
  _DWORD *v3; // r8
  int v4; // r0
  int v5; // r6
  _DWORD **v6; // r0
  _DWORD *v7; // r10
  int ResArchiveById; // r0
  int v9; // r0
  int *v10; // r0
  int v11; // r0
  float v12; // s16
  float v13; // r6
  float v14; // r5
  _BYTE *v15; // r0
  _DWORD *v16; // r1
  int v17; // r1
  ActorBuildInfo v19[2]; // [sp+0h] [bp-58h] BYREF

  v2 = (_DWORD *)(a1 + 7180);
  v3 = (_DWORD *)(a1 + 8632);
  if ( FIELD_U32(a1, 7180) == 1 )
  {
    *v3 = 5;
    FIELD_U32(a1, 8636) = 1111752704;
  }
  else
  {
    *v3 = 4;
    FIELD_U32(a1, 8636) = 1099431936;
    v5 = a1 + 7096;
    v4 = FIELD_U32(a1, 7096);
    v19[0].settings1 = (int)&sead__SafeStringBase__vtable;
    v19[0].settings2 = (int)"fly_throw2";
    sub_60421AD4(v4);
    v6 = *(_DWORD ***)(FIELD_U32(a1, 7096) + 28);
    if ( *(_DWORD *)(FIELD_U32(a1, 7096) + 24) > 1u )
      ++v6;
    v7 = *v6;
    ResArchiveById = Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
    v19[0].settings1 = (int)&sead__SafeStringBase__vtable;
    v19[0].settings2 = (int)"wand";
    ShuAnim_play(v7, ResArchiveById, (int)v19);
    v9 = *(_DWORD *)(*(_DWORD *)v5 + 28);
    if ( *(_DWORD *)(*(_DWORD *)v5 + 24) > 1u )
      v9 += 4;
    AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v9 + 4), 0);
    v10 = *(int **)(*(_DWORD *)v5 + 28);
    if ( *(_DWORD *)(*(_DWORD *)v5 + 24) > 1u )
      ++v10;
    v11 = *v10;
    FIELD_U32(v11, 20) = 0;
    FIELD_U32(v11, 28) |= 2u;
  }
  v12 = FIELD_F32(a1, 116);
  v13 = FIELD_F32(a1, 112);
  v14 = FIELD_F32(a1, 108);
  memset(v19, 0, 44);
  v19[0].parentId = FIELD_U32(a1, 8);
  v19[0].profile = Profile__get(0x2CAu);
  v19[0].position.x = v14;
  v19[0].position.y = v13;
  v19[0].position.z = v12 + 600.0;
  v15 = ActorMgr__create((void *)ActorMgr__instance, v19, 0);
  FIELD_U32(a1, 7136) = *((_DWORD *)v15 + 2);
  v15[6764] = 1;
  v16 = v15 + 6768;
  if ( *v2 == 1 )
  {
    *v16 = 5;
    v17 = *v3 - 1;
  }
  else
  {
    *v16 = 4;
    v17 = 4 - *v3;
  }
  *((_DWORD *)v15 + 1693) = v17;
  FIELD_U32(a1, 7092) = 1;
  return 7092;
}
