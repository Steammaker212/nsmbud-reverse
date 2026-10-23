/* sub_607189B4
 * address: 0x607189B4   size: 308   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607189B4(_DWORD *a1)
{
  sead__SafeString path; // [sp+8h] [bp-30h] BYREF
  sead__SafeString identifier; // [sp+10h] [bp-28h] BYREF

  a1[13] = 1;
  path.vtable = &sead__SafeStringBase__vtable;
  identifier.vtable = &sead__SafeStringBase__vtable;
  identifier.cstr = "rail";
  path.cstr = "Model/rail.Nin_NX_NVN.szs";
  ArchiveManager_loadSzs(ArchiveManagerMaybe_instance, &identifier, &path, 0, 1);
  identifier.vtable = &sead__SafeStringBase__vtable;
  path.vtable = &sead__SafeStringBase__vtable;
  identifier.cstr = "rail";
  path.cstr = "rail";
  sub_6043B2D8(ResourceMgrRelated_instance, &identifier, (int)&path, 0);
  identifier.vtable = &sead__SafeStringBase__vtable;
  identifier.cstr = "rail";
  a1[15] = LoadResource(ResourceMgrRelated_instance, &identifier);
  path.vtable = &sead__SafeStringBase__vtable;
  identifier.vtable = &sead__SafeStringBase__vtable;
  identifier.cstr = "obj_chikuwa_block";
  path.cstr = "Model/obj_chikuwa_block.Nin_NX_NVN.sarc";
  ArchiveManager_loadSzs(ArchiveManagerMaybe_instance, &identifier, &path, 0, 0);
  identifier.vtable = &sead__SafeStringBase__vtable;
  path.vtable = &sead__SafeStringBase__vtable;
  identifier.cstr = "obj_chikuwa_block";
  path.cstr = "obj_chikuwa_block";
  sub_6043B2D8(ResourceMgrRelated_instance, &identifier, (int)&path, 0);
  identifier.vtable = &sead__SafeStringBase__vtable;
  identifier.cstr = "obj_chikuwa_block";
  a1[14] = LoadResource(ResourceMgrRelated_instance, &identifier);
  sub_60718B04(a1);
  return sub_60719364(a1);
}
