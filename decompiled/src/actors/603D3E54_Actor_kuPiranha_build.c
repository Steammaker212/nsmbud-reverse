/* Actor_kuPiranha_build
 * address: 0x603D3E54   size: 288   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_kuPiranha_build(ActorBuildInfo *a1)
{
  int v2; // r4

  v2 = operator_new(0x1978u);
  Enemy__ctor((Enemy *)v2, a1);
  *(_DWORD *)v2 = off_60BF7E40;
  FIELD_U32(v2, 6300) = &off_60BF80E8;
  FIELD_U32(v2, 6304) = v2;
  FIELD_U8(v2, 6384) = 0;
  memset((void *)(v2 + 6308), 0, 72);
  sub_602A8564((_DWORD *)(v2 + 6388), FIELD_U32(v2, 8));
  sub_602A40A0((_DWORD *)(v2 + 6424), FIELD_U32(v2, 8));
  FIELD_U8(v2, 6476) = 0;
  FIELD_U32(v2, 6472) = 0;
  FIELD_U32(v2, 6468) = 0;
  FIELD_U32(v2, 6464) = 0;
  FIELD_U32(v2, 6460) = 0;
  FIELD_U32(v2, 6480) = &ActorScaler_vtable;
  FIELD_U32(v2, 6484) = 1065353216;
  FIELD_U32(v2, 6488) = 1065353216;
  FIELD_U32(v2, 6492) = 1065353216;
  FIELD_U32(v2, 6496) = 1065353216;
  FIELD_U32(v2, 6500) = 0;
  FIELD_U32(v2, 6504) = 0;
  FIELD_U32(v2, 6508) = v2;
  FIELD_U32(v2, 6512) = 0;
  FIELD_U32(v2, 6516) = off_60BF80FC;
  return v2;
}
