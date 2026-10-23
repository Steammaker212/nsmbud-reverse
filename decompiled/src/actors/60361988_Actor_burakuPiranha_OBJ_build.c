/* Actor_burakuPiranha_OBJ_build
 * address: 0x60361988   size: 276   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_burakuPiranha_OBJ_build(ActorBuildInfo *a1)
{
  int v2; // r4

  v2 = operator_new(0x1BA8u);
  Enemy__ctor((Enemy *)v2, a1);
  *(_DWORD *)v2 = off_60BEF6C8;
  FIELD_U32(v2, 6320) = 0;
  FIELD_U32(v2, 6316) = 0;
  FIELD_U32(v2, 6312) = 0;
  FIELD_U32(v2, 6308) = 0;
  FIELD_U32(v2, 6300) = 0;
  FIELD_U32(v2, 6304) = 0;
  RectCollider_ctor((RectCollider *)(v2 + 6328));
  FIELD_U32(v2, 6328) = off_60BC30D8;
  FIELD_U8(v2, 7038) = 0;
  FIELD_U16(v2, 7036) = 0;
  FIELD_U32(v2, 7032) = 0;
  FIELD_U32(v2, 7028) = 0;
  FIELD_U32(v2, 7024) = 0;
  FIELD_U32(v2, 7040) = &ActorScaler_vtable;
  FIELD_U32(v2, 7044) = 1065353216;
  FIELD_U32(v2, 7048) = 1065353216;
  FIELD_U32(v2, 7052) = 1065353216;
  FIELD_U32(v2, 7056) = 1065353216;
  FIELD_U32(v2, 7060) = 0;
  FIELD_U32(v2, 7064) = 0;
  FIELD_U32(v2, 7068) = v2;
  FIELD_U32(v2, 7072) = off_60BEF944;
  return v2;
}
