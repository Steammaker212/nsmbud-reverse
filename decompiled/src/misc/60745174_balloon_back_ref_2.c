/* balloon_back_ref_2
 * address: 0x60745174   size: 620   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall balloon_back_ref_2(int a1)
{
  void *v2; // r5
  void *Model2; // r6
  ModelWrapper *v4; // r7
  ModelWrapper *v5; // r0
  int v6; // r1
  _DWORD *v7; // r5
  int v8; // r1
  int v9; // r0
  void *v10; // r5
  void *v11; // r6
  ModelWrapper *v12; // r7
  ModelWrapper *v13; // r0
  int v14; // r1
  _DWORD *v15; // r5
  int result; // r0
  void *v17; // r0
  sead__SafeString a2; // [sp+18h] [bp-40h] BYREF
  int (**v19)(); // [sp+20h] [bp-38h] BYREF
  const char *v20; // [sp+24h] [bp-34h]

  v2 = *(void **)(a1 + 644);
  Model2 = (void *)Resource_getModel2(v2, (sead__SafeString *)&unk_60CBE4B8, 2, 1, 1, 0, 0, 0, 0);
  v4 = (ModelWrapper *)operator_new_8DE25C(0x48u, 0, 4);
  v5 = sub_60421830(v4, Model2, 2, 1, 1, 0, 0);
  j_ModelWrapper_setupModel(v5, v2, 0, 0);
  FIELD_U32(a1, 648) = v4;
  sub_60421AE4(v4, (int)&dword_60CBE4D0, 1, 1.0, 0.0);
  v6 = FIELD_U32(a1, 644);
  v7 = **(_DWORD ***)(FIELD_U32(a1, 648) + 20);
  v19 = &sead__SafeStringBase__vtable;
  v20 = "balloon";
  TexAnim_play((int)v7, v6, &v19);
  v7[5] = 0;
  v7[7] |= 2u;
  v7[6] = 0;
  v8 = FIELD_U32(a1, 644);
  v9 = **(_DWORD **)(FIELD_U32(a1, 648) + 28);
  v19 = &sead__SafeStringBase__vtable;
  v20 = "float";
  sub_60446088(v9, v8, &v19);
  v10 = *(void **)(a1 + 644);
  v11 = (void *)Resource_getModel2(v10, (sead__SafeString *)&dword_60CBE4C0, 2, 1, 0, 0, 0, 0, 0);
  v12 = (ModelWrapper *)operator_new_8DE25C(0x48u, 0, 4);
  v13 = sub_60421830(v12, v11, 2, 1, 0, 0, 0);
  j_ModelWrapper_setupModel(v13, v10, 0, 0);
  FIELD_U32(a1, 652) = v12;
  sub_60421AE4(v12, (int)&dword_60CBE4E0, 1, 1.0, 0.0);
  v14 = FIELD_U32(a1, 644);
  v15 = **(_DWORD ***)(FIELD_U32(a1, 652) + 20);
  v19 = &sead__SafeStringBase__vtable;
  v20 = "balloon_back";
  TexAnim_play((int)v15, v14, &v19);
  v15[5] = 0;
  v15[7] |= 2u;
  v15[6] = 0;
  result = FIELD_U8(a1, 20);
  if ( (result & 1) == 0 )
  {
    v19 = &sead__SafeStringBase__vtable;
    v20 = "obj_coin";
    v17 = (void *)LoadResource(ResourceMgrRelated_instance, &v19);
    a2.vtable = &sead__SafeStringBase__vtable;
    a2.cstr = "obj_coin";
    result = Resource_getModel2(v17, &a2, 0, 0, 0, 0, 0, 0, 0);
    FIELD_U32(a1, 656) = result;
  }
  return result;
}
