/* Model_s_Nin_NX_NVN_szs_ref_834E7C
 * address: 0x60834E7C   size: 148   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall Model_s_Nin_NX_NVN_szs_ref_834E7C(sead__SafeString *a1, void *a2)
{
  int v4; // r6
  signed int Szs; // r1
  signed int result; // r0
  sead__SafeString v7[36]; // [sp+4h] [bp-124h] BYREF

  v4 = ArchiveManagerMaybe_instance;
  (*((void (__fastcall **)(sead__SafeString *))a1->vtable + 3))(a1);
  sub_6017D5C0(v7, "Model/%s.Nin_NX_NVN.szs", a1->cstr);
  Szs = ArchiveManager_loadSzs(v4, a1, v7, a2, 1);
  result = 0;
  if ( Szs == 1 )
    return sub_6043B2D8(ResourceMgrRelated_instance, a1, (int)a1, 0);
  return result;
}
