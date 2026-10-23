/* Actor_iron_RDashspawn_range_narrow_build
 * address: 0x6070876C   size: 420   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_iron_RDashspawn_range_narrow_build(ActorBuildInfo *a1)
{
  int v2; // r4

  v2 = operator_new(0x1BE0u);
  BlockCoinBase__ctor((_DWORD *)v2, a1);
  *(_DWORD *)v2 = off_60C210B8;
  FIELD_U32(v2, 7020) = 0;
  memset((void *)(v2 + 6972), 0, 45);
  FIELD_U8(v2, 7024) = 1;
  FIELD_U8(v2, 7025) = 0;
  FIELD_U32(v2, 7028) = 0;
  FIELD_U16(v2, 7032) = 256;
  FIELD_U16(v2, 7048) = 0;
  FIELD_U16(v2, 7046) = 0;
  FIELD_U16(v2, 7044) = 0;
  FIELD_U16(v2, 7042) = 0;
  FIELD_U16(v2, 7040) = 0;
  FIELD_U16(v2, 7038) = 0;
  FIELD_U16(v2, 7034) = 0;
  FIELD_U16(v2, 7050) = 0;
  FIELD_U16(v2, 7036) = 0;
  FIELD_U8(v2, 7052) = 1;
  FIELD_U8(v2, 7068) = 0;
  FIELD_U32(v2, 7064) = 0;
  FIELD_U32(v2, 7060) = 0;
  FIELD_U32(v2, 7056) = 0;
  FIELD_U32(v2, 7072) = &ActorScaler_vtable;
  FIELD_U32(v2, 7076) = 1065353216;
  FIELD_U32(v2, 7080) = 1065353216;
  FIELD_U32(v2, 7084) = 1065353216;
  FIELD_U32(v2, 7088) = 1065353216;
  FIELD_U32(v2, 7092) = 0;
  FIELD_U32(v2, 7096) = 0;
  FIELD_U32(v2, 7100) = v2;
  FIELD_U32(v2, 7104) = off_60C21230;
  FIELD_U32(v2, 7108) = 0;
  FIELD_U32(v2, 7112) = 0;
  FIELD_U32(v2, 7116) = 1028443341;
  FIELD_U32(v2, 7120) = 1008981770;
  FIELD_U32(v2, 7124) = 1036831949;
  FIELD_U32(v2, 7128) = 0x40000000;
  FIELD_U32(v2, 7132) = 0;
  return v2;
}
