/* sub_601F3140
 * address: 0x601F3140   size: 616   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601F3140(StateMgr *a1)
{
  StateMgr *v2; // r8
  StateBase *v3; // r7
  void *Model; // r9
  ModelWrapper *v5; // r5
  ModelWrapper *v6; // r0
  StateBase *v7; // r5
  void *v8; // r8
  ModelWrapper *v9; // r7
  ModelWrapper *v10; // r0
  void *v11; // r0
  void (__fastcall *v12)(void *, sead__SafeString *); // r2
  StateBase *v13; // r1
  sead__SafeString identifier; // [sp+18h] [bp-30h] BYREF
  int v16; // [sp+20h] [bp-28h]

  v2 = a1 + 8;
  sub_601FA428(dword_60C8BF58, &a1[8], &a1[11], &a1[5]);
  identifier.vtable = &sead__SafeStringBase__vtable;
  identifier.cstr = "cobShipKoopaJrBoro";
  v3 = (StateBase *)LoadResource(ResourceMgrRelated_instance, &identifier);
  a1[19].nextState = v3;
  identifier.vtable = &sead__SafeStringBase__vtable;
  identifier.cstr = "cobShipKoopaJrBoro";
  Model = (void *)Resource_getModel(v3, &identifier, 6, 1, 0, 0, 0, 0, 1, 0);
  v5 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v6 = ModelWrapper_ctor(v5, Model, 1, 0, 0, 0, 0);
  ModelWrapper_setup(v6, (int)v3, 0, 0);
  a1[19].executer = (StateExecuter *)v5;
  (*(void (__fastcall **)(void *, StateMgr *))(*(_DWORD *)FIELD_U32(v5, 0x0) + 68))(FIELD_U32(v5, 0x0), v2);
  identifier.vtable = &sead__SafeStringBase__vtable;
  identifier.cstr = "cobShipKoopaJrJimen";
  v7 = (StateBase *)LoadResource(ResourceMgrRelated_instance, &identifier);
  a1[19].lastState = v7;
  identifier.vtable = &sead__SafeStringBase__vtable;
  identifier.cstr = "cs_ship_koopa_jimen";
  v8 = (void *)Resource_getModel(v7, &identifier, 6, 1, 0, 0, 0, 0, 1, 0);
  v9 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v10 = ModelWrapper_ctor(v9, v8, 1, 0, 0, 0, 0);
  ModelWrapper_setup(v10, (int)v7, 0, 0);
  a1[19].currentMethodExecuter = (StateMethodExecuter *)v9;
  v11 = FIELD_U32(v9, 0x0);
  v12 = *(void (__fastcall **)(void *, sead__SafeString *))(*(_DWORD *)FIELD_U32(v9, 0x0) + 68);
  identifier.vtable = 0;
  identifier.cstr = 0;
  v16 = 0;
  v12(v11, &identifier);
  if ( a1[1].nextState )
  {
    v13 = (StateBase *)&unk_60C8B990;
  }
  else
  {
    a1[20].executer = a1[8].executer;
    v13 = (StateBase *)&dword_60C8B950;
  }
  StateMgr__changeState(a1 + 18, v13);
  a1[13].nextState = (StateBase *)1140457472;
  *((_DWORD *)a1[19].FIELD_U32(executer, 0x0) + 9) = 0;
  sub_60427BC8(dword_60C9BBD4, a1[19].FIELD_U32(executer, 0x0), 7, 0);
  sub_60427BC8(dword_60C9BBD4, a1[19].FIELD_U32(currentMethodExecuter, 0x0), 7, 0);
  ((void (__fastcall *)(StateMgr *))FIELD_U32(a1, 0x0)[5].methodExecuter.currentState)(a1);
  return 1;
}
