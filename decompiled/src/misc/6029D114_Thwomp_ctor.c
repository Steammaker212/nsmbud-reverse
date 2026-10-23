/* Thwomp_ctor
 * address: 0x6029D114   size: 224   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Thwomp_ctor(ActorBuildInfo *a1)
{
  int v2; // r4

  v2 = operator_new(0x1A90u);
  Enemy__ctor((Enemy *)v2, a1);
  *(_DWORD *)v2 = Thwomp_vtable;
  memset((void *)(v2 + 6300), 0, 52);
  EffectWrapper_ctor((EffectWrapper *)(v2 + 6352));
  FIELD_U32(v2, 6352) = off_60BC1450;
  ActiveCollider_ctor((ActiveCollider *)(v2 + 6456));
  FIELD_U32(v2, 6760) = off_60BE20C8;
  FIELD_U32(v2, 6764) = 0;
  FIELD_U32(v2, 6768) = &ActorScaler_vtable;
  FIELD_U32(v2, 6772) = 1065353216;
  FIELD_U32(v2, 6776) = 1065353216;
  FIELD_U32(v2, 6780) = 1065353216;
  FIELD_U32(v2, 6784) = 1065353216;
  FIELD_U32(v2, 6788) = 0;
  FIELD_U32(v2, 6792) = 0;
  FIELD_U32(v2, 6796) = v2;
  return v2;
}
