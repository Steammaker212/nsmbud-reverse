/* cobGhost_ref
 * address: 0x60192B80   size: 1040   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall cobGhost_ref(int a1)
{
  void *ResArchiveById; // r8
  void *Model; // r6
  ModelWrapper *v4; // r7
  ModelWrapper *v5; // r0
  int v6; // r6
  int v7; // r1
  int v8; // r0
  int v9; // r0
  int v10; // r5
  int v11; // r0
  int v12; // r1
  bool v13; // zf
  int v14; // r6
  unsigned int v15; // r0
  int v16; // r1
  bool v17; // zf
  bool v18; // zf
  int v19; // r6
  _DWORD *v20; // r0
  int v21; // r5
  int v22; // r6
  _DWORD *v23; // r0
  _BYTE *v24; // r0
  int v25; // r3
  int v26; // r2
  int v27; // r0
  int v28; // r1
  ActorBuildInfo identifier; // [sp+18h] [bp-50h] BYREF
  _DWORD v31[9]; // [sp+44h] [bp-24h] BYREF

  ResArchiveById = (void *)Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
  identifier.settings1 = (int)&sead__SafeStringBase__vtable;
  identifier.settings2 = (int)"cobGhost";
  Model = (void *)Resource_getModel(ResArchiveById, (sead__SafeString *)&identifier, 6, 1, 0, 0, 0, 0, 1, 0);
  v4 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v5 = ModelWrapper_ctor(v4, Model, 1, 0, 0, 0, 0);
  ModelWrapper_setup(v5, (int)ResArchiveById, 0, 0);
  FIELD_U32(a1, 268) = v4;
  sub_60192FB8(a1);
  ModelWrapper_updateAnims(*(ModelWrapper **)(a1 + 268));
  if ( (FIELD_U8(a1, 216) & 8) == 0 )
    ModelWrapper_updateModel(*(ModelWrapper **)(a1 + 268));
  sub_60427BC8(dword_60C9BBD4, **(_DWORD **)(a1 + 268), FIELD_U8(a1, 240), FIELD_U8(a1, 244));
  FIELD_U32(a1, 212) = 1125515264;
  v6 = FIELD_U32(dword_60CC6D78, 412);
  v7 = FIELD_U32(dword_60CC6D78, 416);
  v8 = FIELD_U32(dword_60CC6D78, 420);
  v31[0] = v6;
  v31[1] = v7;
  v31[2] = v8;
  FIELD_U8(a1, 273) = 0;
  v9 = sub_601E028C(v31);
  if ( sub_6019A120(v9) != 1 )
    goto LABEL_7;
  v10 = FIELD_U8(dword_60C8C188, 3231);
  v11 = sub_601E028C(v31);
  v12 = FIELD_U32(a1, 240);
  v13 = v6 == v12;
  if ( v6 == v12 )
  {
    v12 = FIELD_U32(a1, 252);
    v13 = v11 == v12;
  }
  if ( !v13 )
  {
LABEL_7:
    v14 = 0;
    if ( sub_601A762C(a1) == 1 && sub_601A763C(a1) )
      goto LABEL_9;
LABEL_32:
    if ( !FIELD_U8(a1, 273) )
      goto LABEL_34;
    goto LABEL_33;
  }
  v15 = sub_601A7618(a1, v12);
  v16 = FIELD_U32(dword_60CC6D78, 32);
  v17 = v16 == 1;
  if ( v16 != 1 )
    v17 = v16 == 5;
  if ( !v17 )
  {
    if ( v16 != 2 )
    {
      v14 = 1;
      if ( v15 <= 9 )
      {
        v21 = 1;
        if ( ((1 << v15) & 0x30C) != 0 )
        {
          if ( sub_601A763C(a1) )
            v21 = 3;
          v14 = v21;
        }
      }
      goto LABEL_32;
    }
    if ( v15 - 2 < 4 || v15 == 8 && v10 )
    {
      if ( (v15 | 1) == 3 )
        goto LABEL_30;
      v18 = v15 == 8;
      if ( v15 == 8 )
        v18 = v10 != 0;
      if ( v18 )
        goto LABEL_30;
    }
    else if ( sub_601A763C(a1) == 1 )
    {
LABEL_30:
      sub_601863B8(a1, 18, 0);
      v14 = 2;
      goto LABEL_32;
    }
    v14 = 0;
    sub_601863B8(a1, 17, 0);
    goto LABEL_32;
  }
  v14 = 0;
  if ( sub_601A763C(a1) != 1 )
    goto LABEL_32;
  v19 = **(_DWORD **)(FIELD_U32(a1, 268) + 12);
  SkeletalAnim_play(v19, (int)ResArchiveById, (int)&dword_60C899EC);
  AnimationCtrl_setRepeat((ModelAnimation *)(v19 + 4), 0);
  v20 = **(_DWORD ***)(FIELD_U32(a1, 268) + 12);
  v20[6] = 0;
  v20[5] = v20[2];
  v20[7] |= 2u;
LABEL_9:
  FIELD_U8(a1, 273) = 1;
LABEL_33:
  v22 = **(_DWORD **)(FIELD_U32(a1, 268) + 12);
  SkeletalAnim_play(v22, (int)ResArchiveById, (int)&dword_60C899EC);
  AnimationCtrl_setRepeat((ModelAnimation *)(v22 + 4), 0);
  v14 = 2;
  v23 = **(_DWORD ***)(FIELD_U32(a1, 268) + 12);
  v23[6] = 0;
  v23[5] = v23[2];
  v23[7] |= 2u;
LABEL_34:
  memset(&identifier, 0, sizeof(identifier));
  identifier.eventId2 = FIELD_U32(a1, 240);
  identifier.field_20 = FIELD_U32(a1, 244);
  identifier.position = *(Vec3 *)(a1 + 80);
  identifier.movementId = FIELD_U32(a1, 248);
  identifier.linkId = v14;
  identifier.profile = Profile__get(0x373u);
  v24 = ActorMgr__create((void *)ActorMgr__instance, &identifier, 0);
  FIELD_U32(a1, 256) = v24;
  if ( v14 == 3 )
  {
    v25 = *((_DWORD *)v24 + 2);
    v26 = FIELD_U32(a1, 8);
    v27 = a1;
    v28 = 26;
    goto LABEL_38;
  }
  if ( (unsigned __int8)v14 == 1 )
  {
    v25 = *((_DWORD *)v24 + 2);
    v26 = FIELD_U32(a1, 8);
    v27 = a1;
    v28 = 25;
LABEL_38:
    sub_6018642C(v27, v28, v26, v25);
  }
  return 1;
}
