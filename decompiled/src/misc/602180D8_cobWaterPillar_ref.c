/* cobWaterPillar_ref
 * address: 0x602180D8   size: 416   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall cobWaterPillar_ref(int a1)
{
  void *ResArchiveById; // r9
  void *Model; // r6
  ModelWrapper *v4; // r7
  ModelWrapper *v5; // r0
  int v6; // r0
  int (__fastcall *v7)(int, _DWORD *); // r2
  _DWORD v9[2]; // [sp+18h] [bp-58h] BYREF
  sead__SafeString identifier; // [sp+20h] [bp-50h] BYREF
  int v11; // [sp+28h] [bp-48h]
  int v12; // [sp+2Ch] [bp-44h]
  int v13; // [sp+30h] [bp-40h]
  int v14; // [sp+34h] [bp-3Ch]
  int v15; // [sp+38h] [bp-38h]
  int v16; // [sp+3Ch] [bp-34h]
  int v17; // [sp+40h] [bp-30h]
  int v18; // [sp+44h] [bp-2Ch]
  int v19; // [sp+48h] [bp-28h]
  int v20; // [sp+4Ch] [bp-24h]

  ResArchiveById = (void *)Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
  identifier.vtable = &sead__SafeStringBase__vtable;
  identifier.cstr = "cobWaterPillar";
  Model = (void *)Resource_getModel(ResArchiveById, &identifier, 6, 1, 0, 1, 0, 0, 1, 0);
  v4 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v5 = ModelWrapper_ctor(v4, Model, 1, 0, 1, 0, 0);
  ModelWrapper_setup(v5, (int)ResArchiveById, 0, 0);
  FIELD_U32(a1, 304) = v4;
  sub_60427BC8(dword_60C9BBD4, FIELD_U32(v4, 0x0), FIELD_U8(a1, 240), FIELD_U8(a1, 244));
  identifier.vtable = (void *)1065353216;
  identifier.cstr = 0;
  v11 = 0;
  v13 = 0;
  v14 = 1065353216;
  v15 = 0;
  v17 = 0;
  v18 = 0;
  v19 = 1065353216;
  v12 = FIELD_U32(a1, 80);
  v16 = FIELD_U32(a1, 84);
  v20 = FIELD_U32(a1, 88);
  (*(void (__fastcall **)(_DWORD, sead__SafeString *))(***(_DWORD ***)(a1 + 304) + 60))(
    **(_DWORD **)(a1 + 304),
    &identifier);
  (*(void (__fastcall **)(_DWORD))(***(_DWORD ***)(a1 + 304) + 52))(**(_DWORD **)(a1 + 304));
  (*(void (__fastcall **)(_DWORD))(***(_DWORD ***)(a1 + 304) + 56))(**(_DWORD **)(a1 + 304));
  v6 = **(_DWORD **)(a1 + 304);
  v7 = *(int (__fastcall **)(int, _DWORD *))(*(_DWORD *)v6 + 84);
  v9[0] = &sead__SafeStringBase__vtable;
  v9[1] = &unk_60AC20CF;
  FIELD_U32(a1, 320) = v7(v6, v9);
  StateMgr__changeState((StateMgr *)(a1 + 288), (StateBase *)&dword_60C8D320);
  FIELD_U32(a1, 212) = 1135542272;
  return 1;
}
