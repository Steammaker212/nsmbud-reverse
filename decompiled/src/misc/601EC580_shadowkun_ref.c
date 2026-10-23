/* shadowkun_ref
 * address: 0x601EC580   size: 368   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall shadowkun_ref(int a1)
{
  void *ResArchiveById; // r5
  void *Model; // r8
  ModelWrapper *v4; // r7
  ModelWrapper *v5; // r0
  int v6; // r0
  int *v7; // r1
  int v8; // s0
  sead__SafeString identifier; // [sp+18h] [bp-28h] BYREF

  ResArchiveById = (void *)Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
  FIELD_U32(a1, 272) = ResArchiveById;
  identifier.vtable = &sead__SafeStringBase__vtable;
  identifier.cstr = "shadowkun";
  Model = (void *)Resource_getModel(ResArchiveById, &identifier, 6, 2, 0, 1, 0, 0, 1, 0);
  v4 = (ModelWrapper *)operator_new_8DE25C(0x48u, 0, 4);
  v5 = sub_60421830(v4, Model, 2, 0, 1, 0, 0);
  j_ModelWrapper_setupModel((int)v5, (int)ResArchiveById, 0, 0);
  FIELD_U32(a1, 268) = v4;
  sub_601ECD14(a1, 0, 1.0);
  FIELD_U32(a1, 128) = 0;
  FIELD_U32(a1, 132) = 0;
  FIELD_U32(a1, 136) = 0;
  sub_601EC704(a1);
  if ( FIELD_U32(a1, 352) )
  {
    FIELD_U32(a1, 356) = -1;
    v6 = *sub_601DB42C();
    if ( v6 != -1 || (v6 = *sub_601DB46C(), v6 != -1) )
    {
      FIELD_U32(a1, 356) = v6;
      sub_601ECA7C(a1);
    }
    v7 = &dword_601EC6F8;
    if ( FIELD_U32(a1, 352) == 1 )
      v7 = &dword_601EC6FC;
    FIELD_U32(a1, 180) = 0;
    v8 = *v7;
    FIELD_U32(a1, 128) = *v7;
    FIELD_U32(a1, 132) = v8;
    FIELD_U32(a1, 136) = v8;
  }
  FIELD_U32(a1, 212) = 1116471296;
  StateMgr__changeState((StateMgr *)(a1 + 300), (StateBase *)&dword_60C8B23C);
  return 1;
}
