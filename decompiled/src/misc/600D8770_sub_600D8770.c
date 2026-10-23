/* sub_600D8770
 * address: 0x600D8770   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600D8770(int *a1)
{
  int v2; // r6
  float v3; // s2
  ActorBuildInfo v5; // [sp+4h] [bp-3Ch] BYREF

  v2 = a1[1781];
  memset(&v5.settings2, 0, 40);
  v5.settings1 = v2;
  v5.parentId = a1[2];
  v5.profile = Profile__get(0x2B7u);
  *(_QWORD *)&v5.position.x = ((double (__fastcall *)(int *))*(_DWORD *)(*a1 + 1152))(a1);
  v5.position.z = v3;
  return *((_DWORD *)ActorMgr__create((void *)ActorMgr__instance, &v5, 0) + 2);
}
