/* light_search_ref
 * address: 0x60619AC8   size: 444   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall light_search_ref(int a1)
{
  void *ResArchiveById; // r4
  void *v3; // r8
  ModelWrapper *v4; // r7
  ModelWrapper *v5; // r0
  int v6; // r5
  int *animations; // r0
  char *v8; // r6
  void *Model2; // r8
  ModelWrapper *v10; // r7
  ModelWrapper *v11; // r0
  int v12; // r0
  _DWORD **v13; // r0
  _DWORD *v14; // r0
  sead__SafeString a2; // [sp+18h] [bp-28h] BYREF

  ResArchiveById = (void *)Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
  if ( (FIELD_U8(a1, 20) & 1) != 0 )
  {
    a2.vtable = &sead__SafeStringBase__vtable;
    a2.cstr = "light_search_obake";
    Model2 = (void *)Resource_getModel2(ResArchiveById, &a2, 0, 0, 2, 0, 0, 0, 0);
    v10 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
    v11 = ModelWrapper_ctor(v10, Model2, 0, 0, 2, 0, 0);
    ModelWrapper_setup(v11, ResArchiveById, 0, 0);
    FIELD_U32(a1, 6136) = v10;
    v6 = a1 + 6136;
    animations = (int *)FIELD_U32(v10, 0x18).animations;
    v8 = "light_search_obake_fog";
  }
  else
  {
    a2.vtable = &sead__SafeStringBase__vtable;
    a2.cstr = "light_search";
    v3 = (void *)Resource_getModel2(ResArchiveById, &a2, 0, 0, 2, 0, 0, 0, 0);
    v4 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
    v5 = ModelWrapper_ctor(v4, v3, 0, 0, 2, 0, 0);
    ModelWrapper_setup(v5, ResArchiveById, 0, 0);
    FIELD_U32(a1, 6136) = v4;
    v6 = a1 + 6136;
    animations = (int *)FIELD_U32(v4, 0x18).animations;
    v8 = "light_search_fog";
  }
  v12 = *animations;
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = v8;
  sub_60446088(v12, (int)ResArchiveById, &a2);
  v13 = *(_DWORD ***)(*(_DWORD *)v6 + 28);
  if ( *(_DWORD *)(*(_DWORD *)v6 + 24) > 1u )
    ++v13;
  v14 = *v13;
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = v8;
  return ShuAnim_play(v14, (int)ResArchiveById, &a2);
}
