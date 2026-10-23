/* sub_603C3870
 * address: 0x603C3870   size: 560   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603C3870(int a1)
{
  int v2; // r8
  void *v3; // r6
  _DWORD *v4; // r9
  char *v5; // r0
  void *Model2; // r5
  ModelWrapper *v7; // r7
  ModelWrapper *v8; // r0
  int *v9; // r10
  _DWORD **v10; // r6
  int v11; // r4
  int *v12; // r5
  int v13; // r0
  int v14; // r1
  int result; // r0
  _BYTE *v16; // r11
  int v17; // t1
  int *v18; // r2
  int v19; // r1
  unsigned int v20; // r0
  int v21; // r1
  unsigned int v22; // r0
  sead__SafeString a2; // [sp+14h] [bp-2Ch] BYREF

  FIELD_U32(a1, 144) = 1065353216;
  v2 = a1 + 144;
  FIELD_U32(a1, 148) = 1065353216;
  FIELD_U32(a1, 152) = 1065353216;
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "unabon";
  v3 = (void *)LoadResource(ResourceMgrRelated_instance, &a2);
  FIELD_U32(a1, 14960) = v3;
  v4 = (_DWORD *)(a1 + 26980);
  if ( FIELD_U32(a1, 26980) )
  {
    a2.vtable = &sead__SafeStringBase__vtable;
    v5 = "unabon";
  }
  else
  {
    a2.vtable = &sead__SafeStringBase__vtable;
    v5 = "unabon_S";
  }
  a2.cstr = v5;
  Model2 = (void *)Resource_getModel2(v3, &a2, 2, 0, 0, 0, 0, 0, 0);
  v7 = (ModelWrapper *)operator_new_8DE25C(0x48u, 0, 4);
  v8 = sub_60421830(v7, Model2, 2, 0, 0, 0, 0);
  j_ModelWrapper_setupModel((int)v8, (int)v3, 0, 0);
  v9 = (int *)(a1 + 14960);
  FIELD_U32(a1, 14956) = v7;
  v10 = (_DWORD **)(a1 + 14956);
  (*(void (__fastcall **)(void *, int))(*(_DWORD *)FIELD_U32(v7, 0x0) + 68))(FIELD_U32(v7, 0x0), v2);
  v11 = -1;
  v12 = &dword_60C98684;
  do
  {
    if ( ++v11 <= 20 )
    {
      v13 = (*(int (__fastcall **)(_DWORD, int *))(*(_DWORD *)**v10 + 84))(**v10, v12);
      v14 = v11;
      if ( (unsigned int)v11 >= 0x20 )
        v14 = 0;
      *(_DWORD *)(a1 + 4 * v14 + 26832) = v13;
    }
    v12 += 2;
  }
  while ( v11 <= FIELD_U8(a1, 27030) );
  v17 = FIELD_U8(a1, 27029);
  v16 = (_BYTE *)(a1 + 27029);
  result = v17;
  if ( v17 )
  {
    v18 = &dword_60C98644;
    if ( !*v4 )
      v18 = &dword_60C98664;
    sub_60421938(*v10, *v9, (int)v18);
    v19 = (*v10)[3];
    v20 = (*v10)[17];
    if ( (*v10)[2] > v20 )
      v19 += 4 * v20;
    AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v19 + 4), 1);
    v21 = (*v10)[3];
    v22 = (*v10)[17];
    if ( (*v10)[2] > v22 )
      v21 += 4 * v22;
    *(_DWORD *)(*(_DWORD *)v21 + 24) = 1065353216;
    *v16 = 0;
    return 0;
  }
  return result;
}
