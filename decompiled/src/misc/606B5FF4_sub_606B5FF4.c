/* sub_606B5FF4
 * address: 0x606B5FF4   size: 268   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606B5FF4(int a1, ActorBuildInfo *a2)
{
  MultiStateActor__ctor((MultiStateActor *)a1, a2);
  *(_DWORD *)a1 = off_60C1AF88;
  memset((void *)(a1 + 6148), 0, 35);
  FIELD_U32(a1, 6196) = 0;
  FIELD_U32(a1, 6192) = 0;
  FIELD_U32(a1, 6188) = 0;
  FIELD_U32(a1, 6184) = 0;
  sub_605D5CA0((_DWORD *)(a1 + 6200), FIELD_U32(a1, 8));
  FIELD_U32(a1, 6232) = &ActorScaler_vtable;
  FIELD_U32(a1, 6236) = 1065353216;
  FIELD_U32(a1, 6240) = 1065353216;
  FIELD_U32(a1, 6244) = 1065353216;
  FIELD_U32(a1, 6248) = 1065353216;
  FIELD_U32(a1, 6252) = 0;
  FIELD_U32(a1, 6256) = 0;
  FIELD_U32(a1, 6260) = a1;
  ActiveCollider_ctor((ActiveCollider *)(a1 + 6264));
  FIELD_U32(a1, 6568) = off_60C1B098;
  FIELD_U8(a1, 6588) = 0;
  sub_602A8564((_DWORD *)(a1 + 6592), FIELD_U32(a1, 8));
  FIELD_U32(a1, 6584) = 0;
  FIELD_U32(a1, 6580) = 0;
  FIELD_U32(a1, 6576) = 0;
  FIELD_U32(a1, 6572) = 0;
  return a1;
}
