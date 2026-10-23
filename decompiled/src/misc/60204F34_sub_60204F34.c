/* sub_60204F34
 * address: 0x60204F34   size: 1944   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60204F34(int a1)
{
  void *ResArchiveById; // r11
  void *Model; // r6
  ModelWrapper *v4; // r7
  ModelWrapper *v5; // r0
  int v6; // r7
  int (__fastcall *v7)(int, _BYTE *); // r2
  int v8; // r0
  _BYTE *v9; // r6
  int v10; // r1
  int v11; // r0
  int v12; // r0
  int v13; // r7
  bool v14; // zf
  int v15; // r5
  int v16; // r0
  _BYTE *v17; // r1
  bool v18; // zf
  int v19; // r7
  int v20; // r5
  ModelAnimation *v21; // r0
  _DWORD *v22; // r0
  bool v23; // zf
  unsigned int v25; // r0
  int v26; // r1
  bool v27; // zf
  int linkId; // r10
  int v29; // r0
  int v30; // r5
  bool v31; // zf
  _BYTE *v32; // r9
  _BYTE *v33; // r5
  _BYTE *v34; // r0
  int v35; // r1
  int v36; // r0
  _BYTE *v37; // r0
  _BYTE identifier[80]; // [sp+18h] [bp-B0h] BYREF
  ActorBuildInfo buildInfo; // [sp+68h] [bp-60h] BYREF
  _DWORD v40[12]; // [sp+98h] [bp-30h] BYREF

  ResArchiveById = (void *)Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
  *(_DWORD *)identifier = &sead__SafeStringBase__vtable;
  *(_DWORD *)&identifier[4] = "cobToride";
  Model = (void *)Resource_getModel(ResArchiveById, (sead__SafeString *)identifier, 6, 1, 0, 0, 0, 0, 1, 0);
  v4 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v5 = ModelWrapper_ctor(v4, Model, 1, 0, 0, 0, 0);
  ModelWrapper_setup(v5, (int)ResArchiveById, 0, 0);
  FIELD_U32(a1, 268) = v4;
  sub_60205728(a1);
  ModelWrapper_updateAnims(*(ModelWrapper **)(a1 + 268));
  if ( (FIELD_U8(a1, 216) & 8) == 0 )
    ModelWrapper_updateModel(*(ModelWrapper **)(a1 + 268));
  sub_60427BC8(dword_60C9BBD4, **(_DWORD **)(a1 + 268), FIELD_U8(a1, 240), FIELD_U8(a1, 244));
  v6 = **(_DWORD **)(a1 + 268);
  v7 = *(int (__fastcall **)(int, _BYTE *))(*(_DWORD *)v6 + 84);
  *(_DWORD *)identifier = &sead__SafeStringBase__vtable;
  *(_DWORD *)&identifier[4] = "Koopa";
  v8 = v7(v6, identifier);
  (*(void (__fastcall **)(int, int, _BYTE *))(*(_DWORD *)v6 + 108))(v6, v8, identifier);
  FIELD_U32(a1, 272) = *(_DWORD *)&identifier[12];
  FIELD_U32(a1, 276) = *(_DWORD *)&identifier[28];
  FIELD_U32(a1, 280) = *(_DWORD *)&identifier[44];
  FIELD_U32(a1, 212) = 1125515264;
  v9 = *(_BYTE **)(dword_60CC6D78 + 412);
  v10 = FIELD_U32(dword_60CC6D78, 416);
  v11 = FIELD_U32(dword_60CC6D78, 420);
  v40[0] = v9;
  v40[1] = v10;
  v40[2] = v11;
  v12 = sub_601E028C((int)v40);
  v13 = sub_6019A120(v12);
  memset(&buildInfo, 0, sizeof(buildInfo));
  FIELD_U8(a1, 284) = 0;
  v14 = v13 == 2;
  if ( v13 == 2 )
    v14 = (FIELD_U32(dword_60CC6D78, 44) & 8) == 0;
  if ( v14 )
  {
    v15 = FIELD_U8(dword_60C8C188, 3231);
    v16 = sub_601E028C((int)v40);
    v17 = *(_BYTE **)(a1 + 240);
    v18 = v9 == v17;
    if ( v9 == v17 )
      v18 = v16 == FIELD_U32(a1, 252);
    if ( v18 )
    {
      v25 = sub_601A7618((int *)a1);
      v26 = FIELD_U32(dword_60CC6D78, 32);
      v27 = v26 == 1;
      if ( v26 != 1 )
        v27 = v26 == 5;
      if ( v27 )
      {
        LOBYTE(v19) = sub_601A762C(a1) ^ 1;
        v20 = 0;
        if ( sub_601A763C(a1) )
          goto LABEL_12;
        goto LABEL_15;
      }
      if ( v26 != 2 )
      {
        if ( v25 <= 9 && ((1 << v25) & 0x30C) != 0 )
        {
          LOBYTE(v19) = 0;
          if ( sub_601A763C(a1) == 1 )
          {
            buildInfo.linkId = 2;
            sub_601863B8(a1, 13, 0);
            v20 = 1;
          }
          else
          {
            buildInfo.linkId = 0;
            sub_601863B8(a1, 10, 0);
            v20 = 0;
          }
          goto LABEL_15;
        }
        v30 = FIELD_U32(a1, 252);
        if ( v30 != 21 )
        {
          v9 = identifier;
          memset(identifier, 0, 44);
          LOBYTE(v19) = 2;
          identifier[34] = FIELD_U32(a1, 240);
          identifier[33] = v30;
          identifier[32] = FIELD_U32(a1, 244);
          identifier[36] = FIELD_U32(a1, 248);
          identifier[37] = 2;
          *(_DWORD *)&identifier[16] = FIELD_U32(a1, 272);
          *(_DWORD *)&identifier[20] = FIELD_U32(a1, 276);
          *(_DWORD *)&identifier[24] = FIELD_U32(a1, 280);
          *(_DWORD *)&identifier[12] = Profile__get(0x375u);
          v20 = 0;
          v37 = ActorMgr__create((void *)ActorMgr__instance, (ActorBuildInfo *)identifier, 0);
          sub_6018642C(a1, 10, FIELD_U32(a1, 8), *((_DWORD *)v37 + 2));
          goto LABEL_15;
        }
        v20 = 0;
        sub_601863B8(a1, 10, 0);
LABEL_14:
        LOBYTE(v19) = 1;
        goto LABEL_15;
      }
      v19 = 3;
      linkId = 0;
      switch ( v25 )
      {
        case 2u:
          goto LABEL_41;
        case 3u:
          v29 = sub_601A764C(a1);
          goto LABEL_42;
        case 4u:
        case 5u:
        case 6u:
        case 7u:
          goto LABEL_48;
        case 8u:
          if ( !v15 )
            goto LABEL_45;
LABEL_41:
          v29 = sub_601A765C(a1);
LABEL_42:
          v19 = 3;
          v31 = v29 == 0;
          linkId = 1;
          if ( v29 )
            v19 = 0;
          break;
        default:
LABEL_45:
          linkId = sub_601A763C(a1);
          v19 = 0;
          v31 = linkId == 0;
          break;
      }
      if ( !v31 )
        linkId = 2;
LABEL_48:
      v14 = v15 == 0;
      v32 = 0;
      v33 = 0;
      buildInfo.linkId = linkId;
      if ( !v14 )
        v19 = 0;
      if ( v19 == 3 )
      {
        memset(identifier, 0, 44);
        identifier[34] = FIELD_U32(a1, 240);
        identifier[33] = FIELD_U32(a1, 252);
        identifier[32] = FIELD_U32(a1, 244);
        identifier[36] = FIELD_U32(a1, 248);
        identifier[37] = 3;
        *(_DWORD *)&identifier[16] = FIELD_U32(a1, 272);
        *(_DWORD *)&identifier[20] = FIELD_U32(a1, 276);
        *(_DWORD *)&identifier[24] = FIELD_U32(a1, 280);
        *(_DWORD *)&identifier[12] = Profile__get(0x375u);
        LOBYTE(v19) = 0;
        v34 = ActorMgr__create((void *)ActorMgr__instance, (ActorBuildInfo *)identifier, 0);
        linkId = (unsigned __int8)buildInfo.linkId;
        v33 = v34;
      }
      *(_DWORD *)identifier = 0;
      memset(&identifier[8], 0, 72);
      sub_601905DC(identifier);
      if ( linkId )
      {
        LOBYTE(v19) = 0;
        buildInfo.eventId2 = FIELD_U32(a1, 240);
        buildInfo.eventId1 = FIELD_U32(a1, 252);
        buildInfo.field_20 = FIELD_U32(a1, 244);
        buildInfo.movementId = FIELD_U32(a1, 248);
        buildInfo.field_1C = 0;
        buildInfo.position = *(Vec3 *)(a1 + 272);
        buildInfo.profile = Profile__get(0x370u);
        v32 = ActorMgr__create((void *)ActorMgr__instance, &buildInfo, 0);
        v35 = 18;
      }
      else
      {
        v35 = 17;
      }
      *(_DWORD *)identifier = v35;
      *(_DWORD *)&identifier[4] = sub_601916C8(dword_60C8996C, v35);
      *(_DWORD *)&identifier[8] = FIELD_U32(a1, 8);
      if ( v32 )
        *(_DWORD *)&identifier[12] = *((_DWORD *)v32 + 2);
      if ( v33 )
      {
        *(_DWORD *)&identifier[16] = *((_DWORD *)v33 + 2);
        if ( *(_DWORD *)identifier == 18 )
        {
          v36 = 20;
          goto LABEL_62;
        }
        if ( *(_DWORD *)identifier == 17 )
        {
          v36 = 19;
LABEL_62:
          *(_DWORD *)identifier = v36;
        }
      }
      sub_60191160((_DWORD *)dword_60C8996C, identifier);
      sub_601E89F8();
      v20 = 0;
      goto LABEL_15;
    }
  }
  if ( sub_601A762C(a1) != 1 )
  {
    v20 = 0;
    goto LABEL_14;
  }
  LOBYTE(v19) = 0;
  v20 = 0;
  if ( sub_601A763C(a1) )
  {
LABEL_12:
    v20 = 1;
    FIELD_U8(a1, 284) = 1;
    goto LABEL_16;
  }
LABEL_15:
  if ( FIELD_U8(a1, 284) )
  {
LABEL_16:
    v9 = **(_BYTE ***)(FIELD_U32(a1, 268) + 12);
    *(_DWORD *)identifier = &sead__SafeStringBase__vtable;
    *(_DWORD *)&identifier[4] = "cobTorideOpen";
    SkeletalAnim_play((int)v9, (int)ResArchiveById, (int)identifier);
    v21 = (ModelAnimation *)(v9 + 4);
    LOBYTE(v9) = 0;
    AnimationCtrl_setRepeat(v21, 0);
    v22 = **(_DWORD ***)(FIELD_U32(a1, 268) + 12);
    v22[6] = 0;
    v22[5] = v22[2];
    v22[7] |= 2u;
    if ( !v20 )
      goto LABEL_20;
LABEL_19:
    memset(identifier, 0, 44);
    identifier[34] = FIELD_U32(a1, 240);
    identifier[33] = FIELD_U32(a1, 252);
    identifier[32] = FIELD_U32(a1, 244);
    identifier[36] = FIELD_U32(a1, 248);
    *(_DWORD *)&identifier[28] = 0;
    identifier[37] = 2;
    *(_DWORD *)&identifier[16] = FIELD_U32(a1, 272);
    *(_DWORD *)&identifier[20] = FIELD_U32(a1, 276);
    *(_DWORD *)&identifier[24] = FIELD_U32(a1, 280);
    *(_DWORD *)&identifier[12] = Profile__get(0x370u);
    sub_600080BC((_DWORD *)ActorMgr__instance, identifier);
    return 1;
  }
  if ( v20 == 1 )
    goto LABEL_19;
LABEL_20:
  v23 = (unsigned __int8)v19 == 0;
  if ( (_BYTE)v19 )
  {
    v9 = *(_BYTE **)(a1 + 252);
    v23 = v9 == (_BYTE *)21;
  }
  if ( !v23 )
  {
    memset(identifier, 0, 44);
    identifier[34] = FIELD_U32(a1, 240);
    identifier[33] = (_BYTE)v9;
    identifier[32] = FIELD_U32(a1, 244);
    identifier[36] = FIELD_U32(a1, 248);
    identifier[37] = v19;
    *(_DWORD *)&identifier[16] = FIELD_U32(a1, 272);
    *(_DWORD *)&identifier[20] = FIELD_U32(a1, 276);
    *(_DWORD *)&identifier[24] = FIELD_U32(a1, 280);
    *(_DWORD *)&identifier[12] = Profile__get(0x375u);
    ActorMgr__create((void *)ActorMgr__instance, (ActorBuildInfo *)identifier, 0);
  }
  return 1;
}
