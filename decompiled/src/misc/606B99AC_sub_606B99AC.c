/* sub_606B99AC
 * address: 0x606B99AC   size: 1200   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606B99AC(_DWORD *a1, float s0_0)
{
  void *v4; // r5
  void *Model2; // r7
  ModelWrapper *v6; // r6
  ModelWrapper *v7; // r0
  int **v8; // r7
  int v9; // r1
  int v10; // r5
  int v11; // r0
  char *v12; // r9
  int v13; // r5
  int *v14; // r10
  int v15; // r5
  _DWORD *v16; // r10
  int v17; // r0
  int v18; // r5
  int result; // r0
  int v20; // r0
  sead__SafeString a2; // [sp+18h] [bp-38h] BYREF
  int (**v22)(); // [sp+20h] [bp-30h] BYREF
  const char *v23; // [sp+24h] [bp-2Ch]

  v22 = &sead__SafeStringBase__vtable;
  v23 = "obj_tsuru";
  a2.vtable = &sead__SafeStringBase__vtable;
  v4 = (void *)LoadResource(ResourceMgrRelated_instance, &v22);
  a2.cstr = "obj_tsuru";
  Model2 = (void *)Resource_getModel2(v4, &a2, 1, 0, 1, 0, 0, 0, 0);
  v6 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v7 = ModelWrapper_ctor(v6, Model2, 1, 0, 1, 0, 0);
  ModelWrapper_setup(v7, v4, 0, 0);
  a1[1528] = v6;
  v8 = (int **)(a1 + 1528);
  v9 = a1[1532];
  if ( v9 )
  {
    v10 = (int)*FIELD_U32(v6, 0x8).animations;
    v22 = &sead__SafeStringBase__vtable;
    v23 = "obj_tsuru";
    if ( v9 == 1 )
    {
      v11 = LoadResource(ResourceMgrRelated_instance, &v22);
      a2.vtable = &sead__SafeStringBase__vtable;
      v12 = "tsuru_start";
      a2.cstr = "tsuru_start";
    }
    else
    {
      v11 = LoadResource(ResourceMgrRelated_instance, &v22);
      a2.vtable = &sead__SafeStringBase__vtable;
      v12 = "tsuru_end";
      a2.cstr = "tsuru_end";
    }
    SkeletalAnim_play(v10, v11, (const char **)&a2);
    *(_DWORD *)(*(_DWORD *)(*v8)[3] + 24) = 1065353216;
    AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)(*v8)[3] + 4), 0);
    sub_6041838C((ModelAnimation *)(*(_DWORD *)(*v8)[3] + 4));
    v13 = *(_DWORD *)(*v8)[7];
    a1[1529] = v13;
    v14 = a1 + 1529;
    v22 = &sead__SafeStringBase__vtable;
    v23 = "obj_tsuru";
    v20 = LoadResource(ResourceMgrRelated_instance, &v22);
    a2.vtable = &sead__SafeStringBase__vtable;
    a2.cstr = v12;
    sub_60446088(v13, v20, &a2);
    AnimationCtrl_setRepeat((ModelAnimation *)(*v14 + 4), 0);
    result = *v14;
    *(_DWORD *)(*v14 + 24) = 1065353216;
  }
  else
  {
    v15 = (int)*FIELD_U32(v6, 0x18).animations;
    a1[1529] = v15;
    v16 = a1 + 1529;
    v22 = &sead__SafeStringBase__vtable;
    v23 = "obj_tsuru";
    v17 = LoadResource(ResourceMgrRelated_instance, &v22);
    a2.vtable = &sead__SafeStringBase__vtable;
    a2.cstr = "obj_tsuru";
    sub_60446088(v15, v17, &a2);
    AnimationCtrl_setRepeat((ModelAnimation *)(*v16 + 4), 1);
    *(float *)(*v16 + 24) = s0_0;
    v18 = **v8;
    v16[16421] = (*(int (__fastcall **)(int, int *))(*(_DWORD *)v18 + 84))(v18, &dword_60CBA508);
    v16[16422] = (*(int (__fastcall **)(int, void *))(*(_DWORD *)v18 + 84))(v18, &unk_60CBA510);
    v16[16423] = (*(int (__fastcall **)(int, int *))(*(_DWORD *)v18 + 84))(v18, &dword_60CBA518);
    v16[16424] = (*(int (__fastcall **)(int, int *))(*(_DWORD *)v18 + 84))(v18, &dword_60CBA520);
    v16[16425] = (*(int (__fastcall **)(int, int *))(*(_DWORD *)v18 + 84))(v18, &dword_60CBA528);
    v16[16426] = (*(int (__fastcall **)(int, int *))(*(_DWORD *)v18 + 84))(v18, &dword_60CBA530);
    v16[16427] = (*(int (__fastcall **)(int, int *))(*(_DWORD *)v18 + 84))(v18, &dword_60CBA538);
    v16[16428] = (*(int (__fastcall **)(int, int *))(*(_DWORD *)v18 + 84))(v18, &dword_60CBA540);
    v16[16429] = (*(int (__fastcall **)(int, int *))(*(_DWORD *)v18 + 84))(v18, &dword_60CBA548);
    v16[16430] = (*(int (__fastcall **)(int, int *))(*(_DWORD *)v18 + 84))(v18, &dword_60CBA550);
    v16[16431] = (*(int (__fastcall **)(int, int *))(*(_DWORD *)v18 + 84))(v18, &dword_60CBA558);
    v16[16432] = (*(int (__fastcall **)(int, int *))(*(_DWORD *)v18 + 84))(v18, &dword_60CBA560);
    result = (*(int (__fastcall **)(int, int *))(*(_DWORD *)v18 + 84))(v18, &dword_60CBA568);
    v16[16433] = result;
  }
  return result;
}
