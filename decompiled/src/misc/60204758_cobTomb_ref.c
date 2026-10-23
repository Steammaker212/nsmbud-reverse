/* cobTomb_ref
 * address: 0x60204758   size: 244   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall cobTomb_ref(int a1)
{
  void *ResArchiveById; // r8
  void *Model; // r6
  ModelWrapper *v4; // r7
  ModelWrapper *v5; // r0
  sead__SafeString identifier; // [sp+18h] [bp-20h] BYREF

  ResArchiveById = (void *)Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
  identifier.vtable = &sead__SafeStringBase__vtable;
  identifier.cstr = "cobTomb";
  Model = (void *)Resource_getModel(ResArchiveById, &identifier, 6, 1, 0, 0, 0, 0, 1, 0);
  v4 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v5 = ModelWrapper_ctor(v4, Model, 1, 0, 0, 0, 0);
  ModelWrapper_setup(v5, (int)ResArchiveById, 0, 0);
  FIELD_U32(a1, 268) = v4;
  sub_60204858(a1);
  sub_60427BC8(dword_60C9BBD4, **(_DWORD **)(a1 + 268), FIELD_U8(a1, 240), FIELD_U8(a1, 244));
  FIELD_U32(a1, 212) = 1135542272;
  return 1;
}
