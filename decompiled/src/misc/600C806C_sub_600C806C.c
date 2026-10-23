/* sub_600C806C
 * address: 0x600C806C   size: 136   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_600C806C(_DWORD *a1)
{
  _BYTE *v2; // r0
  ActorBuildInfo v4; // [sp+0h] [bp-40h] BYREF

  memset(&v4, 0, sizeof(v4));
  v4.profile = Profile__get(0x2D0u);
  v2 = ActorMgr__create((void *)ActorMgr__instance, &v4, 0);
  if ( v2 )
    a1[1543] = *((_DWORD *)v2 + 2);
  a1[1555] = 0;
  a1[1554] = 0;
  return StateMgr__changeState((StateMgr *)(a1 + 1561), (StateBase *)&dword_60C83F60);
}
