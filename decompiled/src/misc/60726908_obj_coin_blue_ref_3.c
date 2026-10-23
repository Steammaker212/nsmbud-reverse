/* obj_coin_blue_ref_3
 * address: 0x60726908   size: 288   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall obj_coin_blue_ref_3(int a1, void *r1_0)
{
  void *v4; // r0
  void *v5; // r0
  int result; // r0
  sead__SafeString a2; // [sp+18h] [bp-30h] BYREF
  sead__SafeString identifier; // [sp+20h] [bp-28h] BYREF

  a2.vtable = &sead__SafeStringBase__vtable;
  identifier.vtable = &sead__SafeStringBase__vtable;
  identifier.cstr = "obj_coin";
  a2.cstr = "actor/obj_coin.sarc";
  ArchiveManager_loadSzs(ArchiveManagerMaybe_instance, &identifier, &a2, r1_0, 0);
  identifier.vtable = &sead__SafeStringBase__vtable;
  a2.vtable = &sead__SafeStringBase__vtable;
  identifier.cstr = "obj_coin";
  a2.cstr = "obj_coin";
  sub_6043B2D8(ResourceMgrRelated_instance, &identifier, (int)&a2, r1_0);
  identifier.vtable = &sead__SafeStringBase__vtable;
  identifier.cstr = "obj_coin";
  v4 = (void *)LoadResource(ResourceMgrRelated_instance, &identifier);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "obj_coin";
  FIELD_U32(a1, 36) = Resource_getModel2(v4, &a2, 1, 1, 1, 1, 0, 0, (int)r1_0);
  identifier.vtable = &sead__SafeStringBase__vtable;
  identifier.cstr = "obj_coin";
  v5 = (void *)LoadResource(ResourceMgrRelated_instance, &identifier);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "obj_coin_blue";
  result = Resource_getModel2(v5, &a2, 1, 1, 1, 1, 0, 0, (int)r1_0);
  FIELD_U32(a1, 40) = result;
  return result;
}
