/* sub_6029087C
 * address: 0x6029087C   size: 260   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_6029087C(StateActor *a1)
{
  int v2; // r5
  int direction; // r6
  int z; // r9
  int v5; // r10
  int profileFlags; // r7
  ActorBuildInfo v8; // [sp+4h] [bp-6Ch] BYREF
  _DWORD v9[16]; // [sp+30h] [bp-40h] BYREF

  v9[0] = -536870912;
  v9[1] = -1610612736;
  v9[2] = 0x20000000;
  v9[3] = 1610612736;
  v9[4] = -238609294;
  v9[5] = -1908874354;
  v9[6] = 238609294;
  v9[7] = 1908874353;
  v2 = *(_DWORD *)&a1[1]._.collisionMgr[764];
  direction = FIELD_U32(a1, 0x0)._.direction;
  z = FIELD_U32(a1, 0x0)._.rotation.z;
  v5 = v9[2 * v2 + direction];
  profileFlags = a1[1]._._.profileFlags;
  memset(&v8.settings2, 0, 40);
  v8.settings1 = (direction << 8) | (16 * v2) | profileFlags;
  v8.profile = Profile__get(0x1DDu);
  v8.position = *(Vec3 *)&a1[1]._._.aCollider.createNode.prev;
  v8.field_1C = z + v5;
  v8.field_20 = 0;
  return sub_600080BC((_DWORD *)ActorMgr__instance, &v8);
}
