/* sub_60194E54
 * address: 0x60194E54   size: 496   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_60194E54(int a1)
{
  void *ResArchiveById; // r5
  void *Model; // r6
  ModelWrapper *v4; // r7
  ModelWrapper *v5; // r0
  int v6; // r0
  int v7; // r5
  void *v8; // r4
  char *v9; // r0
  int v10; // r1
  int v11; // r0
  int v12; // r0
  bool v13; // zf
  int v14; // r0
  int v15; // r1
  bool v16; // zf
  _DWORD *v17; // r0
  sead__SafeString identifier; // [sp+1Ch] [bp-2Ch] BYREF
  int v20; // [sp+24h] [bp-24h]

  ResArchiveById = (void *)Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
  identifier.vtable = &sead__SafeStringBase__vtable;
  identifier.cstr = "cobKinokoSlot";
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
  FIELD_U32(a1, 212) = 1120403456;
  v7 = dword_60CC6D78;
  v8 = *(void **)(dword_60CC6D78 + 412);
  v9 = *(char **)(dword_60CC6D78 + 416);
  v10 = FIELD_U32(dword_60CC6D78, 420);
  identifier.vtable = v8;
  identifier.cstr = v9;
  v20 = v10;
  v11 = sub_601E028C(&identifier);
  v12 = sub_6019A120(v11);
  v13 = v12 == 4;
  if ( v12 == 4 )
    v13 = (FIELD_U32(v7, 44) & 8) == 0;
  if ( !v13 )
    goto LABEL_17;
  v14 = sub_601E028C(&identifier);
  if ( v8 != *(void **)(a1 + 240) )
    goto LABEL_17;
  v15 = FIELD_U32(a1, 252);
  v16 = v14 == v15;
  if ( v14 == v15 )
    v16 = FIELD_U32(v7, 32) == 2;
  if ( v16 )
  {
    if ( (FIELD_U8(v7, 2092) & 0x10) == 0 )
      sub_601863B8(a1, 36, 0);
  }
  else
  {
LABEL_17:
    if ( sub_601A762C(a1) == 1 )
    {
      AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(FIELD_U32(a1, 268) + 12) + 4), 0);
      v17 = **(_DWORD ***)(FIELD_U32(a1, 268) + 12);
      v17[6] = 0;
      v17[5] = 0;
      v17[7] |= 2u;
      if ( !FIELD_U8(v7, 109055) )
        FIELD_U8(v7, 109056) = 1;
    }
  }
  return 1;
}
