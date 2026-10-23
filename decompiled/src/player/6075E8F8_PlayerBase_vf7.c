/* PlayerBase_vf7
 * address: 0x6075E8F8   size: 292   group: player
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall PlayerBase_vf7(int a1)
{
  int v2; // r5
  signed int v3; // r0
  bool v4; // zf
  int v5; // r0
  int v6; // r1
  int v7; // r3
  int v8; // r2
  unsigned int v9; // r1
  unsigned int v10; // r2
  int v11; // r0

  v2 = 0;
  FIELD_U32(a1, 1204) &= ~2u;
  FIELD_F32(a1, 108) = FIELD_F32(a1, 1300) + FIELD_F32(a1, 108);
  FIELD_F32(a1, 112) = FIELD_F32(a1, 1304) + FIELD_F32(a1, 112);
  FIELD_U32(a1, 1300) = 0;
  FIELD_U32(a1, 1304) = 0;
  FIELD_U32(a1, 1308) = 0;
  v3 = StageActor__beforeExecute((StageActor *)a1);
  v4 = v3 == 1;
  if ( v3 == 1 )
    v4 = (FIELD_U8(a1, 1204) & 4) == 0;
  if ( v4 )
  {
    sub_60154C70(a1 + 1328);
    v5 = FIELD_U32(a1, 1204) | 2;
    FIELD_U32(a1, 1204) = v5;
    v6 = FIELD_U32(a1, 1236);
    FIELD_U32(a1, 1236) = v6 & 0xFFEFFFFF;
    v7 = FIELD_U32(a1, 1220);
    FIELD_U32(a1, 1212) &= ~0x100u;
    FIELD_U32(a1, 1220) = v7 & 0xFFFFB77F;
    if ( (v6 & 0x40) != 0 )
      FIELD_U32(a1, 1236) = v6 & 0xFFEFFF9F | 0x20;
    v2 = 1;
    v8 = FIELD_U32(a1, 1216);
    v4 = (v8 & 0x800000) == 0;
    v9 = v8 & 0xFFBFFFFF;
    v10 = v8 & 0xFF3FFFFF | 0x400000;
    if ( !v4 )
      v9 = v10;
    FIELD_U32(a1, 1216) = v9;
    FIELD_U32(a1, 1224) &= ~0x10000u;
    if ( FIELD_F32(a1, 124) <= 0.0 )
      FIELD_U32(a1, 1204) = v5 & 0xFFFFFBFF;
    v11 = FIELD_U32(a1, 684);
    if ( v11 )
      FIELD_U32(a1, 684) = v11 - 1;
  }
  return v2;
}
