/* sub_60223880
 * address: 0x60223880   size: 164   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_BYTE *__fastcall sub_60223880(int a1)
{
  _BYTE *result; // r0
  bool v3; // zf
  ActorBuildInfo v4; // [sp+0h] [bp-40h] BYREF

  if ( FIELD_U32(a1, 1764) == 6 )
    sub_6022392C(a1);
  sub_60227F68(a1);
  result = *(_BYTE **)(a1 + 1764);
  v3 = result == (_BYTE *)7;
  if ( result == (_BYTE *)7 )
  {
    result = *(_BYTE **)(a1 + 1768);
    v3 = result == 0;
  }
  if ( v3 )
  {
    memset(&v4, 0, sizeof(v4));
    v4.eventId2 = 7;
    v4.field_20 = 0;
    v4.position = *(Vec3 *)(a1 + 16);
    v4.profile = Profile__get(0x364u);
    return ActorMgr__create((void *)ActorMgr__instance, &v4, 0);
  }
  return result;
}
