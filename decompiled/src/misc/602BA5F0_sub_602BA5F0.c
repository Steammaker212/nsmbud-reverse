/* sub_602BA5F0
 * address: 0x602BA5F0   size: 320   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602BA5F0(int a1, ActorBuildInfo *a2)
{
  Enemy__ctor((Enemy *)a1, a2);
  *(_DWORD *)a1 = off_60BE43F8;
  FIELD_U32(a1, 6300) = 0;
  FIELD_U32(a1, 6304) = 0;
  FIELD_U8(a1, 6308) = 0;
  memset((void *)(a1 + 6324), 0, 36);
  FIELD_U16(a1, 6360) = 257;
  sub_602A8564((_DWORD *)(a1 + 6364), FIELD_U32(a1, 8));
  sub_602A40A0((_DWORD *)(a1 + 6400), FIELD_U32(a1, 8));
  FIELD_U32(a1, 6488) = 0;
  FIELD_U32(a1, 6492) = -1;
  EffectData_ctor((EffectData *)(a1 + 6436));
  FIELD_U32(a1, 6552) = 0;
  FIELD_U32(a1, 6556) = -1;
  EffectData_ctor((EffectData *)(a1 + 6500));
  FIELD_U32(a1, 6616) = 0;
  FIELD_U32(a1, 6620) = -1;
  EffectData_ctor((EffectData *)(a1 + 6564));
  FIELD_U32(a1, 6628) = &ActorScaler_vtable;
  FIELD_U32(a1, 6632) = 1065353216;
  FIELD_U32(a1, 6636) = 1065353216;
  FIELD_U32(a1, 6640) = 1065353216;
  FIELD_U32(a1, 6644) = 1065353216;
  FIELD_U32(a1, 6648) = 0;
  FIELD_U32(a1, 6652) = 0;
  FIELD_U32(a1, 6656) = a1;
  ActiveCollider_ctor((ActiveCollider *)(a1 + 6660));
  FIELD_U32(a1, 6964) = off_60BE46B8;
  return a1;
}
