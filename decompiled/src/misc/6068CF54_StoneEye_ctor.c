/* StoneEye_ctor
 * address: 0x6068CF54   size: 456   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall StoneEye_ctor(ActorBuildInfo *a1)
{
  int v2; // r4

  v2 = operator_new(0x1AB8u);
  sub_606CA0DC((StateActor *)v2, a1);
  *(_DWORD *)v2 = StoneEye_vtable;
  FIELD_U8(v2, 6162) = 0;
  FIELD_U16(v2, 6160) = 0;
  FIELD_U32(v2, 6152) = 0;
  FIELD_U32(v2, 6156) = 0;
  FIELD_U32(v2, 6176) = 0;
  FIELD_U32(v2, 6172) = 0;
  FIELD_U32(v2, 6168) = 0;
  FIELD_U32(v2, 6164) = 0;
  FIELD_U32(v2, 6180) = -1023410176;
  FIELD_U32(v2, 6184) = 0;
  FIELD_U32(v2, 6188) = 1065353216;
  FIELD_U32(v2, 6192) = 1065353216;
  FIELD_U32(v2, 6216) = 0;
  FIELD_U32(v2, 6212) = 0;
  FIELD_U32(v2, 6208) = 0;
  FIELD_U32(v2, 6204) = 0;
  FIELD_U32(v2, 6200) = 0;
  FIELD_U32(v2, 6196) = 0;
  EffectWrapper_ctor((EffectWrapper *)(v2 + 6220));
  FIELD_U32(v2, 6220) = off_60BC1450;
  ShapedCollider_ctor((ShapedCollider *)(v2 + 0x18B8));
  FIELD_U32(v2, 6736) = 0;
  FIELD_U32(v2, 6740) = &sead__SafeStringBase__vtable;
  FIELD_U32(v2, 6744) = &byte_60B3BA34;
  FIELD_U8(v2, 6764) = 0;
  FIELD_U32(v2, 6760) = 0;
  FIELD_U32(v2, 6756) = 0;
  FIELD_U32(v2, 6752) = 0;
  FIELD_U32(v2, 6748) = 0;
  FIELD_U32(v2, 0x1A70) = off_60C17640;
  memset((void *)(v2 + 6772), 0, 36);
  FIELD_U32(v2, 6808) = 1036831949;
  FIELD_U16(v2, 6832) = 0;
  FIELD_U32(v2, 6828) = 0;
  FIELD_U32(v2, 6824) = 0;
  FIELD_U32(v2, 6820) = 0;
  FIELD_U32(v2, 6816) = 0;
  FIELD_U32(v2, 6812) = 0;
  FIELD_U32(v2, 0x1AB4) = off_60C17670;
  return v2;
}
