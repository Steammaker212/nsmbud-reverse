/* Kanibo__createModel
 * address: 0x6030F3C0   size: 364   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall Kanibo__createModel(Enemy *a1)
{
  void *v2; // r0
  int v3; // r8
  void *Model2; // r6
  ModelWrapper *v5; // r7
  ModelWrapper *v6; // r0
  float *v7; // r6
  float v8; // s0
  sead__SafeString identifier; // [sp+14h] [bp-2Ch] BYREF

  identifier.vtable = &sead__SafeStringBase__vtable;
  identifier.cstr = "kanibo";
  v2 = (void *)LoadResource(ResourceMgrRelated_instance, &identifier);
  identifier.vtable = &sead__SafeStringBase__vtable;
  v3 = (int)v2;
  identifier.cstr = "kanibo";
  Model2 = (void *)Resource_getModel2(v2, &identifier, 2, 1, 0, 0, 0, 0, 0);
  v5 = (ModelWrapper *)operator_new_8DE25C(0x48u, 0, 4);
  v6 = sub_60421830(v5, Model2, 2, 1, 0, 0, 0);
  j_ModelWrapper_setupModel((int)v6, v3, 0, 0);
  a1[1]._._._._.vtable = (int)v5;
  v7 = (float *)*FIELD_U32(v5, 0x10).animations;
  identifier.vtable = &sead__SafeStringBase__vtable;
  identifier.cstr = "kanibo";
  TexAnim_play(v7, v3, &identifier);
  v7[6] = 0.0;
  if ( a1[1]._._._._.heap )
    v8 = 1.0;
  else
    v8 = 0.0;
  v7[5] = v8;
  *((_DWORD *)v7 + 7) |= 2u;
  FIELD_U32(a1, 0x0)._._.scale.x = 1.0;
  FIELD_U32(a1, 0x0)._._.scale.y = 1.0;
  FIELD_U32(a1, 0x0)._._.scale.z = 1.0;
  a1[1]._._._._.field_2C = 0;
  sub_60421AD4(a1[1]._._._._.vtable);
}
