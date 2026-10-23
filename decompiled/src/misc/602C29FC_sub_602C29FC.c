/* sub_602C29FC
 * address: 0x602C29FC   size: 144   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_602C29FC(_DWORD *a1, int a2, int a3)
{
  Actor *v6; // r7
  unsigned int v7; // r1
  Actor *v8; // r0

  v6 = *(Actor **)(a3 + 64);
  if ( Actor__getProfileId(v6) == 392
    && (v7 = sub_602EF2C8(v6)) != 0
    && (v8 = (Actor *)ActorMgrRelated_getById(ActorMgr__instance + 27168, v7), Actor__getProfileId(v8) == 805) )
  {
    return 0;
  }
  else
  {
    return Enemy__collisionThrowableObject(a1, a2, a3);
  }
}
