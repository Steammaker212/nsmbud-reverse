/* Model_s_Nin_NX_NVN_szs_ref
 * address: 0x6023446C   size: 136   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall Model_s_Nin_NX_NVN_szs_ref(void *a1)
{
  int v2; // r6
  int v3; // r3
  sead__SafeString v5[37]; // [sp+8h] [bp-128h] BYREF

  v2 = ArchiveManagerMaybe_instance;
  (*(void (__fastcall **)(int *))(dword_60C8D938 + 12))(&dword_60C8D938);
  sead_SomeString_sprtintf(v5, "Model/%s.Nin_NX_NVN.szs", dword_60C8D93C, v3);
  ArchiveManager_loadSzs(v2, (sead__SafeString *)&dword_60C8D938, v5, a1, 1);
  return sub_6043B2D8(ResourceMgrRelated_instance, &dword_60C8D938, (int)&dword_60C8D938, a1);
}
