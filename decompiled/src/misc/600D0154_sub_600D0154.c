/* sub_600D0154
 * address: 0x600D0154   size: 404   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600D0154(int a1, ActorBuildInfo *a2)
{
  Enemy__ctor((Enemy *)a1, a2);
  *(_DWORD *)a1 = off_60BCB52C;
  FIELD_U32(a1, 6312) = 0;
  FIELD_U32(a1, 6308) = 0;
  FIELD_U32(a1, 6300) = 0;
  FIELD_U32(a1, 6304) = 0;
  CircularCollider_ctor((ColliderBase *)(a1 + 6336));
  FIELD_U32(a1, 6940) = 0;
  memset((void *)(a1 + 6772), 0, 72);
  FIELD_U8(a1, 6958) = 0;
  FIELD_U16(a1, 6956) = 0;
  FIELD_U32(a1, 6952) = 0;
  FIELD_U32(a1, 6972) = 0;
  FIELD_U32(a1, 6968) = 0;
  FIELD_U32(a1, 6964) = 0;
  FIELD_U32(a1, 6960) = 0;
  FIELD_U32(a1, 6976) = -1;
  FIELD_U8(a1, 6980) = 0;
  FIELD_U32(a1, 6984) = 0;
  FIELD_U8(a1, 6988) = 0;
  FIELD_U32(a1, 6992) = 0;
  FIELD_U8(a1, 6996) = 0;
  FIELD_U8(a1, 6997) = 0;
  FIELD_U32(a1, 7000) = 0;
  FIELD_U32(a1, 7004) = 0;
  MovingSoundActor_ctor((MovingSoundActor *)(a1 + 7008), 0, 1);
  FIELD_U32(a1, 7008) = off_60BC19B4;
  FIELD_U32(a1, 7316) = &ActorScaler_vtable;
  FIELD_U32(a1, 7320) = 1065353216;
  FIELD_U32(a1, 7324) = 1065353216;
  FIELD_U32(a1, 7328) = 1065353216;
  FIELD_U32(a1, 7332) = 1065353216;
  FIELD_U32(a1, 7336) = 0;
  FIELD_U32(a1, 7340) = 0;
  FIELD_U32(a1, 7344) = a1;
  ActiveCollider_ctor((ActiveCollider *)(a1 + 7348));
  FIELD_U32(a1, 7652) = off_60BCB8B0;
  FIELD_U32(a1, 6944) = 0;
  FIELD_U32(a1, 6948) = 0;
  return a1;
}
