/* sub_6012CB54
 * address: 0x6012CB54   size: 260   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6012CB54(int a1)
{
  void *ResArchiveById; // r10
  void *Model2; // r6
  ModelWrapper *v4; // r7
  ModelWrapper *v5; // r0
  int v6; // r0
  sead__SafeString a2; // [sp+14h] [bp-2Ch] BYREF

  ResArchiveById = (void *)Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "obj_turara_rakka_S";
  Model2 = (void *)Resource_getModel2(ResArchiveById, &a2, 1, 0, 1, 0, 0, 0, 0);
  v4 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v5 = ModelWrapper_ctor(v4, Model2, 1, 0, 1, 0, 0);
  ModelWrapper_setup(v5, (int)ResArchiveById, 0, 0);
  FIELD_U32(a1, 6300) = v4;
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "gura_anim_S";
  sub_6040F4B8(v4, &a2, 0);
  v6 = **(_DWORD **)(FIELD_U32(a1, 6300) + 28);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "obj_turara_rakka_S";
  return sub_60446088(v6, (int)ResArchiveById, (int)&a2);
}
