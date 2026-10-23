/* killer_rot_houdai_ref
 * address: 0x6030BECC   size: 792   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall killer_rot_houdai_ref(int a1)
{
  signed int result; // r0
  unsigned __int8 *v3; // r1
  unsigned int v4; // r10
  unsigned __int8 *v5; // r4
  void *v6; // r7
  void *Model2; // r5
  ModelWrapper *v8; // r6
  ModelWrapper *v9; // r0
  unsigned int v10; // r0
  void *v11; // r7
  void *v12; // r6
  ModelWrapper *v13; // r5
  ModelWrapper *v14; // r0
  unsigned int v15; // r0
  unsigned int v16; // r0
  _DWORD *v17; // r6
  _DWORD *v18; // t1
  int v19; // r5
  int ResArchiveById; // r0
  unsigned __int8 *v21; // [sp+3Ch] [bp-44h]
  sead__SafeString a2; // [sp+40h] [bp-40h] BYREF
  int (**v23)(); // [sp+48h] [bp-38h] BYREF
  const char *v24; // [sp+4Ch] [bp-34h]

  v3 = (unsigned __int8 *)(a1 + 7605);
  result = FIELD_U8(a1, 7605);
  v21 = v3;
  if ( result )
  {
    v4 = 0;
    v5 = (unsigned __int8 *)(a1 + 7604);
    do
    {
      if ( (*v5 & (unsigned int)(1 << v4)) >> v4 )
      {
        v23 = &sead__SafeStringBase__vtable;
        v24 = "killer_rot_houdai";
        v6 = (void *)LoadResource(ResourceMgrRelated_instance, &v23);
        a2.vtable = &sead__SafeStringBase__vtable;
        a2.cstr = "killer_rot_houdai_b";
        Model2 = (void *)Resource_getModel2(v6, &a2, 1, 0, 0, 0, 0, 0, 0);
        v8 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
        v9 = ModelWrapper_ctor(v8, Model2, 1, 0, 0, 0, 0);
        ModelWrapper_setup(v9, (int)v6, 0, 0);
        v10 = 0;
        if ( v4 < 8 )
          v10 = v4;
        *(_DWORD *)(a1 + 4 * v10 + 6960) = v8;
      }
      else
      {
        v23 = &sead__SafeStringBase__vtable;
        v24 = "killer_rot_houdai";
        v11 = (void *)LoadResource(ResourceMgrRelated_instance, &v23);
        a2.vtable = &sead__SafeStringBase__vtable;
        a2.cstr = "killer_rot_houdai_a";
        v12 = (void *)Resource_getModel2(v11, &a2, 1, 0, 0, 0, 0, 0, 0);
        v13 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
        v14 = ModelWrapper_ctor(v13, v12, 1, 0, 0, 0, 0);
        ModelWrapper_setup(v14, (int)v11, 0, 0);
        v15 = 0;
        if ( v4 < 8 )
          v15 = v4;
        *(_DWORD *)(a1 + 4 * v15 + 6960) = v13;
      }
      if ( !((*v5 & (unsigned int)(1 << v4)) >> v4) )
      {
        v16 = 0;
        if ( v4 < 8 )
          v16 = v4;
        v17 = (_DWORD *)(a1 + 4 * v16);
        v18 = (_DWORD *)v17[1740];
        v17 += 1740;
        (*(void (__fastcall **)(_DWORD, _DWORD, float))(*(_DWORD *)*v18 + 164))(*v18, 0, 1.0);
        v19 = **(_DWORD **)(*v17 + 12);
        ResArchiveById = Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
        v23 = &sead__SafeStringBase__vtable;
        v24 = "shot";
        SkeletalAnim_play(v19, ResArchiveById, (int)&v23);
        AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(*v17 + 12) + 4), 0);
        sub_6041838C((ModelAnimation *)(**(_DWORD **)(*v17 + 12) + 4));
        *(_DWORD *)(**(_DWORD **)(*v17 + 12) + 24) = 0;
      }
      ++v4;
      result = *v21;
    }
    while ( (int)v4 < result );
  }
  return result;
}
