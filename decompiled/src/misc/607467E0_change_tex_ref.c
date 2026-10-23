/* change_tex_ref
 * address: 0x607467E0   size: 544   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall change_tex_ref(int a1)
{
  void *Resource; // r9
  void *Model2; // r7
  ModelWrapper *v4; // r5
  ModelWrapper *v5; // r0
  int v6; // r5
  char v7; // r6
  int v8; // r4
  int (__fastcall *v9)(int, int); // r5
  int v10; // r0
  int v11; // r0
  int v12; // r5
  int v13; // r7
  int (__fastcall *v14)(int, int); // r5
  int v15; // r0
  int result; // r0
  int v17; // r4
  int *v18; // r5
  int (**v19)(); // [sp+18h] [bp-28h] BYREF
  const char *v20; // [sp+1Ch] [bp-24h]

  Resource = (void *)LoadResource(ResourceMgrRelated_instance, dword_60CBE570);
  Model2 = (void *)Resource_getModel2(Resource, (sead__SafeString *)&dword_60CBE578, 2, 1, 0, 0, 0, 0, 0);
  v4 = (ModelWrapper *)operator_new_8DE25C(0x48u, 0, 4);
  v5 = sub_60421830(v4, Model2, 2, 1, 0, 0, 0);
  j_ModelWrapper_setupModel(v5, Resource, 0, 0);
  FIELD_U32(a1, 644) = v4;
  v19 = &sead__SafeStringBase__vtable;
  v20 = "vibrate";
  sub_60421AE4(v4, (int)&v19, 1, 1.0, 0.0);
  v6 = **(_DWORD **)(FIELD_U32(a1, 644) + 20);
  v19 = &sead__SafeStringBase__vtable;
  v20 = "change_tex";
  TexAnim_play(v6, (int)Resource, &v19);
  AnimationCtrl_setRepeat((ModelAnimation *)(v6 + 4), 0);
  FIELD_U32(v6, 24) = 0;
  FIELD_F32(v6, 20) = (float)FIELD_U8(a1, 22);
  FIELD_U32(v6, 28) |= 2u;
  v7 = FIELD_U8(a1, 23);
  v8 = **(_DWORD **)(a1 + 644);
  v9 = *(int (__fastcall **)(int, int))(*(_DWORD *)v8 + 132);
  v10 = (*(int (__fastcall **)(int, int *))(*(_DWORD *)v8 + 124))(v8, &dword_60CBE588);
  v11 = v9(v8, v10);
  v12 = v11;
  v13 = v7 & 1;
  if ( v11 )
  {
    (*(void (__fastcall **)(int, _DWORD, int *))(*(_DWORD *)v11 + 12))(v11, 0, &dword_60CBE5E0[4 * v13]);
    (*(void (__fastcall **)(int, int, int *))(*(_DWORD *)v12 + 12))(v12, 1, &dword_60CBE5E0[4 * v13 + 8]);
  }
  v14 = *(int (__fastcall **)(int, int))(*(_DWORD *)v8 + 132);
  v15 = (*(int (__fastcall **)(int, int *))(*(_DWORD *)v8 + 124))(v8, &dword_60CBE580);
  result = v14(v8, v15);
  v17 = result;
  if ( result )
  {
    v18 = &dword_60CBE570[4 * v13];
    (*(void (__fastcall **)(int, _DWORD, int *))(*(_DWORD *)result + 12))(result, 0, v18 + 10);
    return (*(int (__fastcall **)(int, int, int *))(*(_DWORD *)v17 + 12))(v17, 1, v18 + 18);
  }
  return result;
}
