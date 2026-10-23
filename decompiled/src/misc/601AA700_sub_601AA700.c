/* sub_601AA700
 * address: 0x601AA700   size: 304   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601AA700(int a1)
{
  void *ResArchiveById; // r9
  void *Model; // r6
  ModelWrapper *v4; // r7
  ModelWrapper *v5; // r0
  int v6; // r0
  sead__SafeString identifier; // [sp+18h] [bp-28h] BYREF

  ResArchiveById = (void *)Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
  identifier.vtable = &sead__SafeStringBase__vtable;
  identifier.cstr = "pakkun";
  Model = (void *)Resource_getModel(ResArchiveById, &identifier, 6, 1, 0, 0, 0, 0, 1, 0);
  v4 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v5 = ModelWrapper_ctor(v4, Model, 1, 0, 0, 0, 0);
  ModelWrapper_setup(v5, (int)ResArchiveById, 0, 0);
  FIELD_U32(a1, 268) = v4;
  v6 = (int)*FIELD_U32(v4, 0xC);
  identifier.vtable = &sead__SafeStringBase__vtable;
  identifier.cstr = "attack";
  SkeletalAnim_play(v6, (int)ResArchiveById, (int)&identifier);
  FIELD_U32(a1, 128) = 1077936128;
  FIELD_U32(a1, 132) = 1077936128;
  FIELD_U32(a1, 136) = 1077936128;
  (*(void (__fastcall **)(_DWORD, int))(***(_DWORD ***)(a1 + 268) + 68))(**(_DWORD **)(a1 + 268), a1 + 128);
  FIELD_U32(a1, 180) = sub_601691C0(a1);
  sub_601AA83C(a1);
  FIELD_U32(a1, 212) = 1133903872;
  return 1;
}
