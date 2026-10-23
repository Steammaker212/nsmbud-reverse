/* pukupuku_ref
 * address: 0x60203138   size: 268   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall pukupuku_ref(int a1)
{
  void *v2; // r5
  void *Model; // r9
  ModelWrapper *v4; // r7
  ModelWrapper *v5; // r0
  int v6; // r1
  int v7; // r0
  sead__SafeString identifier; // [sp+18h] [bp-28h] BYREF

  identifier.vtable = &sead__SafeStringBase__vtable;
  identifier.cstr = "pukupuku";
  v2 = (void *)LoadResource(ResourceMgrRelated_instance, &identifier);
  FIELD_U32(a1, 376) = v2;
  identifier.vtable = &sead__SafeStringBase__vtable;
  identifier.cstr = "pukupuku";
  Model = (void *)Resource_getModel(v2, &identifier, 6, 1, 0, 0, 0, 0, 1, 0);
  v4 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v5 = ModelWrapper_ctor(v4, Model, 1, 0, 0, 0, 0);
  ModelWrapper_setup(v5, (int)v2, 0, 0);
  FIELD_U32(a1, 372) = v4;
  v6 = FIELD_U32(a1, 376);
  v7 = (int)*FIELD_U32(v4, 0xC);
  identifier.vtable = &sead__SafeStringBase__vtable;
  identifier.cstr = "fly";
  SkeletalAnim_play(v7, v6, (int)&identifier);
  return (*(int (__fastcall **)(_DWORD, int))(***(_DWORD ***)(a1 + 372) + 68))(**(_DWORD **)(a1 + 372), a1 + 128);
}
