/* sub_6019419C
 * address: 0x6019419C   size: 592   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6019419C(int a1)
{
  void *ResArchiveById; // r9
  void *Model; // r6
  ModelWrapper *v4; // r7
  ModelWrapper *v5; // r0
  int v6; // r0
  int v7; // r2
  int v8; // r3
  int v9; // r5
  void *v10; // r6
  char *v11; // r0
  int v12; // r1
  int v13; // r0
  int v14; // r0
  bool v15; // zf
  int v16; // r0
  int v17; // r1
  bool v18; // zf
  _DWORD *v19; // r0
  sead__SafeString identifier; // [sp+1Ch] [bp-2Ch] BYREF
  int v22; // [sp+24h] [bp-24h]

  ResArchiveById = (void *)Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
  identifier.vtable = &sead__SafeStringBase__vtable;
  identifier.cstr = "cobKinokoShuffle";
  Model = (void *)Resource_getModel(ResArchiveById, &identifier, 6, 1, 0, 0, 0, 0, 1, 0);
  v4 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v5 = ModelWrapper_ctor(v4, Model, 1, 0, 0, 0, 0);
  ModelWrapper_setup(v5, (int)ResArchiveById, 0, 0);
  FIELD_U32(a1, 268) = v4;
  v6 = (int)*FIELD_U32(v4, 0x8).animations;
  identifier.vtable = &sead__SafeStringBase__vtable;
  identifier.cstr = "cobKinokoAppear";
  SkeletalAnim_play(v6, (int)ResArchiveById, (int)&identifier);
  sub_60193B54(a1);
  FIELD_U32(a1, 128) = 1065353216;
  FIELD_U32(a1, 132) = 1065353216;
  FIELD_U32(a1, 136) = 1065353216;
  sub_60194404(a1);
  v7 = FIELD_U32(a1, 240);
  if ( v7 == 8 )
  {
    v7 = 8;
    v8 = 0;
  }
  else
  {
    v8 = FIELD_U8(a1, 244);
    v7 = (unsigned __int8)v7;
  }
  sub_60427BC8(dword_60C9BBD4, **(_DWORD **)(a1 + 268), v7, v8);
  FIELD_U32(a1, 212) = 1120403456;
  v9 = dword_60CC6D78;
  v10 = *(void **)(dword_60CC6D78 + 412);
  v11 = *(char **)(dword_60CC6D78 + 416);
  v12 = FIELD_U32(dword_60CC6D78, 420);
  identifier.vtable = v10;
  identifier.cstr = v11;
  v22 = v12;
  v13 = sub_601E028C(&identifier);
  v14 = sub_6019A120(v13);
  v15 = v14 == 4;
  if ( v14 == 4 )
    v15 = (FIELD_U32(v9, 44) & 8) == 0;
  if ( !v15 )
    goto LABEL_20;
  v16 = sub_601E028C(&identifier);
  if ( v10 != *(void **)(a1 + 240) )
    goto LABEL_20;
  v17 = FIELD_U32(a1, 252);
  v18 = v16 == v17;
  if ( v16 == v17 )
    v18 = FIELD_U32(v9, 32) == 2;
  if ( v18 )
  {
    if ( (FIELD_U8(v9, 2092) & 0x10) == 0 )
      sub_601863B8(a1, 36, 0);
  }
  else
  {
LABEL_20:
    if ( sub_601A762C(a1) == 1 )
    {
      AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(FIELD_U32(a1, 268) + 12) + 4), 0);
      v19 = **(_DWORD ***)(FIELD_U32(a1, 268) + 12);
      v19[6] = 0;
      v19[5] = 0;
      v19[7] |= 2u;
      if ( !FIELD_U8(v9, 109055) )
        FIELD_U8(v9, 109056) = 1;
    }
  }
  StateMgr__changeState((StateMgr *)(a1 + 304), (StateBase *)&dword_60C89A74);
  return 1;
}
