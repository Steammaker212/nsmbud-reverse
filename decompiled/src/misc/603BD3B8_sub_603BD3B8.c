/* sub_603BD3B8
 * address: 0x603BD3B8   size: 320   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603BD3B8(_DWORD *a1)
{
  void *Resource; // r5
  void *Model2; // r6
  ModelWrapper *v4; // r7
  ModelWrapper *v5; // r0
  int v6; // r0
  void *v7; // r0
  int result; // r0
  _DWORD v9[10]; // [sp+18h] [bp-28h] BYREF

  Resource = (void *)LoadResource(ResourceMgrRelated_instance, &dword_60C9844C);
  Model2 = (void *)Resource_getModel2(Resource, (sead__SafeString *)&dword_60C98454, 1, 0, 0, 0, 0, 0, 0);
  v4 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v5 = ModelWrapper_ctor(v4, Model2, 1, 0, 0, 0, 0);
  ModelWrapper_setup(v5, (int)Resource, 0, 0);
  a1[1706] = v4;
  v6 = (int)*FIELD_U32(v4, 0xC);
  v9[0] = &sead__SafeStringBase__vtable;
  v9[1] = "walk";
  SkeletalAnim_play(v6, (int)Resource, (int)v9);
  a1[1707] = Resource_getModel2(Resource, (sead__SafeString *)&dword_60C9845C, 0, 0, 0, 0, 0, 0, 0);
  v7 = (void *)LoadResource(ResourceMgrRelated_instance, &dword_60C98464);
  result = Resource_getModel2(v7, (sead__SafeString *)&dword_60C9846C, 0, 0, 0, 0, 0, 0, 0);
  a1[1708] = result;
  return result;
}
