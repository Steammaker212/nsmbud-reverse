/* sub_6013D46C
 * address: 0x6013D46C   size: 172   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6013D46C(int a1, ActorBuildInfo *a2)
{
  Enemy__ctor((Enemy *)a1, a2);
  *(_DWORD *)a1 = off_60BD2E74;
  FIELD_U32(a1, 6300) = 0;
  FIELD_U32(a1, 6304) = 0;
  EffectWrapper_ctor((EffectWrapper *)(a1 + 6308));
  FIELD_U32(a1, 6308) = off_60BC1450;
  FIELD_U32(a1, 6424) = 0;
  FIELD_U8(a1, 6422) = 0;
  FIELD_U16(a1, 6420) = 0;
  FIELD_U32(a1, 6412) = 0;
  FIELD_U32(a1, 6416) = 0;
  ActiveCollider_ctor((ActiveCollider *)(a1 + 6428));
  ActiveCollider_ctor((ActiveCollider *)(a1 + 6732));
  FIELD_U32(a1, 7036) = off_60BD31B4;
  return a1;
}
