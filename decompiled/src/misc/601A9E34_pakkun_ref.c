/* pakkun_ref
 * address: 0x601A9E34   size: 336   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall pakkun_ref(int a1)
{
  void *v2; // r5
  void *Model; // r7
  ModelWrapper *v4; // r6
  ModelWrapper *v5; // r0
  int v6; // r4
  sead__SafeString identifier; // [sp+18h] [bp-20h] BYREF

  identifier.vtable = &sead__SafeStringBase__vtable;
  identifier.cstr = "pakkun";
  v2 = (void *)LoadResource(ResourceMgrRelated_instance, &identifier);
  FIELD_U32(a1, 376) = v2;
  identifier.vtable = &sead__SafeStringBase__vtable;
  identifier.cstr = "pakkun";
  Model = (void *)Resource_getModel(v2, &identifier, 6, 1, 0, 0, 0, 0, 1, 0);
  v4 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v5 = ModelWrapper_ctor(v4, Model, 1, 0, 0, 0, 0);
  ModelWrapper_setup(v5, (int)v2, 0, 0);
  FIELD_U32(a1, 372) = v4;
  if ( FIELD_U8(a1, 404) )
  {
    SkeletalAnim_play((int)*FIELD_U32(v4, 0xC), FIELD_U32(a1, 376), (int)&dword_60C8A3C4);
    AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(FIELD_U32(a1, 372) + 12) + 4), 1);
    *(_DWORD *)(**(_DWORD **)(FIELD_U32(a1, 372) + 12) + 24) = 1065353216;
    FIELD_U8(a1, 404) = 0;
    v4 = *(ModelWrapper **)(a1 + 372);
  }
  FIELD_U32(a1, 128) = 1074161254;
  v6 = a1 + 128;
  FIELD_U32(v6, 4) = 1074161254;
  FIELD_U32(v6, 8) = 1074161254;
  return (*(int (__fastcall **)(void *, int))(*(_DWORD *)FIELD_U32(v4, 0x0) + 68))(FIELD_U32(v4, 0x0), v6);
}
