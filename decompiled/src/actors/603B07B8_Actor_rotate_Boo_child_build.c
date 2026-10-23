/* Actor_rotate_Boo_child_build
 * address: 0x603B07B8   size: 288   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_rotate_Boo_child_build(ActorBuildInfo *a1)
{
  int v2; // r4

  v2 = operator_new(0x1A00u);
  Enemy__ctor((Enemy *)v2, a1);
  *(_DWORD *)v2 = off_60BF5158;
  FIELD_U32(v2, 6304) = 0;
  FIELD_U32(v2, 6308) = 0;
  FIELD_U32(v2, 6312) = 0;
  EffectWrapper_ctor((EffectWrapper *)(v2 + 6316));
  FIELD_U32(v2, 6316) = off_60BC1450;
  memset((void *)(v2 + 6420), 0, 43);
  memset((void *)(v2 + 6464), 0, 33);
  sub_602A40A0((_DWORD *)(v2 + 6500), FIELD_U32(v2, 8));
  LightSource__ctor((LightSource *)(v2 + 6536));
  FIELD_U8(v2, 6608) = 0;
  FIELD_U8(v2, 6609) = 0;
  FIELD_U32(v2, 6612) = 0;
  FIELD_U32(v2, 6616) = &ActorScaler_vtable;
  FIELD_U32(v2, 6620) = 1065353216;
  FIELD_U32(v2, 6624) = 1065353216;
  FIELD_U32(v2, 6628) = 1065353216;
  FIELD_U32(v2, 6632) = 1065353216;
  FIELD_U32(v2, 6636) = 0;
  FIELD_U32(v2, 6640) = 0;
  FIELD_U32(v2, 6644) = v2;
  FIELD_U32(v2, 6648) = off_60BF5400;
  return v2;
}
