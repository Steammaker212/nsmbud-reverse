/* sub_601A7B10
 * address: 0x601A7B10   size: 356   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601A7B10(int a1)
{
  float v2; // r0
  float v3; // r1
  float v4; // r2
  void *ResArchiveById; // r5
  void *Model; // r6
  ModelWrapper *v7; // r7
  ModelWrapper *v8; // r0
  int v9; // r1
  sead__SafeString identifier; // [sp+18h] [bp-28h] BYREF

  v2 = FIELD_F32(a1, 80);
  FIELD_F32(a1, 416) = v2;
  v3 = FIELD_F32(a1, 84);
  FIELD_F32(a1, 420) = v3;
  v4 = FIELD_F32(a1, 88);
  FIELD_F32(a1, 424) = v4;
  FIELD_F32(a1, 80) = v2 + 400.0;
  FIELD_F32(a1, 84) = v3 + 250.0;
  FIELD_F32(a1, 88) = v4 + -1800.0;
  ResArchiveById = (void *)Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
  FIELD_U32(a1, 272) = ResArchiveById;
  identifier.vtable = &sead__SafeStringBase__vtable;
  identifier.cstr = "kameck";
  Model = (void *)Resource_getModel(ResArchiveById, &identifier, 6, 2, 1, 2, 0, 0, 1, 0);
  v7 = (ModelWrapper *)operator_new_8DE25C(0x48u, 0, 4);
  v8 = sub_60421830(v7, Model, 2, 1, 2, 0, 0);
  j_ModelWrapper_setupModel((int)v8, (int)ResArchiveById, 0, 0);
  FIELD_U32(a1, 268) = v7;
  v9 = FIELD_U32(a1, 272);
  identifier.vtable = &sead__SafeStringBase__vtable;
  identifier.cstr = "fly_csdm";
  sub_60421938(v7, v9, (int)&identifier);
  FIELD_U32(a1, 128) = 0;
  FIELD_U32(a1, 132) = 0;
  FIELD_U32(a1, 136) = 0;
  FIELD_U32(a1, 180) = 0;
  FIELD_U32(a1, 212) = 1112014848;
  sub_601A7C90(a1);
  StateMgr__changeState((StateMgr *)(a1 + 296), (StateBase *)&dword_60C8A294);
  return 1;
}
