/* sub_606E832C
 * address: 0x606E832C   size: 436   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606E832C(int a1)
{
  void *ResArchiveById; // r4
  void *v3; // r8
  ModelWrapper *v4; // r7
  ModelWrapper *v5; // r0
  int *animations; // r0
  char *v7; // r6
  void *Model2; // r8
  ModelWrapper *v9; // r7
  ModelWrapper *v10; // r0
  int v11; // r0
  int v12; // r0
  unsigned int v13; // r1
  _DWORD **v14; // r0
  _DWORD *v15; // r0
  sead__SafeString a2; // [sp+18h] [bp-28h] BYREF

  ResArchiveById = (void *)Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
  if ( (FIELD_U8(a1, 20) & 1) != 0 )
  {
    a2.vtable = &sead__SafeStringBase__vtable;
    a2.cstr = "center_fire_obake";
    Model2 = (void *)Resource_getModel2(ResArchiveById, &a2, 0, 0, 2, 0, 0, 0, 0);
    v9 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
    v10 = ModelWrapper_ctor(v9, Model2, 0, 0, 2, 0, 0);
    ModelWrapper_setup(v10, ResArchiveById, 0, 0);
    FIELD_U32(a1, 644) = v9;
    animations = (int *)FIELD_U32(v9, 0x18).animations;
    v7 = "obj_torch_obake";
  }
  else
  {
    a2.vtable = &sead__SafeStringBase__vtable;
    a2.cstr = "center_fire";
    v3 = (void *)Resource_getModel2(ResArchiveById, &a2, 0, 0, 2, 0, 0, 0, 0);
    v4 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
    v5 = ModelWrapper_ctor(v4, v3, 0, 0, 2, 0, 0);
    ModelWrapper_setup(v5, ResArchiveById, 0, 0);
    FIELD_U32(a1, 644) = v4;
    animations = (int *)FIELD_U32(v4, 0x18).animations;
    v7 = "obj_torch";
  }
  v11 = *animations;
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = v7;
  sub_60446088(v11, (int)ResArchiveById, &a2);
  v12 = FIELD_U32(a1, 644);
  v13 = FIELD_U32(v12, 24);
  v14 = *(_DWORD ***)(v12 + 28);
  if ( v13 > 1 )
    ++v14;
  v15 = *v14;
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = v7;
  return ShuAnim_play(v15, (int)ResArchiveById, &a2);
}
