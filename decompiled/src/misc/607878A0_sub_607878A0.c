/* sub_607878A0
 * address: 0x607878A0   size: 372   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int sub_607878A0()
{
  _BOOL4 v0; // r1
  int result; // r0
  ActorBuildInfo v2; // [sp+0h] [bp-48h] BYREF

  v0 = sub_6040E538(LevelInfo_instance);
  result = 0;
  if ( v0 )
  {
    memset(&v2.settings2, 0, 40);
    v2.profile = Profile__get(0x1BCu);
    memset(&v2.position, 0, sizeof(v2.position));
    v2.settings1 = 16;
    ActorMgr__create((void *)ActorMgr__instance, &v2, 0);
    memset(&v2, 0, sizeof(v2));
    v2.profile = Profile__get(0x1BCu);
    memset(&v2.position, 0, sizeof(v2.position));
    v2.settings1 = 273;
    ActorMgr__create((void *)ActorMgr__instance, &v2, 0);
    memset(&v2, 0, sizeof(v2));
    v2.profile = Profile__get(0x1BCu);
    memset(&v2.position, 0, sizeof(v2.position));
    v2.settings1 = 530;
    ActorMgr__create((void *)ActorMgr__instance, &v2, 0);
    memset(&v2, 0, sizeof(v2));
    v2.profile = Profile__get(0x1BCu);
    memset(&v2.position, 0, sizeof(v2.position));
    v2.settings1 = 1043;
    ActorMgr__create((void *)ActorMgr__instance, &v2, 0);
    return 1;
  }
  return result;
}
