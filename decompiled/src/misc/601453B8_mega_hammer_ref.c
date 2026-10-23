/* mega_hammer_ref
 * address: 0x601453B8   size: 184   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall mega_hammer_ref(int a1)
{
  void *resource; // r5
  void *model; // r6
  ModelWrapper *modelWrapper_; // r7
  ModelWrapper *modelWrapper_2; // r0
  sead__SafeString identifier; // [sp+18h] [bp-20h] BYREF

  resource = (void *)Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
  identifier.vtable = &sead__SafeStringBase__vtable;
  identifier.cstr = "mega_hammer";
  model = (void *)Resource_getModel2(resource, &identifier, 1, 0, 0, 0, 0, 0, 0);
  modelWrapper_ = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  modelWrapper_2 = ModelWrapper_ctor(modelWrapper_, model, 1, 0, 0, 0, 0);
  ModelWrapper_setup(modelWrapper_2, (int)resource, 0, 0);
  FIELD_U32(a1, 6472) = modelWrapper_;
  return 6472;
}
