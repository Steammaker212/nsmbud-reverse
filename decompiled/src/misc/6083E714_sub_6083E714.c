/* sub_6083E714
 * address: 0x6083E714   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6083E714(int a1, int a2)
{
  int v2; // r0
  int v3; // r0
  int v5; // [sp+Ch] [bp-4h] BYREF

  v2 = nn__fs__QueryMountSystemDataCacheSize(&v5, a2, 2050, 0x1000000);
  v3 = MiiResource_ref(v2);
  return nn__fs__MountSystemData(v3, &unk_60CC7A68, 2050, 0x1000000, &unk_60CC7A68, v5);
}
