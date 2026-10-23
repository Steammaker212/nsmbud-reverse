/* sub_60128E08
 * address: 0x60128E08   size: 288   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60128E08(_DWORD *a1)
{
  float v2; // s2
  int v3; // r7
  int v4; // r5
  ActorBuildInfo buildInfo; // [sp+4h] [bp-44h] BYREF

  sub_60127E20((int)a1);
  memset(&buildInfo.settings2, 0, 40);
  *(_QWORD *)&buildInfo.position.x = ((double (__fastcall *)(_DWORD *))*(_DWORD *)(*a1 + 1152))(a1);
  buildInfo.position.z = v2;
  v3 = 0;
  buildInfo.profile = Profile__get(0x2BDu);
  buildInfo.settings1 = 0;
  v4 = 1;
  if ( !(*(int (__fastcall **)(_DWORD *))(*a1 + 716))(a1) )
    v4 = (*(int (__fastcall **)(_DWORD *))(*a1 + 720))(a1);
  a1[2037] = *((_DWORD *)ActorMgr__create((void *)ActorMgr__instance, &buildInfo, 0) + 2);
  buildInfo.settings1 |= 1u;
  a1[2038] = *((_DWORD *)ActorMgr__create((void *)ActorMgr__instance, &buildInfo, 0) + 2);
  if ( !v4 )
  {
    buildInfo.settings1 = buildInfo.settings1 & 0x11111110 | 2;
    v3 = *((_DWORD *)ActorMgr__create((void *)ActorMgr__instance, &buildInfo, 0) + 2);
  }
  a1[2039] = v3;
  return 8156;
}
