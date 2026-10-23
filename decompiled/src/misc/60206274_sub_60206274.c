/* sub_60206274
 * address: 0x60206274   size: 1104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60206274(int a1)
{
  void *ResArchiveById; // r5
  void *Model; // r6
  ModelWrapper *v4; // r7
  ModelWrapper *v5; // r0
  int v6; // r1
  int v7; // r0
  int (__fastcall *v8)(int, ActorBuildInfo *); // r2
  int v9; // r0
  Profile *v10; // r0
  void *v11; // r5
  void *v12; // r10
  ModelWrapper *v13; // r7
  ModelWrapper *v14; // r0
  int v15; // r0
  int v16; // r1
  void *v17; // r5
  void *v18; // r9
  ModelWrapper *v19; // r0
  int v20; // r0
  _BOOL4 v21; // r1
  int v23; // r0
  ActorBuildInfo identifier; // [sp+18h] [bp-50h] BYREF

  if ( FIELD_U32(a1, 240) == 6 )
  {
    ResArchiveById = (void *)Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
    FIELD_U32(a1, 272) = ResArchiveById;
    identifier.settings1 = (int)&sead__SafeStringBase__vtable;
    identifier.settings2 = (int)"kameck";
    Model = (void *)Resource_getModel(ResArchiveById, (sead__SafeString *)&identifier, 6, 2, 1, 2, 0, 0, 1, 0);
    v4 = (ModelWrapper *)operator_new_8DE25C(0x48u, 0, 4);
    v5 = sub_60421830(v4, Model, 2, 1, 2, 0, 0);
    j_ModelWrapper_setupModel((int)v5, (int)ResArchiveById, 0, 0);
    FIELD_U32(a1, 268) = v4;
    FIELD_U32(a1, 344) = 0x40000000;
    v6 = FIELD_U32(a1, 272);
    identifier.settings1 = (int)&sead__SafeStringBase__vtable;
    identifier.settings2 = (int)"wait";
    sub_60421938(v4, v6, (int)&identifier);
    v7 = **(_DWORD **)(a1 + 268);
    v8 = *(int (__fastcall **)(int, ActorBuildInfo *))(*(_DWORD *)v7 + 84);
    identifier.settings1 = (int)&sead__SafeStringBase__vtable;
    identifier.settings2 = (int)"broom";
    v9 = v8(v7, &identifier);
    (*(void (__fastcall **)(_DWORD, int, _DWORD))(***(_DWORD ***)(a1 + 268) + 112))(**(_DWORD **)(a1 + 268), v9, 0);
  }
  else
  {
    v10 = *(Profile **)(a1 + 12);
    if ( FIELD_U32(a1, 252) == 21 )
    {
      v11 = (void *)Profile__getResArchiveById(v10, 2u);
      FIELD_U32(a1, 272) = v11;
      identifier.settings1 = (int)&sead__SafeStringBase__vtable;
      identifier.settings2 = (int)"boss_KK";
      v12 = (void *)Resource_getModel(v11, (sead__SafeString *)&identifier, 6, 2, 1, 2, 0, 0, 1, 0);
      v13 = (ModelWrapper *)operator_new_8DE25C(0x48u, 0, 4);
      v14 = sub_60421830(v13, v12, 2, 1, 2, 0, 0);
      j_ModelWrapper_setupModel((int)v14, (int)v11, 0, 0);
      v15 = 1082130432;
    }
    else
    {
      v17 = (void *)Profile__getResArchiveById(v10, 1u);
      FIELD_U32(a1, 272) = v17;
      identifier.settings1 = (int)&sead__SafeStringBase__vtable;
      identifier.settings2 = (int)"bunbun";
      v18 = (void *)Resource_getModel(v17, (sead__SafeString *)&identifier, 6, 2, 1, 2, 0, 0, 1, 0);
      v13 = (ModelWrapper *)operator_new_8DE25C(0x48u, 0, 4);
      v19 = sub_60421830(v13, v18, 2, 1, 2, 0, 0);
      j_ModelWrapper_setupModel((int)v19, (int)v17, 0, 0);
      v15 = 1077936128;
    }
    FIELD_U32(a1, 268) = v13;
    FIELD_U32(a1, 344) = v15;
    v16 = FIELD_U32(a1, 272);
    identifier.settings1 = (int)&sead__SafeStringBase__vtable;
    identifier.settings2 = (int)"wait";
    sub_60421938(v13, v16, (int)&identifier);
  }
  if ( FIELD_U8(dword_60CC6D78, 28) )
  {
    if ( !FIELD_U32(a1, 240) )
    {
      memset(&identifier, 0, sizeof(identifier));
      identifier.eventId1 = FIELD_U32(a1, 252);
      identifier.field_20 = FIELD_U32(a1, 244);
      identifier.movementId = FIELD_U32(a1, 248);
      identifier.position = *(Vec3 *)(a1 + 80);
      identifier.profile = Profile__get(0x374u);
      FIELD_U32(a1, 312) = ActorMgr__create((void *)ActorMgr__instance, &identifier, 0);
    }
    FIELD_U8(a1, 365) = 1;
    v20 = **(_DWORD **)(a1 + 268);
    goto LABEL_12;
  }
  v20 = **(_DWORD **)(a1 + 268);
  if ( FIELD_U8(a1, 365) )
  {
LABEL_12:
    v21 = FIELD_U8(a1, 364) == 2;
    goto LABEL_13;
  }
  v21 = 1;
  if ( FIELD_U8(a1, 364) != 2 )
  {
    FIELD_U32(v20, 348) &= ~4u;
    v23 = FIELD_U32(a1, 344);
    FIELD_U32(a1, 128) = v23;
    FIELD_U32(a1, 132) = v23;
    FIELD_U32(a1, 136) = v23;
    goto LABEL_15;
  }
LABEL_13:
  FIELD_F32(a1, 84) = FIELD_F32(a1, 84) + -100.0;
  FIELD_U32(a1, 128) = 0;
  FIELD_U32(a1, 132) = 0;
  FIELD_U32(a1, 136) = 0;
  if ( v21 )
    FIELD_U32(v20, 348) &= ~4u;
LABEL_15:
  FIELD_U32(a1, 180) = 0;
  FIELD_U32(a1, 212) = 1112014848;
  sub_60206700(a1);
  StateMgr__changeState((StateMgr *)(a1 + 296), (StateBase *)&dword_60C8C678);
  return 1;
}
