/* RollingHill_ctor
 * address: 0x606097C8   size: 136   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall RollingHill_ctor(ActorBuildInfo *a1)
{
  int v2; // r4

  v2 = operator_new(0x448u);
  StageActor__ctor((StageActor *)v2, a1);
  *(_DWORD *)v2 = RollingHill_vtable;
  FIELD_U32(v2, 644) = 0;
  CircularCollider_ctor((ColliderBase *)(v2 + 0x288));
  FIELD_U8(v2, 0x418) = 0;
  FIELD_U8(v2, 0x419) = 0;
  FIELD_U32(v2, 0x41C) = 0;
  FIELD_U32(v2, 0x420) = 0;
  FIELD_U32(v2, 0x424) = 0;
  FIELD_U32(v2, 0x428) = 1065353216;
  FIELD_U32(v2, 0x434) = 0;
  FIELD_U32(v2, 0x430) = 0;
  FIELD_U32(v2, 0x42C) = 0;
  FIELD_U32(v2, 0x438) = off_60C0F814;
  FIELD_U32(v2, 0x43C) = 0;
  FIELD_U32(v2, 0x440) = 0;
  FIELD_U32(v2, 0x444) = 0;
  return v2;
}
