/* sub_6026AD60
 * address: 0x6026AD60   size: 272   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6026AD60(ActorBuildInfo *a1)
{
  int v2; // r4

  v2 = operator_new(0x2DE0u);
  Enemy__ctor((Enemy *)v2, a1);
  *(_DWORD *)v2 = off_60BDC23C;
  FIELD_U32(v2, 6332) = 0;
  FIELD_U32(v2, 6328) = 0;
  FIELD_U32(v2, 6324) = 0;
  FIELD_U32(v2, 6320) = 0;
  FIELD_U32(v2, 6316) = 0;
  FIELD_U32(v2, 6312) = 0;
  FIELD_U32(v2, 6304) = 0;
  FIELD_U32(v2, 6308) = 0;
  FIELD_U8(v2, 6336) = 5;
  FIELD_U32(v2, 6340) = 0;
  FIELD_U32(v2, 6344) = 0;
  sub_601531B4((CollisionMgr *)(v2 + 6352));
  FIELD_U32(v2, 11704) = 0;
  FIELD_U32(v2, 11708) = &ActorScaler_vtable;
  FIELD_U32(v2, 11712) = 1065353216;
  FIELD_U32(v2, 11716) = 1065353216;
  FIELD_U32(v2, 11720) = 1065353216;
  FIELD_U32(v2, 11724) = 1065353216;
  FIELD_U32(v2, 11728) = 0;
  FIELD_U32(v2, 11732) = 0;
  FIELD_U32(v2, 11736) = v2;
  FIELD_U32(v2, 11740) = off_60BDC510;
  return v2;
}
