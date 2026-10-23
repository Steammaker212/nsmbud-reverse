/* sub_606AE938
 * address: 0x606AE938   size: 816   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_606AE938(_DWORD *a1)
{
  int v2; // r0
  void *Resource; // r5
  void *Model2; // r6
  int v5; // r7
  ModelWrapper *v6; // r0
  float v7; // s0
  float v8; // s16
  void (__fastcall ***v9)(_DWORD, _DWORD, int *, SolidOnTopColliderInfo *, int *); // r0
  void (__fastcall *v10)(_DWORD, _DWORD, int *, SolidOnTopColliderInfo *, int *); // r7
  ActiveColliderMgr *v11; // r6
  SolidOnTopColliderInfo info; // [sp+18h] [bp-60h] BYREF
  int v14; // [sp+30h] [bp-48h] BYREF
  float v15; // [sp+34h] [bp-44h]
  int v16; // [sp+38h] [bp-40h]
  int v17; // [sp+3Ch] [bp-3Ch]
  int v18; // [sp+40h] [bp-38h]
  int v19; // [sp+44h] [bp-34h]
  int v20; // [sp+48h] [bp-30h]
  int v21; // [sp+4Ch] [bp-2Ch]

  a1[123] = 0;
  a1[124] = -1048576000;
  a1[125] = 1115684864;
  a1[126] = 1134559232;
  v2 = (a1[5] >> 28) & 1;
  a1[162] = v2;
  Resource = (void *)LoadResource(ResourceMgrRelated_instance, &dword_60CBA230[2 * v2 + 1]);
  Model2 = (void *)Resource_getModel2(
                     Resource,
                     (sead__SafeString *)&dword_60CBA230[2 * a1[162] + 5],
                     1,
                     0,
                     0,
                     0,
                     0,
                     0,
                     0);
  v5 = operator_new_8DE25C(0x30u, 0, 4);
  v6 = ModelWrapper_ctor((ModelWrapper *)v5, Model2, 1, 0, 0, 0, 0);
  ModelWrapper_setup(v6, Resource, 0, 0);
  a1[161] = v5;
  SkeletalAnim_play(**(_DWORD **)(v5 + 12), (int)Resource, (const char **)&dword_60CBA230[6 * a1[162] + 19]);
  *(_DWORD *)(**(_DWORD **)(a1[161] + 12) + 24) = 1065353216;
  v7 = (float)(a1[5] & 0xF);
  v8 = v7 * 16.0;
  *((float *)a1 + 318) = (float)((float)((float)((float)(v7 * 16.0) + 30.0) + 26.0) + 2.0) / 152.0;
  v14 = 1065353216;
  v15 = v7 + 4.0;
  v9 = (void (__fastcall ***)(_DWORD, _DWORD, int *, SolidOnTopColliderInfo *, int *))(*(int (__fastcall **)(_DWORD, int))(**(_DWORD **)a1[161] + 132))(
                                                                                        *(_DWORD *)a1[161],
                                                                                        1);
  v10 = **v9;
  info.field_0 = 0.0;
  v10(v9, 0, &v14, &info, &dword_60B3B944);
  info.field_0 = 0.0;
  v14 = -1040187392;
  v15 = -16.0;
  v16 = -1048576000;
  v17 = 0;
  v18 = 1098907648;
  v19 = 0;
  v20 = 1107296256;
  v21 = -1048576000;
  *(float *)&info.field_4 = (float)(v8 + 64.0) + -96.0;
  info.field_8 = 0;
  info.field_C = 0.0;
  info.points = (Vec2 *)&v14;
  info.rotation = 0;
  SolidOnTopCollider_init((SolidOnTopCollider *)(a1 + 164), (StageActor *)a1, &info);
  sub_60160630((ColliderBase *)(a1 + 164), 2);
  ColliderBase_setType((ColliderBase *)(a1 + 164), 24);
  ColliderMgr_add(ColliderMgr_instance, (ColliderBase *)(a1 + 164));
  if ( (a1[5] & 0x10) != 0
    && !sub_603FD6E0(
          dword_60C99DF4,
          FIELD_U8(LevelInfo_instance, 18),
          *((float *)a1 + 27),
          -*((float *)a1 + 28)) )
  {
    *((_BYTE *)a1 + 1248) = 1;
    ActiveCollider__init((ActiveCollider *)(a1 + 47), (StageActor *)a1, (ActiveColliderInfo *)&unk_60C1AD28, 0);
    *((float *)a1 + 77) = v8 + -50.0;
    v11 = ActiveColliderMgr_instance;
    if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 47))
      && !ActiveColliderMgr_isInCreateList(v11, (ActiveCollider *)(a1 + 47)) )
    {
      ActiveColliderMgr_addToCreateList(v11, (ActiveCollider *)(a1 + 47));
    }
  }
  *((float *)a1 + 29) = (float)((float)((a1[5] >> 8) & 7) * -50.0) + -256.0;
  sub_606AEC9C(a1);
  return 1;
}
