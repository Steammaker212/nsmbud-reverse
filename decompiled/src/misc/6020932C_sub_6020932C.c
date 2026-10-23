/* sub_6020932C
 * address: 0x6020932C   size: 432   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_6020932C(int a1)
{
  void *ResArchiveById; // r5
  void *Model; // r6
  ModelWrapper *v4; // r7
  ModelWrapper *v5; // r0
  _DWORD *v6; // r0
  int v7; // r1
  unsigned int v8; // r2
  unsigned int v9; // r0
  _DWORD *v10; // r6
  _DWORD *v11; // r0
  sead__SafeString identifier; // [sp+18h] [bp-28h] BYREF

  ResArchiveById = (void *)Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
  identifier.vtable = &sead__SafeStringBase__vtable;
  identifier.cstr = "bros";
  Model = (void *)Resource_getModel(ResArchiveById, &identifier, 6, 2, 1, 0, 0, 0, 1, 0);
  v4 = (ModelWrapper *)operator_new_8DE25C(0x48u, 0, 4);
  v5 = sub_60421830(v4, Model, 2, 1, 0, 0, 0);
  j_ModelWrapper_setupModel((int)v5, (int)ResArchiveById, 0, 0);
  FIELD_U32(a1, 408) = v4;
  identifier.vtable = &sead__SafeStringBase__vtable;
  identifier.cstr = "walk";
  sub_60421938(v4, (int)ResArchiveById, (int)&identifier);
  v6 = *(_DWORD **)(a1 + 408);
  v7 = v6[3];
  v8 = v6[2];
  v9 = v6[17];
  if ( v8 > v9 )
    v7 += 4 * v9;
  *(_DWORD *)(*(_DWORD *)v7 + 24) = 1065353216;
  v10 = **(_DWORD ***)(FIELD_U32(a1, 408) + 20);
  identifier.vtable = &sead__SafeStringBase__vtable;
  identifier.cstr = "bros";
  TexAnim_play(v10, ResArchiveById, &identifier);
  v10[5] = 1065353216;
  v10[7] |= 2u;
  v10[6] = 0;
  FIELD_U32(a1, 212) = 1135542272;
  sub_6017793C((_DWORD *)(a1 + 324), a1, &dword_60C8CA5C);
  v11 = (_DWORD *)sub_601DFFE4(a1 + 300);
  FIELD_U32(a1, 372) = v11;
  FIELD_U32(a1, 80) = v11[18];
  FIELD_U32(a1, 84) = v11[19];
  FIELD_U32(a1, 88) = v11[20];
  FIELD_U32(a1, 248) = FIELD_U32(a1, 308);
  FIELD_U32(a1, 180) = 0;
  FIELD_U32(a1, 200) = 0;
  FIELD_U32(a1, 204) = -1059061760;
  StateMgr__changeState((StateMgr *)(a1 + 284), (StateBase *)&dword_60C8C8E4);
  return 1;
}
