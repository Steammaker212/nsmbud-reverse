/* star_coinA_ref
 * address: 0x6052B52C   size: 1220   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall star_coinA_ref(int a1)
{
  char v1; // r12
  void *Resource; // r5
  int v4; // r8
  int v5; // r9
  int Model2; // r7
  ModelWrapper *v7; // r0
  void *v8; // r1
  ModelWrapper *v9; // r4
  ModelWrapper *v10; // r0
  char v11; // r12
  int v12; // r0
  void *v13; // r5
  void *v14; // r4
  ModelWrapper *v15; // r7
  ModelWrapper *v16; // r0
  void *v17; // r4
  ModelWrapper *v18; // r7
  ModelWrapper *v19; // r0
  void *v20; // r4
  ModelWrapper *v21; // r6
  ModelWrapper *v22; // r0
  sead__SafeString a2; // [sp+14h] [bp-2Ch] BYREF

  if ( ((unsigned int)dword_60CAA4C0 & ~(1616033096 << v1) & 1) == 0 && _cxa_guard_acquire(dword_60CAA4C0) )
  {
    dword_60CAA4D4 = (int)&sead__SafeStringBase__vtable;
    dword_60CAA4D8 = (int)"obj_coin";
    _cxa_guard_release(dword_60CAA4C0);
  }
  Resource = (void *)LoadResource(ResourceMgrRelated_instance, &dword_60CAA4D4);
  v4 = 0;
  do
  {
    a2.vtable = &sead__SafeStringBase__vtable;
    a2.cstr = "obj_coin";
    v5 = a1;
    Model2 = Resource_getModel2(Resource, &a2, 1, 0, 0, 0, 0, 0, 0);
    v7 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
    v8 = (void *)Model2;
    v9 = v7;
    a1 = v5;
    v10 = ModelWrapper_ctor(v7, v8, 1, 0, 0, 0, 0);
    ModelWrapper_setup(v10, Resource, 0, 0);
    v12 = v5 + v4;
    v4 += 48;
    FIELD_U32(v12, 64) = v9;
    *((_DWORD *)FIELD_U32(v9, 0x0) + 8) = -2;
    *(_DWORD *)(**(_DWORD **)(v12 + 64) + 36) = -1;
    FIELD_U8(v12, 92) = 0;
  }
  while ( v4 != 2880 );
  if ( ((unsigned int)&dword_60CAA4C0[1] & ~(1616033412 << v11) & 1) == 0 && _cxa_guard_acquire(&dword_60CAA4C0[1]) )
  {
    dword_60CAA4DC = (int)&sead__SafeStringBase__vtable;
    dword_60CAA4E0 = (int)"star_coin";
    _cxa_guard_release(&dword_60CAA4C0[1]);
  }
  if ( ((unsigned int)&dword_60CAA4C0[2] & ~(1616033504 << v11) & 1) == 0 && _cxa_guard_acquire(&dword_60CAA4C0[2]) )
  {
    dword_60CAA4E4 = (int)&sead__SafeStringBase__vtable;
    dword_60CAA4E8 = (int)"Model/star_coin.Nin_NX_NVN.szs";
    _cxa_guard_release(&dword_60CAA4C0[2]);
  }
  if ( ((unsigned int)&dword_60CAA4C0[3] & ~(1616033596 << v11) & 1) == 0 && _cxa_guard_acquire(&dword_60CAA4C0[3]) )
  {
    dword_60CAA4EC = (int)&sead__SafeStringBase__vtable;
    dword_60CAA4F0 = (int)"star_coin";
    _cxa_guard_release(&dword_60CAA4C0[3]);
  }
  ArchiveManager_loadSzs(
    ArchiveManagerMaybe_instance,
    (sead__SafeString *)&dword_60CAA4EC,
    (sead__SafeString *)&dword_60CAA4E4,
    0,
    1);
  sub_6043B2D8(ResourceMgrRelated_instance, &dword_60CAA4DC, (int)&dword_60CAA4EC, 0);
  v13 = (void *)LoadResource(ResourceMgrRelated_instance, &dword_60CAA4DC);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "star_coinA";
  v14 = (void *)Resource_getModel2(v13, &a2, 1, 0, 0, 0, 0, 0, 0);
  v15 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v16 = ModelWrapper_ctor(v15, v14, 1, 0, 0, 0, 0);
  ModelWrapper_setup(v16, v13, 0, 0);
  FIELD_U32(v5, 2944) = v15;
  *((_DWORD *)FIELD_U32(v15, 0x0) + 8) = -2;
  *(_DWORD *)(**(_DWORD **)(v5 + 2944) + 36) = -1;
  FIELD_U8(v5, 2972) = 1;
  FIELD_U32(v5, 2976) = 10;
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "star_coinA";
  v17 = (void *)Resource_getModel2(v13, &a2, 1, 0, 0, 0, 0, 0, 0);
  v18 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v19 = ModelWrapper_ctor(v18, v17, 1, 0, 0, 0, 0);
  ModelWrapper_setup(v19, v13, 0, 0);
  FIELD_U32(v5, 2992) = v18;
  *((_DWORD *)FIELD_U32(v18, 0x0) + 8) = -2;
  *(_DWORD *)(**(_DWORD **)(v5 + 2992) + 36) = -1;
  FIELD_U8(v5, 3020) = 1;
  FIELD_U32(v5, 3024) = 10;
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "star_coinA";
  v20 = (void *)Resource_getModel2(v13, &a2, 1, 0, 0, 0, 0, 0, 0);
  v21 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v22 = ModelWrapper_ctor(v21, v20, 1, 0, 0, 0, 0);
  ModelWrapper_setup(v22, v13, 0, 0);
  FIELD_U32(v5, 3040) = v21;
  *((_DWORD *)FIELD_U32(v21, 0x0) + 8) = -2;
  *(_DWORD *)(**(_DWORD **)(v5 + 3040) + 36) = -1;
  FIELD_U8(v5, 3068) = 1;
  FIELD_U32(v5, 3072) = 10;
  return 10;
}
