/* Item_loadKinokoSwitch_46DD80
 * address: 0x6046DD80   size: 472   group: items
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall Item_loadKinokoSwitch_46DD80(int a1)
{
  _DWORD *v2; // r4
  void *Resource; // r5
  void *Model2; // r6
  ModelWrapper *v5; // r7
  ModelWrapper *v6; // r0
  int v7; // r5
  int v8; // r0
  int *v9; // r0
  int v10; // r5
  int *v11; // r8
  int v12; // r0
  int v13; // r0
  _DWORD v15[2]; // [sp+14h] [bp-34h] BYREF
  _DWORD v16[11]; // [sp+1Ch] [bp-2Ch] BYREF

  v2 = (_DWORD *)(a1 + 6140);
  Resource = (void *)LoadResource(ResourceMgrRelated_instance, (_DWORD *)&unk_60C9D720 + 2 * FIELD_U32(a1, 6140));
  Model2 = (void *)Resource_getModel2(Resource, (sead__SafeString *)&unk_60C9D720 + *v2 + 7, 1, 1, 0, 0, 0, 0, 0);
  v5 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v6 = ModelWrapper_ctor(v5, Model2, 1, 1, 0, 0, 0);
  ModelWrapper_setup(v6, Resource, 0, 0);
  *(v2 - 10) = v5;
  v7 = (int)*FIELD_U32(v5, 0xC);
  v8 = LoadResource(ResourceMgrRelated_instance, (_DWORD *)&unk_60C9D720 + 2 * *v2);
  SkeletalAnim_play(v7, v8, (const char **)&dword_60C9D790[2 * *v2]);
  *(_DWORD *)(**(_DWORD **)(*(v2 - 10) + 12) + 24) = 1065353216;
  AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(*(v2 - 10) + 12) + 4), 1);
  sub_6041838C((ModelAnimation *)(**(_DWORD **)(*(v2 - 10) + 12) + 4));
  if ( *v2 == 6 )
  {
    v9 = *(int **)(*(v2 - 10) + 20);
    v10 = *v9;
    FIELD_U32(a1, 6104) = *v9;
    v11 = (int *)(a1 + 6104);
    v16[0] = &sead__SafeStringBase__vtable;
    v16[1] = "I_kinoko";
    v12 = LoadResource(ResourceMgrRelated_instance, v16);
    v15[0] = &sead__SafeStringBase__vtable;
    v15[1] = "I_kinoko_switch";
    TexAnim_play(v10, v12, v15);
    AnimationCtrl_setRepeat((ModelAnimation *)(*v11 + 4), 0);
    v13 = *v11;
    FIELD_U32(v13, 20) = 0x40000000;
    FIELD_U32(v13, 28) |= 2u;
    *(_DWORD *)(*v11 + 24) = 0;
  }
  return 1;
}
