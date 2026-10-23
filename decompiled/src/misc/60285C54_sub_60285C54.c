/* sub_60285C54
 * address: 0x60285C54   size: 408   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60285C54(int a1)
{
  void *ResArchiveById; // r5
  char *v3; // r0
  void *Model2; // r7
  ModelWrapper *v5; // r6
  ModelWrapper *v6; // r0
  _DWORD **v7; // r4
  _DWORD *v8; // r0
  int *v9; // r0
  int v10; // r0
  int v11; // r0
  sead__SafeString a2; // [sp+18h] [bp-28h] BYREF

  ResArchiveById = (void *)Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
  if ( (FIELD_U8(a1, 23) & 0x10) != 0 )
  {
    a2.vtable = &sead__SafeStringBase__vtable;
    v3 = "cookieL";
  }
  else
  {
    a2.vtable = &sead__SafeStringBase__vtable;
    v3 = "cookieS";
  }
  a2.cstr = v3;
  Model2 = (void *)Resource_getModel2(ResArchiveById, &a2, 2, 0, 2, 0, 0, 0, 0);
  v5 = (ModelWrapper *)operator_new_8DE25C(0x48u, 0, 4);
  v6 = sub_60421830(v5, Model2, 2, 0, 2, 0, 0);
  j_ModelWrapper_setupModel((int)v6, (int)ResArchiveById, 0, 0);
  FIELD_U32(a1, 6300) = v5;
  v7 = (_DWORD **)(a1 + 6300);
  v8 = *FIELD_U32(v5, 0x1C);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "cookie";
  ShuAnim_play(v8, (int)ResArchiveById, (int)&a2);
  AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(FIELD_U32(a1, 6300) + 28) + 4), 1);
  v9 = *(int **)(FIELD_U32(a1, 6300) + 28);
  if ( *(_DWORD *)(FIELD_U32(a1, 6300) + 24) > 1u )
    ++v9;
  v10 = *v9;
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "cookie";
  sub_60446088(v10, (int)ResArchiveById, (int)&a2);
  v11 = (*v7)[7];
  if ( (*v7)[6] > 1u )
    v11 += 4;
  AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v11 + 4), 1);
  return (*(int (__fastcall **)(_DWORD, int))(*(_DWORD *)**v7 + 68))(**v7, a1 + 144);
}
