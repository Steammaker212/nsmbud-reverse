/* sub_602C1A20
 * address: 0x602C1A20   size: 252   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602C1A20(int a1)
{
  void *v2; // r5
  void *Model2; // r9
  ModelWrapper *v4; // r7
  ModelWrapper *v5; // r0
  unsigned int animations; // r2
  int *v7; // r0
  sead__SafeString a2; // [sp+18h] [bp-28h] BYREF

  FIELD_U8(a1, 6483) = 0;
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "gesso";
  v2 = (void *)LoadResource(ResourceMgrRelated_instance, &a2);
  FIELD_U32(a1, 6300) = v2;
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "gesso";
  Model2 = (void *)Resource_getModel2(v2, &a2, 2, 0, 0, 0, 0, 0, 0);
  v4 = (ModelWrapper *)operator_new_8DE25C(0x48u, 0, 4);
  v5 = sub_60421830(v4, Model2, 2, 0, 0, 0, 0);
  j_ModelWrapper_setupModel((int)v5, (int)v2, 0, 0);
  FIELD_U32(a1, 6304) = v4;
  animations = (unsigned int)v4[1].texAnims.animations;
  v7 = (int *)FIELD_U32(v4, 0xC);
  if ( FIELD_U32(v4, 0x8) > animations )
    v7 += animations;
  return SkeletalAnim_play(*v7, FIELD_U32(a1, 6300), (int)&dword_60C911F4);
}
