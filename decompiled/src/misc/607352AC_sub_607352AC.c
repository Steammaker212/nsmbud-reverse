/* sub_607352AC
 * address: 0x607352AC   size: 492   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607352AC(int a1)
{
  char *v2; // r1
  void *v3; // r5
  void *v4; // r6
  void *Model2; // r7
  ModelWrapper *v6; // r4
  ModelWrapper *v7; // r0
  int v8; // r0
  int v9; // r0
  int v10; // r0
  unsigned int v11; // r1
  int *v12; // r0
  int v13; // r0
  int v14; // r0
  int v15; // r0
  unsigned int v16; // r1
  int *v17; // r0
  int result; // r0
  sead__SafeString a2; // [sp+18h] [bp-28h] BYREF

  if ( FIELD_U8(dword_60CC6D8C, 17) )
  {
    a2.vtable = &sead__SafeStringBase__vtable;
    v2 = "R_miniGame_shuffle";
  }
  else
  {
    a2.vtable = &sead__SafeStringBase__vtable;
    v2 = "miniGame_shuffle";
  }
  a2.cstr = v2;
  v3 = (void *)LoadResource(ResourceMgrRelated_instance, &a2);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "shufflePanel";
  v4 = *(void **)(a1 + 6828);
  Model2 = (void *)Resource_getModel2(v3, &a2, 2, 2, 0, 0, 0, 0, (int)v4);
  v6 = (ModelWrapper *)operator_new_8DE25C(0x48u, v4, 4);
  v7 = sub_60421830(v6, Model2, 2, 2, 0, 0, 0);
  j_ModelWrapper_setupModel(v7, v3, 0, v4);
  FIELD_U32(a1, 6100) = v6;
  v8 = (int)*FIELD_U32(v6, 0xC);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "shufflePanel_wait";
  SkeletalAnim_play(v8, (int)v3, (const char **)&a2);
  *(_DWORD *)(**(_DWORD **)(FIELD_U32(a1, 6100) + 12) + 24) = 0;
  v9 = **(_DWORD **)(FIELD_U32(a1, 6100) + 20);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "shufflePanel_changeB";
  TexAnim_play(v9, (int)v3, &a2);
  v10 = FIELD_U32(a1, 6100);
  v11 = FIELD_U32(v10, 16);
  v12 = *(int **)(v10 + 20);
  if ( v11 > 1 )
    ++v12;
  v13 = *v12;
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "shufflePanel_changeF";
  TexAnim_play(v13, (int)v3, &a2);
  v14 = **(_DWORD **)(FIELD_U32(a1, 6100) + 20);
  FIELD_U32(v14, 20) = 0;
  FIELD_U32(v14, 28) |= 2u;
  v15 = FIELD_U32(a1, 6100);
  v16 = FIELD_U32(v15, 16);
  v17 = *(int **)(v15 + 20);
  if ( v16 > 1 )
    ++v17;
  result = *v17;
  FIELD_U32(result, 20) = 0;
  FIELD_U32(result, 28) |= 2u;
  return result;
}
