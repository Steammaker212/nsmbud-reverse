/* Actor_K_K_resident_build
 * address: 0x603318B8   size: 408   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_K_K_resident_build(ActorBuildInfo *a1)
{
  int v2; // r4

  v2 = operator_new(0x1B60u);
  Enemy__ctor((Enemy *)v2, a1);
  *(_DWORD *)v2 = off_60BEC5AC;
  FIELD_U32(v2, 6300) = 5;
  FIELD_U32(v2, 6304) = &ActorScaler_vtable;
  FIELD_U32(v2, 6308) = 1065353216;
  FIELD_U32(v2, 6312) = 1065353216;
  FIELD_U32(v2, 6316) = 1065353216;
  FIELD_U32(v2, 6320) = 1065353216;
  FIELD_U32(v2, 6324) = 0;
  FIELD_U32(v2, 6328) = 0;
  FIELD_U32(v2, 6332) = v2;
  FIELD_U32(v2, 6336) = 0;
  FIELD_U32(v2, 6340) = 0;
  MovingSoundActor_ctor((MovingSoundActor *)(v2 + 6344), 0, 1);
  FIELD_U32(v2, 6344) = off_60BC19B4;
  FIELD_U32(v2, 6652) = off_60BEC884;
  ActiveCollider_ctor((ActiveCollider *)(v2 + 6656));
  FIELD_U32(v2, 6960) = 0;
  FIELD_U32(v2, 6964) = 0;
  FIELD_U32(v2, 6968) = 0;
  FIELD_U32(v2, 6972) = 1065353216;
  FIELD_U16(v2, 6992) = 0;
  FIELD_U32(v2, 6988) = 0;
  FIELD_U32(v2, 6984) = 0;
  FIELD_U32(v2, 6980) = 0;
  FIELD_U32(v2, 6976) = 0;
  FIELD_U8(v2, 6994) = -1;
  FIELD_U8(v2, 7000) = 0;
  FIELD_U8(v2, 6996) = 0;
  FIELD_U8(v2, 7007) = 0;
  FIELD_U8(v2, 7004) = 0;
  FIELD_U8(v2, 7003) = 0;
  FIELD_U8(v2, 7006) = 0;
  FIELD_U8(v2, 7005) = 0;
  FIELD_U8(v2, 6999) = 0;
  FIELD_U8(v2, 7002) = 0;
  FIELD_U8(v2, 7001) = 0;
  FIELD_U8(v2, 6995) = 0;
  FIELD_U8(v2, 6998) = 0;
  FIELD_U8(v2, 6997) = 0;
  return v2;
}
