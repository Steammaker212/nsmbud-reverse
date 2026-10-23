/* sub_603BECA4
 * address: 0x603BECA4   size: 216   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603BECA4(int a1, ActorBuildInfo *a2)
{
  Enemy__ctor((Enemy *)a1, a2);
  *(_DWORD *)a1 = off_60BF647C;
  FIELD_U32(a1, 6312) = 0;
  FIELD_U32(a1, 6308) = 0;
  FIELD_U32(a1, 6304) = 0;
  FIELD_U32(a1, 6300) = 0;
  ActiveCollider_ctor((ActiveCollider *)(a1 + 6364));
  FIELD_U16(a1, 6676) = 0;
  FIELD_U32(a1, 6672) = 0;
  FIELD_U32(a1, 6668) = 0;
  FIELD_U16(a1, 6692) = 0;
  FIELD_U32(a1, 6688) = 0;
  FIELD_U32(a1, 6684) = 0;
  FIELD_U32(a1, 6680) = 0;
  sub_602A40A0((_DWORD *)(a1 + 6696), FIELD_U32(a1, 8));
  EffectWrapper_ctor((EffectWrapper *)(a1 + 6732));
  FIELD_U32(a1, 6732) = off_60BC1450;
  LightSource__ctor((LightSource *)(a1 + 6836));
  FIELD_U32(a1, 6908) = off_60BF6720;
  return a1;
}
