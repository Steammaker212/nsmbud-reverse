/* cobPeachGates1st_open_ref
 * address: 0x601AC414   size: 748   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall cobPeachGates1st_open_ref(int a1)
{
  void *ResArchiveById; // r8
  void *Model; // r6
  ModelWrapper *v4; // r7
  ModelWrapper *v5; // r0
  void *v6; // r6
  char *v7; // r1
  int v8; // r0
  int v9; // r0
  int v10; // r0
  int v11; // r0
  void *v12; // r1
  bool v13; // zf
  int v14; // r6
  _DWORD *v15; // r0
  unsigned int v17; // r0
  int v18; // r1
  bool v19; // zf
  int v20; // r0
  int v21; // r1
  _DWORD v22[2]; // [sp+1Ch] [bp-2Ch] BYREF
  sead__SafeString identifier; // [sp+24h] [bp-24h] BYREF
  int v24; // [sp+2Ch] [bp-1Ch]

  ResArchiveById = (void *)Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
  identifier.vtable = &sead__SafeStringBase__vtable;
  identifier.cstr = "cobPeachGates1st";
  Model = (void *)Resource_getModel(ResArchiveById, &identifier, 6, 1, 0, 0, 0, 0, 1, 0);
  v4 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v5 = ModelWrapper_ctor(v4, Model, 1, 0, 0, 0, 0);
  ModelWrapper_setup(v5, (int)ResArchiveById, 0, 0);
  FIELD_U32(a1, 268) = v4;
  sub_601AC72C(a1);
  ModelWrapper_updateAnims(*(ModelWrapper **)(a1 + 268));
  if ( (FIELD_U8(a1, 216) & 8) == 0 )
    ModelWrapper_updateModel(*(ModelWrapper **)(a1 + 268));
  sub_60427BC8(dword_60C9BBD4, **(_DWORD **)(a1 + 268), FIELD_U8(a1, 240), FIELD_U8(a1, 244));
  FIELD_U32(a1, 212) = 1125515264;
  v6 = *(void **)(dword_60CC6D78 + 412);
  v7 = *(char **)(dword_60CC6D78 + 416);
  v8 = FIELD_U32(dword_60CC6D78, 420);
  identifier.vtable = v6;
  identifier.cstr = v7;
  v24 = v8;
  v9 = sub_601E028C(&identifier);
  v10 = sub_6019A120(v9);
  FIELD_U8(a1, 272) = 0;
  if ( v10 == 7 )
  {
    v11 = sub_601E028C(&identifier);
    v12 = *(void **)(a1 + 240);
    v13 = v6 == v12;
    if ( v6 == v12 )
      v13 = v11 == FIELD_U32(a1, 252);
    if ( v13 )
    {
      v17 = sub_601A7618((int *)a1);
      v18 = FIELD_U32(dword_60CC6D78, 32);
      v19 = v18 == 1;
      if ( v18 != 1 )
        v19 = v18 == 5;
      if ( v19 )
      {
        if ( sub_601A762C(a1) != 1 )
          return 1;
        v14 = **(_DWORD **)(FIELD_U32(a1, 268) + 12);
        v22[0] = &sead__SafeStringBase__vtable;
        goto LABEL_11;
      }
      if ( v18 == 2 )
      {
        if ( v17 <= 6 && ((1 << v17) & 0x54) != 0 )
          return 1;
        v20 = a1;
        v21 = 69;
      }
      else if ( v17 <= 9 && ((1 << v17) & 0x30C) != 0 )
      {
        v20 = a1;
        v21 = 72;
      }
      else
      {
        v20 = a1;
        v21 = 71;
      }
      sub_601863B8(v20, v21, 0);
      return 1;
    }
    if ( sub_601A762C(a1) == 1 )
    {
      FIELD_U8(a1, 272) = 1;
      v14 = **(_DWORD **)(FIELD_U32(a1, 268) + 12);
      v22[0] = &sead__SafeStringBase__vtable;
LABEL_11:
      v22[1] = "cobPeachGates1st__open";
      SkeletalAnim_play(v14, (int)ResArchiveById, (int)v22);
      AnimationCtrl_setRepeat((ModelAnimation *)(v14 + 4), 0);
      v15 = **(_DWORD ***)(FIELD_U32(a1, 268) + 12);
      v15[6] = 0;
      v15[5] = v15[2];
      v15[7] |= 2u;
    }
  }
  else if ( sub_601A762C(a1) == 1 )
  {
    FIELD_U8(a1, 272) = 1;
    v14 = **(_DWORD **)(FIELD_U32(a1, 268) + 12);
    v22[0] = &sead__SafeStringBase__vtable;
    goto LABEL_11;
  }
  return 1;
}
