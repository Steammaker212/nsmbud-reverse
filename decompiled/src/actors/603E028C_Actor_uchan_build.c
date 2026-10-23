/* Actor_uchan_build
 * address: 0x603E028C   size: 280   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_uchan_build(int a1)
{
  int v2; // r4

  v2 = operator_new(0x2458u);
  Actor_uchan_build_helper(v2, a1);
  *(_DWORD *)v2 = off_60BF899C;
  FIELD_U32(v2, 7556) = 0;
  FIELD_U32(v2, 7560) = 0;
  FIELD_U32(v2, 7564) = 0;
  ActiveCollider_ctor((ActiveCollider *)(v2 + 7568));
  ActiveCollider_ctor((ActiveCollider *)(v2 + 7872));
  memset((void *)(v2 + 8176), 0, 72);
  EffectWrapper_ctor((EffectWrapper *)(v2 + 8248));
  FIELD_U32(v2, 8248) = off_60BC1450;
  ActiveCollider_ctor((ActiveCollider *)(v2 + 8352));
  ActiveCollider_ctor((ActiveCollider *)(v2 + 8656));
  ActiveCollider_ctor((ActiveCollider *)(v2 + 8960));
  FIELD_U32(v2, 9264) = &ActorScaler_vtable;
  FIELD_U32(v2, 9268) = 1065353216;
  FIELD_U32(v2, 9272) = 1065353216;
  FIELD_U32(v2, 9276) = 1065353216;
  FIELD_U32(v2, 9280) = 1065353216;
  FIELD_U32(v2, 9284) = 0;
  FIELD_U32(v2, 9288) = 0;
  FIELD_U32(v2, 9292) = v2;
  FIELD_U32(v2, 9296) = off_60BF8CC8;
  return v2;
}
