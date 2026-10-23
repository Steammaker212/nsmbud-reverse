/* Actor_parentchild_obuje_parent_build
 * address: 0x606ADB64   size: 500   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_parentchild_obuje_parent_build(ActorBuildInfo *a1)
{
  int v2; // r4

  v2 = operator_new(0x18C8u);
  StateActor_ctor((StateActor *)v2, a1);
  *(_DWORD *)v2 = off_60C1ABBC;
  FIELD_U8(v2, 6106) = 0;
  FIELD_U32(v2, 6100) = 0;
  FIELD_U16(v2, 6104) = 0;
  FIELD_U8(v2, 6114) = 0;
  FIELD_U16(v2, 6112) = 0;
  FIELD_U32(v2, 6108) = 0;
  FIELD_U8(v2, 6122) = 0;
  FIELD_U16(v2, 6120) = 0;
  FIELD_U32(v2, 6116) = 0;
  FIELD_U8(v2, 6130) = 0;
  FIELD_U16(v2, 6128) = 0;
  FIELD_U32(v2, 6124) = 0;
  FIELD_U8(v2, 6138) = 0;
  FIELD_U16(v2, 6136) = 0;
  FIELD_U32(v2, 6132) = 0;
  FIELD_U8(v2, 6146) = 0;
  FIELD_U16(v2, 6144) = 0;
  FIELD_U32(v2, 6140) = 0;
  FIELD_U8(v2, 6154) = 0;
  FIELD_U16(v2, 6152) = 0;
  FIELD_U32(v2, 6148) = 0;
  FIELD_U8(v2, 6162) = 0;
  FIELD_U16(v2, 6160) = 0;
  FIELD_U32(v2, 6156) = 0;
  FIELD_U8(v2, 6170) = 0;
  FIELD_U16(v2, 6168) = 0;
  FIELD_U32(v2, 6164) = 0;
  FIELD_U8(v2, 6178) = 0;
  FIELD_U16(v2, 6176) = 0;
  FIELD_U32(v2, 6172) = 0;
  FIELD_U8(v2, 6186) = 0;
  FIELD_U16(v2, 6184) = 0;
  FIELD_U32(v2, 6180) = 0;
  FIELD_U8(v2, 6194) = 0;
  FIELD_U16(v2, 6192) = 0;
  FIELD_U32(v2, 6188) = 0;
  FIELD_U8(v2, 6202) = 0;
  FIELD_U16(v2, 6200) = 0;
  FIELD_U32(v2, 6196) = 0;
  FIELD_U8(v2, 6210) = 0;
  FIELD_U16(v2, 6208) = 0;
  FIELD_U32(v2, 6204) = 0;
  FIELD_U8(v2, 6218) = 0;
  FIELD_U16(v2, 6216) = 0;
  FIELD_U32(v2, 6212) = 0;
  FIELD_U8(v2, 6226) = 0;
  FIELD_U16(v2, 6224) = 0;
  FIELD_U32(v2, 6220) = 0;
  sub_606BB7B8(v2 + 6228);
  FIELD_U32(v2, 6336) = 0;
  FIELD_U32(v2, 6332) = 0;
  FIELD_U32(v2, 6328) = 0;
  FIELD_U32(v2, 6324) = 0;
  FIELD_U32(v2, 6340) = 1065353216;
  return v2;
}
