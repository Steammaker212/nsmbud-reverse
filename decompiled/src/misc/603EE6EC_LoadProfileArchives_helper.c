/* LoadProfileArchives_helper
 * address: 0x603EE6EC   size: 1152   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall LoadProfileArchives_helper(void *a1)
{
  int i; // r9
  signed int result; // r0
  sead__SafeString v4; // [sp+30h] [bp-148h] BYREF
  sead__SafeString v5; // [sp+38h] [bp-140h] BYREF
  sead__SafeString v6; // [sp+40h] [bp-138h] BYREF
  sead__SafeString path; // [sp+48h] [bp-130h] BYREF
  int v8; // [sp+50h] [bp-128h]
  _BYTE v9[292]; // [sp+54h] [bp-124h] BYREF

  path.cstr = v9;
  v6.vtable = &sead__SafeStringBase__vtable;
  path.vtable = &BufferedSafeStringBase_char_vtable_probably;
  v8 = 256;
  v6.cstr = (char *)dword_60C99CE4;
  sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&path);
  *path.cstr = 0;
  path.vtable = &off_60BD94BC;
  (*((void (__fastcall **)(sead__SafeString *))v6.vtable + 3))(&v6);
  sub_608FDE40((int)&path, "Model/%s.Nin_NX_NVN.szs", v6.cstr);
  ArchiveManager_loadSzs(ArchiveManagerMaybe_instance, &v6, &path, a1, 1);
  sub_6043B2D8(ResourceMgrRelated_instance, &v6, (int)&v6, a1);
  v6.vtable = &sead__SafeStringBase__vtable;
  v6.cstr = (char *)dword_60C99CEC;
  path.cstr = v9;
  path.vtable = &BufferedSafeStringBase_char_vtable_probably;
  v8 = 256;
  sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&path);
  *path.cstr = 0;
  path.vtable = &off_60BD94BC;
  (*((void (__fastcall **)(sead__SafeString *))v6.vtable + 3))(&v6);
  sub_608FDE40((int)&path, "Model/%s.Nin_NX_NVN.szs", v6.cstr);
  ArchiveManager_loadSzs(ArchiveManagerMaybe_instance, &v6, &path, a1, 1);
  sub_6043B2D8(ResourceMgrRelated_instance, &v6, (int)&v6, a1);
  v6.vtable = &sead__SafeStringBase__vtable;
  v6.cstr = (char *)dword_60C99CF4;
  path.cstr = v9;
  path.vtable = &BufferedSafeStringBase_char_vtable_probably;
  v8 = 256;
  sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&path);
  *path.cstr = 0;
  path.vtable = &off_60BD94BC;
  (*((void (__fastcall **)(sead__SafeString *))v6.vtable + 3))(&v6);
  sub_608FDE40((int)&path, "Model/%s.Nin_NX_NVN.szs", v6.cstr);
  ArchiveManager_loadSzs(ArchiveManagerMaybe_instance, &v6, &path, a1, 1);
  sub_6043B2D8(ResourceMgrRelated_instance, &v6, (int)&v6, a1);
  v6.vtable = &sead__SafeStringBase__vtable;
  v6.cstr = (char *)dword_60C99CFC;
  path.vtable = &BufferedSafeStringBase_char_vtable_probably;
  path.cstr = v9;
  v8 = 256;
  sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&path);
  *path.cstr = 0;
  path.vtable = &off_60BD94BC;
  (*((void (__fastcall **)(sead__SafeString *))v6.vtable + 3))(&v6);
  sub_608FDE40((int)&path, "Model/%s.Nin_NX_NVN.szs", v6.cstr);
  ArchiveManager_loadSzs(ArchiveManagerMaybe_instance, &v6, &path, a1, 1);
  sub_6043B2D8(ResourceMgrRelated_instance, &v6, (int)&v6, a1);
  path.cstr = v9;
  v5.vtable = &sead__SafeStringBase__vtable;
  v5.cstr = "balloon";
  path.vtable = &BufferedSafeStringBase_char_vtable_probably;
  v8 = 256;
  sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&path);
  *path.cstr = 0;
  path.vtable = &off_60BD94BC;
  (*((void (__fastcall **)(sead__SafeString *))v5.vtable + 3))(&v5);
  sub_608FDE40((int)&path, "Model/%s.Nin_NX_NVN.szs", v5.cstr);
  ArchiveManager_loadSzs(ArchiveManagerMaybe_instance, &v5, &path, a1, 1);
  sub_6043B2D8(ResourceMgrRelated_instance, &v5, (int)&v5, a1);
  for ( i = 0; i != 10; ++i )
  {
    v4.vtable = &sead__SafeStringBase__vtable;
    v4.cstr = (char *)dword_60C99C34[2 * i + 1];
    path.cstr = v9;
    path.vtable = &BufferedSafeStringBase_char_vtable_probably;
    v8 = 256;
    sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&path);
    *path.cstr = 0;
    path.vtable = &off_60BD94BC;
    (*((void (__fastcall **)(sead__SafeString *))v4.vtable + 3))(&v4);
    sub_608FDE40((int)&path, "Model/%s.Nin_NX_NVN.szs", v4.cstr);
    ArchiveManager_loadSzs(ArchiveManagerMaybe_instance, &v4, &path, a1, 1);
    result = sub_6043B2D8(ResourceMgrRelated_instance, &v4, (int)&v4, a1);
  }
  return result;
}
