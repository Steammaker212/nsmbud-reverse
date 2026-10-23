/* cobPeachGates2nd_open_ref
 * address: 0x601ACE40   size: 952   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall cobPeachGates2nd_open_ref(int a1)
{
  void *ResArchiveById; // r8
  void *Model; // r6
  ModelWrapper *v4; // r7
  ModelWrapper *v5; // r0
  int v6; // r6
  int v7; // r1
  int v8; // r0
  int v9; // r0
  int v10; // r0
  int v11; // r0
  int v12; // r1
  bool v13; // zf
  char v14; // r12
  unsigned int v15; // r0
  int v16; // r2
  bool v17; // zf
  bool v18; // zf
  int v19; // r0
  int v20; // r1
  int v21; // r6
  _DWORD *v22; // r0
  ActorBuildInfo identifier; // [sp+18h] [bp-60h] BYREF
  Vec3 v25; // [sp+48h] [bp-30h] BYREF
  _DWORD v26[9]; // [sp+54h] [bp-24h] BYREF

  ResArchiveById = (void *)Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
  identifier.settings1 = (int)&sead__SafeStringBase__vtable;
  identifier.settings2 = (int)"cobPeachGates2nd";
  Model = (void *)Resource_getModel(ResArchiveById, (sead__SafeString *)&identifier, 6, 1, 0, 0, 0, 0, 1, 0);
  v4 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v5 = ModelWrapper_ctor(v4, Model, 1, 0, 0, 0, 0);
  ModelWrapper_setup(v5, (int)ResArchiveById, 0, 0);
  FIELD_U32(a1, 268) = v4;
  sub_601AD23C(a1);
  ModelWrapper_updateAnims(*(ModelWrapper **)(a1 + 268));
  if ( (FIELD_U8(a1, 216) & 8) == 0 )
    ModelWrapper_updateModel(*(ModelWrapper **)(a1 + 268));
  sub_60427BC8(dword_60C9BBD4, **(_DWORD **)(a1 + 268), FIELD_U8(a1, 240), FIELD_U8(a1, 244));
  FIELD_U32(a1, 212) = 1125515264;
  v6 = FIELD_U32(dword_60CC6D78, 412);
  v7 = FIELD_U32(dword_60CC6D78, 416);
  v8 = FIELD_U32(dword_60CC6D78, 420);
  v26[0] = v6;
  v26[1] = v7;
  v26[2] = v8;
  v9 = sub_601E028C(v26);
  v10 = sub_6019A120(v9);
  FIELD_U8(a1, 272) = 0;
  if ( v10 == 7 )
  {
    v11 = sub_601E028C(v26);
    v12 = FIELD_U32(a1, 240);
    v13 = v6 == v12;
    if ( v6 == v12 )
      v13 = v11 == FIELD_U32(a1, 252);
    if ( v13 )
    {
      v15 = sub_601A7618((int *)a1);
      v16 = FIELD_U32(dword_60CC6D78, 32);
      v17 = v16 == 1;
      if ( v16 != 1 )
        v17 = v16 == 5;
      if ( !v17 )
      {
        if ( v16 == 2 )
        {
          v18 = v15 == 4;
          if ( v15 != 4 )
            v18 = FIELD_U32(dword_60CC6D78, 452) == 4;
          if ( !v18 )
          {
            if ( (FIELD_U8(dword_60CC6D78, 521) & 1) != 0 )
            {
              sub_601863B8(a1, 69, 0);
              sub_601EAA3C(dword_60C8B144);
            }
            goto LABEL_26;
          }
          v13 = sub_601A763C(a1) == 1;
          v19 = a1;
          if ( v13 )
            v20 = 69;
          else
            v20 = 70;
        }
        else if ( v15 <= 9 && ((1 << v15) & 0x3CC) != 0 && sub_601A763C(a1) == 1 )
        {
          v19 = a1;
          v20 = 72;
        }
        else
        {
          v19 = a1;
          v20 = 71;
        }
        sub_601863B8(v19, v20, 0);
        goto LABEL_26;
      }
    }
  }
  if ( sub_601A763C(a1) )
  {
    FIELD_U8(a1, 272) = 1;
LABEL_27:
    v21 = **(_DWORD **)(FIELD_U32(a1, 268) + 12);
    identifier.settings1 = (int)&sead__SafeStringBase__vtable;
    identifier.settings2 = (int)"cobPeachGates2nd__open";
    SkeletalAnim_play(v21, (int)ResArchiveById, (int)&identifier);
    AnimationCtrl_setRepeat((ModelAnimation *)(v21 + 4), 0);
    v22 = **(_DWORD ***)(FIELD_U32(a1, 268) + 12);
    v22[6] = 0;
    v22[5] = v22[2];
    v22[7] |= 2u;
    goto LABEL_28;
  }
LABEL_26:
  if ( FIELD_U8(a1, 272) )
    goto LABEL_27;
LABEL_28:
  if ( ((unsigned int)&dword_60C8A690 & ~(1612370140 << v14) & 1) == 0 && _cxa_guard_acquire(&dword_60C8A690) )
  {
    dword_60C8A694 = (int)&sead__SafeStringBase__vtable;
    dword_60C8A698 = (int)"cobPeachWindow";
    _cxa_guard_release(&dword_60C8A690);
  }
  sub_601A02B0(dword_60C89E00, &v25, FIELD_U32(a1, 240), FIELD_U32(a1, 244), (int)&dword_60C8A694);
  memset(&identifier, 0, sizeof(identifier));
  identifier.eventId2 = FIELD_U32(a1, 240);
  identifier.eventId1 = FIELD_U32(a1, 252);
  identifier.field_20 = FIELD_U32(a1, 244);
  identifier.movementId = FIELD_U32(a1, 248);
  identifier.position = v25;
  identifier.profile = Profile__get(0x38Bu);
  ActorMgr__create((void *)ActorMgr__instance, &identifier, 0);
  return 1;
}
