/* sub_601424B4
 * address: 0x601424B4   size: 276   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateActor *__fastcall sub_601424B4(StateActor *a1, ActorBuildInfo *a2)
{
  StateActor_ctor(a1, a2);
  FIELD_U32(a1, 0x0) = (int)off_60BD3600;
  a1[1]._._._.settings1 = 0;
  *(_DWORD *)&a1[1]._._._.field_10 = 0;
  a1[1]._._._.profile = 0;
  a1[1]._._._.id = 0;
  a1[1]._._._.heap = 0;
  a1[1]._._._.vtable = 0;
  sub_6000BAC8(&a1[1]._._._.settigns2, FIELD_U32(a1, 0x8));
  a1[1]._._._.settigns2 = (int)off_60BD35A8;
  sub_6000B63C(&a1[1]._._._.field_3C, FIELD_U32(a1, 0x8));
  a1[1]._._._.field_3C = (int)off_60BD35DC;
  LightMask__ctor((RevealMaskRelated *)&a1[1]._._.field_60);
  a1[1]._._.maxSpeed.y = 120.0;
  a1[1]._._.maxSpeed.z = 0.0;
  a1[1]._._.scale.x = 0.0;
  a1[1]._._.scale.y = 0.0;
  EffectWrapper_ctor((EffectWrapper *)&a1[1]._._.scale.z);
  LODWORD(a1[1]._._.scale.z) = off_60BC1450;
  LightSource__ctor((LightSource *)&a1[1]._._.aCollider.field_44);
  ActiveCollider_ctor((ActiveCollider *)&a1[1]._._.aCollider.info.category);
  a1[1]._._.field_278 = (int)off_60BD3714;
  return a1;
}
