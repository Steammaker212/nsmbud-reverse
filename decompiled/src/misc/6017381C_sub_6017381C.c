/* sub_6017381C
 * address: 0x6017381C   size: 2396   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6017381C(int a1)
{
  void *ResArchiveById; // r8
  void *Model; // r6
  ModelWrapper *v4; // r7
  ModelWrapper *v5; // r0
  int v6; // r9
  int v7; // r1
  int v8; // r0
  int v9; // r0
  int v10; // r7
  int v11; // r6
  bool v12; // zf
  int v13; // r1
  char v14; // r12
  int v15; // r6
  int v16; // r9
  char v17; // r7
  int v18; // r11
  _DWORD *v19; // r0
  unsigned int v20; // r3
  char v21; // r5
  bool v22; // zf
  int v23; // r4
  int v24; // r1
  bool v25; // zf
  int v26; // r8
  _BYTE *v27; // r4
  int v28; // r6
  _DWORD *v29; // r0
  int v30; // r0
  int v31; // r1
  int v32; // r6
  _DWORD *v33; // r0
  int v34; // r1
  int v35; // r0
  bool v36; // zf
  int v37; // r0
  void *v38; // r5
  int v39; // r7
  int (__fastcall *v40)(int, _BYTE *); // r2
  int v41; // r0
  int v42; // r5
  unsigned int v43; // r7
  _BYTE *v44; // r5
  int v45; // r0
  int v46; // r1
  int v47; // r0
  int v49; // r0
  int v50; // [sp+1Ch] [bp-C4h]
  int v51; // [sp+20h] [bp-C0h]
  int v52; // [sp+24h] [bp-BCh]
  int v53; // [sp+28h] [bp-B8h]
  unsigned int v54; // [sp+2Ch] [bp-B4h]
  _BYTE identifier[80]; // [sp+30h] [bp-B0h] BYREF
  ActorBuildInfo v56; // [sp+80h] [bp-60h] BYREF
  _DWORD v57[12]; // [sp+B0h] [bp-30h] BYREF

  ResArchiveById = (void *)Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
  *(_DWORD *)identifier = &sead__SafeStringBase__vtable;
  *(_DWORD *)&identifier[4] = "cobCastle";
  Model = (void *)Resource_getModel(ResArchiveById, (sead__SafeString *)identifier, 6, 1, 0, 0, 0, 0, 1, 0);
  v4 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v5 = ModelWrapper_ctor(v4, Model, 1, 0, 0, 0, 0);
  ModelWrapper_setup(v5, (int)ResArchiveById, 0, 0);
  FIELD_U32(a1, 268) = v4;
  sub_60174204(a1);
  ModelWrapper_updateAnims(*(ModelWrapper **)(a1 + 268));
  if ( (FIELD_U8(a1, 216) & 8) == 0 )
    ModelWrapper_updateModel(*(ModelWrapper **)(a1 + 268));
  sub_60427BC8(dword_60C9BBD4, **(_DWORD **)(a1 + 268), FIELD_U8(a1, 240), FIELD_U8(a1, 244));
  FIELD_U32(a1, 212) = 1125515264;
  v7 = FIELD_U32(dword_60CC6D78, 416);
  v8 = FIELD_U32(dword_60CC6D78, 420);
  v57[0] = FIELD_U32(dword_60CC6D78, 412);
  v6 = v57[0];
  v57[1] = v7;
  v57[2] = v8;
  v9 = sub_601E028C(v57);
  v10 = sub_6019A120(v9);
  FIELD_U8(a1, 272) = 0;
  v11 = sub_601E028C(v57);
  v51 = v6;
  v50 = v11;
  v52 = FIELD_U8(dword_60C8C188, 3231);
  if ( v10 != 3 )
    goto LABEL_7;
  v13 = FIELD_U32(dword_60CC6D78, 44) & 8;
  v12 = v13 == 0;
  if ( !v13 )
  {
    v13 = FIELD_U32(a1, 240);
    v12 = v6 == v13;
  }
  if ( !v12 )
    goto LABEL_7;
  if ( v11 == FIELD_U32(a1, 252) )
  {
    if ( v11 != 23 )
    {
      v20 = sub_601A7618(a1, v13);
      v21 = 0;
      goto LABEL_19;
    }
LABEL_18:
    v23 = FIELD_U32(a1, 248);
    FIELD_U32(a1, 248) = FIELD_U32(dword_60CC6D78, 420);
    v20 = sub_601A7618(a1, v13);
    FIELD_U32(a1, 248) = v23;
    v21 = 1;
LABEL_19:
    v24 = FIELD_U32(dword_60CC6D78, 32);
    v54 = v20;
    v25 = v24 == 1;
    if ( v24 != 1 )
      v25 = v24 == 5;
    if ( v25 )
    {
      v18 = sub_601A762C(a1);
      if ( v18 )
        v18 = 2;
      if ( sub_601A763C(a1) == 1 )
      {
        v28 = **(_DWORD **)(FIELD_U32(a1, 268) + 12);
        *(_DWORD *)identifier = &sead__SafeStringBase__vtable;
        *(_DWORD *)&identifier[4] = "cobCastleOpen";
        SkeletalAnim_play(v28, (int)ResArchiveById, (int)identifier);
        v16 = 0;
        AnimationCtrl_setRepeat((ModelAnimation *)(v28 + 4), 0);
        v17 = 2;
        v29 = **(_DWORD ***)(FIELD_U32(a1, 268) + 12);
        v29[6] = 0;
        v29[5] = v29[2];
        v29[7] |= 2u;
        FIELD_U8(a1, 272) = 1;
        goto LABEL_55;
      }
      v53 = 0;
    }
    else
    {
      if ( v24 == 2 )
      {
        if ( v20 - 4 < 4 || v20 == 2 )
        {
          v16 = 1;
          v18 = v52 == 0;
          if ( v20 != 2 )
            goto LABEL_88;
        }
        else if ( v20 != 8 || (v18 = 0, !v52) )
        {
          v16 = 0;
          if ( sub_601A763C(a1) == 1 )
          {
            sub_601863B8(a1, 18, 0);
            v18 = 2;
            v17 = 2;
LABEL_44:
            sub_601E89F8(dword_60C8B144);
            goto LABEL_55;
          }
          sub_601863B8(a1, 17, 0);
          v18 = 2;
LABEL_88:
          sub_601E89F8(dword_60C8B144);
          v53 = 0;
          goto LABEL_31;
        }
        v16 = 1;
        v17 = 1;
        if ( v52 )
          v18 = 2;
        goto LABEL_44;
      }
      if ( v20 <= 9 && (v24 = 1, ((1 << v20) & 0x304) != 0) )
      {
        v30 = sub_601A763C(a1);
        v31 = (unsigned __int8)v21 & (v6 == FIELD_U32(a1, 240));
        if ( v30 == 1 )
        {
          if ( v31 == 1 )
          {
            v32 = **(_DWORD **)(FIELD_U32(a1, 268) + 12);
            *(_DWORD *)identifier = &sead__SafeStringBase__vtable;
            *(_DWORD *)&identifier[4] = "cobCastleOpen";
            SkeletalAnim_play(v32, (int)ResArchiveById, (int)identifier);
            v16 = 0;
            AnimationCtrl_setRepeat((ModelAnimation *)(v32 + 4), 0);
            v33 = **(_DWORD ***)(FIELD_U32(a1, 268) + 12);
            v33[6] = 0;
            v33[5] = v33[2];
            v33[7] |= 2u;
            v34 = 21;
            FIELD_U8(a1, 272) = 1;
            v35 = a1;
          }
          else
          {
            v16 = 0;
            v35 = a1;
            v34 = 13;
          }
          sub_601863B8(v35, v34, 0);
          v17 = 2;
          v18 = 2;
          goto LABEL_55;
        }
        v36 = v31 == 1;
        if ( v31 == 1 )
          v31 = 21;
        v53 = 0;
        if ( !v36 )
          v31 = 11;
        sub_601863B8(a1, v31, 0);
        v18 = 2;
      }
      else
      {
        if ( FIELD_U8(dword_60CC6D78, 510) )
        {
          v37 = 0;
          v16 = 1;
          v18 = 0;
          v26 = 1;
          v27 = 0;
LABEL_56:
          v53 = v37;
          goto LABEL_57;
        }
        v49 = FIELD_U32(a1, 240);
        if ( ((unsigned __int8)v21 & (v6 == v49)) == 1 )
          v24 = 21;
        v53 = 0;
        if ( ((unsigned __int8)v21 & (v6 == v49)) != 1 )
          v24 = 11;
        sub_601863B8(a1, v24, 0);
        v18 = 0;
      }
    }
    v16 = 0;
    goto LABEL_31;
  }
  v22 = v11 == 23;
  if ( v11 == 23 )
    v22 = v6 == v13;
  if ( v22 )
    goto LABEL_18;
LABEL_7:
  if ( sub_601A762C(a1) == 1 )
  {
    if ( sub_601A763C(a1) == 1 )
    {
      v15 = **(_DWORD **)(FIELD_U32(a1, 268) + 12);
      *(_DWORD *)identifier = &sead__SafeStringBase__vtable;
      *(_DWORD *)&identifier[4] = "cobCastleOpen";
      SkeletalAnim_play(v15, (int)ResArchiveById, (int)identifier);
      v16 = 0;
      AnimationCtrl_setRepeat((ModelAnimation *)(v15 + 4), 0);
      v17 = 2;
      v18 = 2;
      v19 = **(_DWORD ***)(FIELD_U32(a1, 268) + 12);
      v19[6] = 0;
      v19[5] = v19[2];
      v19[7] |= 2u;
      FIELD_U8(a1, 272) = 1;
      v54 = 0;
LABEL_55:
      v38 = (void *)ActorMgr__instance;
      memset(&v56, 0, sizeof(v56));
      v26 = 0;
      v56.eventId2 = FIELD_U32(a1, 240);
      v56.eventId1 = FIELD_U32(a1, 252);
      v56.field_20 = FIELD_U32(a1, 244);
      v56.movementId = FIELD_U32(a1, 248);
      v56.field_1C = 0;
      v56.linkId = v17;
      v39 = **(_DWORD **)(a1 + 268);
      v40 = *(int (__fastcall **)(int, _BYTE *))(*(_DWORD *)v39 + 84);
      *(_DWORD *)identifier = &sead__SafeStringBase__vtable;
      *(_DWORD *)&identifier[4] = "Koopa";
      v41 = v40(v39, identifier);
      (*(void (__fastcall **)(int, int, _BYTE *))(*(_DWORD *)v39 + 108))(v39, v41, identifier);
      v56.position.x = *(float *)&identifier[12];
      v56.position.y = *(float *)&identifier[28];
      v56.position.z = *(float *)&identifier[44];
      v56.profile = Profile__get(0x370u);
      v27 = ActorMgr__create(v38, &v56, 0);
      v37 = 1;
      goto LABEL_56;
    }
    v18 = 2;
    v16 = 0;
  }
  else
  {
    v16 = 1;
    v18 = 0;
  }
  v53 = 0;
  v54 = 0;
LABEL_31:
  v26 = 0;
  v27 = 0;
LABEL_57:
  if ( ((unsigned int)&unk_60C88C00 & ~(1612136032 << v14) & 1) == 0 && _cxa_guard_acquire((__guard *)&unk_60C88C00) )
  {
    dword_60C88C04 = 871;
    dword_60C88C08 = 872;
    dword_60C88C0C = 873;
    dword_60C88C10 = 874;
    dword_60C88C14 = 875;
    dword_60C88C18 = 876;
    dword_60C88C1C = 877;
    _cxa_guard_release((__guard *)&unk_60C88C00);
  }
  v42 = FIELD_U32(a1, 240);
  v43 = *((_DWORD *)&unk_60C88C00 + v42 + 1);
  memset(identifier, 0, 44);
  identifier[34] = v42;
  v44 = 0;
  identifier[32] = FIELD_U32(a1, 244);
  *(_DWORD *)&identifier[28] = 0x40000000;
  *(_DWORD *)&identifier[16] = FIELD_U32(a1, 80);
  *(_DWORD *)&identifier[20] = FIELD_U32(a1, 84);
  *(_DWORD *)&identifier[24] = FIELD_U32(a1, 88);
  if ( !FIELD_U8(dword_60CC6D78, 28) )
  {
    *(_DWORD *)identifier = v18;
    *(_DWORD *)&identifier[12] = Profile__get(v43);
    v44 = ActorMgr__create((void *)ActorMgr__instance, (ActorBuildInfo *)identifier, 0);
    sub_601A480C(
      dword_60C89E18,
      FIELD_U32(a1, 240),
      1,
      FIELD_F32(a1, 80),
      FIELD_F32(a1, 84),
      FIELD_F32(a1, 88));
  }
  if ( v16 == 1 )
  {
    if ( (unsigned int)(v18 - 1) <= 1 )
    {
      *(_DWORD *)identifier = 0;
      memset(&identifier[8], 0, 72);
      sub_601905DC(identifier);
      if ( v54 == 2 )
      {
        v45 = 14;
        if ( v52 )
          v45 = 16;
      }
      else if ( v54 == 8 )
      {
        v45 = 16;
        if ( !v52 )
          v45 = 16;
      }
      else
      {
        v45 = 15;
        if ( (v54 | 1) != 5 )
          v45 = 16;
      }
      *(_DWORD *)identifier = v45;
      *(_DWORD *)&identifier[4] = sub_601916C8(dword_60C8996C);
      *(_DWORD *)&identifier[8] = FIELD_U32(a1, 8);
      if ( v53 == 1 )
        *(_DWORD *)&identifier[12] = *((_DWORD *)v27 + 2);
      if ( v18 == 1 )
        *(_DWORD *)&identifier[16] = *((_DWORD *)v44 + 2);
      v47 = dword_60C8996C;
LABEL_85:
      sub_60191160(v47, identifier);
      return 1;
    }
    if ( v26 == 1 )
    {
      *(_DWORD *)identifier = 0;
      memset(&identifier[8], 0, 72);
      sub_601905DC(identifier);
      v46 = 12;
      if ( v51 == FIELD_U32(a1, 240) )
        v46 = 22;
      if ( v50 != 23 )
        v46 = 12;
      *(_DWORD *)identifier = v46;
      *(_DWORD *)&identifier[4] = sub_601916C8(dword_60C8996C);
      *(_DWORD *)&identifier[8] = FIELD_U32(a1, 8);
      *(_DWORD *)&identifier[16] = *((_DWORD *)v44 + 2);
      v47 = dword_60C8996C;
      goto LABEL_85;
    }
  }
  return 1;
}
