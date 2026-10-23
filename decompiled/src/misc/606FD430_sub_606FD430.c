/* sub_606FD430
 * address: 0x606FD430   size: 792   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606FD430(int a1)
{
  ColliderBase *v2; // r5
  ActiveColliderMgr *v3; // r5
  int v4; // r5
  int ResArchiveById; // r0
  int v6; // r0
  void (__fastcall ***v7)(_DWORD, int, int *, int *, int *); // r0
  int v8; // r5
  int v9; // r0
  int v10; // r0
  void (__fastcall ***v11)(_DWORD, int, int *, int *, int *); // r0
  int v12; // r5
  int v13; // r0
  int v14; // r0
  float v15; // s2
  int v17; // [sp+8h] [bp-38h] BYREF
  int v18; // [sp+Ch] [bp-34h]
  int v19; // [sp+10h] [bp-30h] BYREF
  int v20; // [sp+14h] [bp-2Ch] BYREF
  float v21; // [sp+18h] [bp-28h]

  FIELD_U8(a1, 6184) = 0;
  FIELD_U8(a1, 6180) = 0;
  FIELD_U8(a1, 6181) = 0;
  FIELD_U8(a1, 6185) = 0;
  FIELD_U8(a1, 6186) = 0;
  FIELD_U8(a1, 6183) = 1;
  FIELD_U32(a1, 6176) = 1;
  v2 = (ColliderBase *)(a1 + 6192);
  if ( !sub_601536B0((int)ColliderMgr_instance, a1 + 6192) )
  {
    ColliderMgr_add(ColliderMgr_instance, v2);
    ColliderMgr_add(ColliderMgr_instance, (ColliderBase *)(a1 + 6640));
  }
  v3 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 188))
    && !ActiveColliderMgr_isInCreateList(v3, (ActiveCollider *)(a1 + 188)) )
  {
    ActiveColliderMgr_addToCreateList(v3, (ActiveCollider *)(a1 + 188));
  }
  v4 = FIELD_U32(a1, 6116);
  ResArchiveById = Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
  v20 = (int)&sead__SafeStringBase__vtable;
  v21 = COERCE_FLOAT("waterpillar");
  sub_60446088(v4, ResArchiveById, &v20);
  *(_DWORD *)(FIELD_U32(a1, 6116) + 24) = 1065353216;
  v6 = FIELD_U32(a1, 6116);
  FIELD_U32(v6, 20) = 1111752704;
  FIELD_U32(v6, 28) |= 2u;
  AnimationCtrl_setRepeat((ModelAnimation *)(FIELD_U32(a1, 6116) + 4), 1);
  v20 = 1065353216;
  v17 = 0;
  v21 = 1.0;
  v19 = 0;
  v18 = -1073741824;
  v7 = (void (__fastcall ***)(_DWORD, int, int *, int *, int *))(*(int (__fastcall **)(_DWORD, _DWORD))(***(_DWORD ***)(a1 + 6104) + 132))(
                                                                  **(_DWORD **)(a1 + 6104),
                                                                  0);
  (**v7)(v7, 3, &v20, &v19, &v17);
  v8 = FIELD_U32(a1, 6124);
  v9 = Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
  v20 = (int)&sead__SafeStringBase__vtable;
  v21 = COERCE_FLOAT("waterpillar_behind");
  sub_60446088(v8, v9, &v20);
  *(_DWORD *)(FIELD_U32(a1, 6124) + 24) = 1065353216;
  v10 = FIELD_U32(a1, 6124);
  FIELD_U32(v10, 20) = 1111752704;
  FIELD_U32(v10, 28) |= 2u;
  AnimationCtrl_setRepeat((ModelAnimation *)(FIELD_U32(a1, 6124) + 4), 1);
  v20 = 1065353216;
  v17 = 0;
  v21 = 1.0;
  v19 = 0;
  v18 = -1073741824;
  v11 = (void (__fastcall ***)(_DWORD, int, int *, int *, int *))(*(int (__fastcall **)(_DWORD, _DWORD))(***(_DWORD ***)(a1 + 6112) + 132))(
                                                                   **(_DWORD **)(a1 + 6112),
                                                                   0);
  (**v11)(v11, 3, &v20, &v19, &v17);
  v12 = FIELD_U32(a1, 6120);
  v13 = Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
  v20 = (int)&sead__SafeStringBase__vtable;
  v21 = COERCE_FLOAT("waterpillar_top");
  sub_60446088(v12, v13, &v20);
  *(_DWORD *)(FIELD_U32(a1, 6120) + 24) = 1065353216;
  v14 = FIELD_U32(a1, 6120);
  FIELD_U32(v14, 20) = 1105723392;
  FIELD_U32(v14, 28) |= 2u;
  AnimationCtrl_setRepeat((ModelAnimation *)(FIELD_U32(a1, 6120) + 4), 1);
  v15 = FIELD_F32(a1, 112);
  v20 = FIELD_U32(a1, 108);
  v21 = v15 + 32.0;
  return TileMgr_splashRelated(TileMgr_instance, &v20, 29);
}
