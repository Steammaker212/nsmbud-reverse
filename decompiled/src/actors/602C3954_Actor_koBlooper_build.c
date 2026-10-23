/* Actor_koBlooper_build
 * address: 0x602C3954   size: 424   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_koBlooper_build(ActorBuildInfo *a1)
{
  int v2; // r4
  int v3; // r1
  int v4; // r0
  int v5; // r2

  v2 = operator_new(0x2650u);
  Enemy__ctor((Enemy *)v2, a1);
  *(_DWORD *)v2 = off_60BE4F9C;
  FIELD_U32(v2, 6320) = 0;
  FIELD_U32(v2, 6316) = 0;
  FIELD_U32(v2, 6312) = 0;
  FIELD_U32(v2, 6308) = 0;
  FIELD_U32(v2, 6304) = 0;
  FIELD_U32(v2, 6300) = 0;
  FIELD_U16(v2, 6324) = 257;
  FIELD_U16(v2, 6328) = 0;
  FIELD_U16(v2, 6326) = 0;
  FIELD_U16(v2, 6330) = 0;
  FIELD_U8(v2, 6332) = -1;
  FIELD_U8(v2, 6333) = 0;
  FIELD_U8(v2, 6334) = 0;
  FIELD_U32(v2, 6336) = 0;
  FIELD_U32(v2, 6340) = &ActorScaler_vtable;
  FIELD_U32(v2, 6344) = 1065353216;
  FIELD_U32(v2, 6348) = 1065353216;
  FIELD_U32(v2, 6352) = 1065353216;
  FIELD_U32(v2, 6356) = 1065353216;
  FIELD_U32(v2, 6360) = 0;
  FIELD_U32(v2, 6364) = 0;
  FIELD_U32(v2, 6368) = v2;
  sub_602A40A0((_DWORD *)(v2 + 6372), FIELD_U32(v2, 8));
  v3 = 0;
  v4 = v2 + 6444;
  do
  {
    v5 = v4 + v3;
    *(_DWORD *)(v5 - 24) = 0;
    *(_DWORD *)(v5 - 20) = 0;
    *(_DWORD *)(v5 - 16) = 0;
    *(_DWORD *)(v4 + v3) = 0;
    v3 += 48;
    FIELD_U32(v5, 4) = 0;
    FIELD_U32(v5, 8) = 0;
  }
  while ( v3 != 3072 );
  FIELD_U8(v2, 9485) = 0;
  FIELD_U8(v2, 9486) = 0;
  FIELD_U32(v2, 9488) = 0;
  FIELD_U32(v2, 9492) = 0;
  FIELD_U32(v2, 9496) = 0;
  ActiveCollider_ctor((ActiveCollider *)(v2 + 9500));
  FIELD_U32(v2, 9804) = off_60BE5214;
  FIELD_U32(v2, 9496) = 0;
  FIELD_U32(v2, 9492) = 0;
  FIELD_U32(v2, 9488) = 0;
  return v2;
}
