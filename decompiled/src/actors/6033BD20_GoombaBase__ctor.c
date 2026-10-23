/* GoombaBase__ctor
 * address: 0x6033BD20   size: 340   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall GoombaBase__ctor(int a1, ActorBuildInfo *buildInfo)
{
  Enemy__ctor((Enemy *)a1, buildInfo);
  *(_DWORD *)a1 = &GoombaBase_vtable;
  FIELD_U32(a1, 6300) = 0;
  FIELD_U32(a1, 6304) = 0;
  FIELD_U32(a1, 6308) = 0;
  sub_6040E90C(a1 + 6312, 11);
  FIELD_U32(a1, 6376) = 0;
  ActiveCollider_ctor((ActiveCollider *)(a1 + 6380));
  FIELD_U32(a1, 6684) = 0x3F800000;
  FIELD_U32(a1, 6688) = 0;
  FIELD_U32(a1, 6692) = 0x3F800000;
  FIELD_U32(a1, 6696) = 0;
  FIELD_U8(a1, 6700) = 1;
  FIELD_U32(a1, 6712) = 0;
  FIELD_U8(a1, 6706) = 0;
  FIELD_U8(a1, 6702) = 0;
  FIELD_U8(a1, 6705) = 0;
  FIELD_U8(a1, 6708) = 0;
  FIELD_U8(a1, 6707) = 0;
  FIELD_U8(a1, 6701) = 0;
  FIELD_U8(a1, 6704) = 0;
  FIELD_U8(a1, 6703) = 0;
  sub_602A8564((_DWORD *)(a1 + 6716), FIELD_U32(a1, 8));
  sub_602A40A0((_DWORD *)(a1 + 6752), FIELD_U32(a1, 8));
  FIELD_U32(a1, 6788) = &ActorScaler_vtable;
  FIELD_U32(a1, 6792) = 0x3F800000;
  FIELD_U32(a1, 6796) = 0x3F800000;
  FIELD_U32(a1, 6800) = 0x3F800000;
  FIELD_U32(a1, 6804) = 0x3F800000;
  FIELD_U32(a1, 6808) = 0;
  FIELD_U32(a1, 6812) = 0;
  FIELD_U32(a1, 6816) = a1;
  FIELD_U32(a1, 6820) = off_60BED3DC;
  return a1;
}
