/* sub_604C8564
 * address: 0x604C8564   size: 852   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_604C8564(int a1)
{
  int v1; // r1
  float v2; // s2
  float v3; // s0
  int v4; // r1
  int v5; // r1
  int v6; // r1
  int v7; // r1
  int v8; // r1
  int v9; // r1

  v1 = FIELD_U32(a1, 13868);
  v2 = FIELD_F32(a1, 6412) + -640.0;
  v3 = -(float)(FIELD_F32(a1, 6416) + -360.0);
  if ( (FIELD_U8(v1, 64) & 1) != 0
    && FIELD_U8(v1, 66) == 255
    && FIELD_F32(a1, 14028) <= v2
    && v2 <= FIELD_F32(a1, 14036)
    && FIELD_F32(a1, 14032) <= v3 )
  {
    v4 = 1;
    if ( FIELD_F32(a1, 14040) >= v3 )
      return v4;
  }
  v5 = FIELD_U32(a1, 13872);
  if ( (FIELD_U8(v5, 64) & 1) != 0
    && FIELD_U8(v5, 66) == 255
    && FIELD_F32(a1, 14044) <= v2
    && v2 <= FIELD_F32(a1, 14052)
    && FIELD_F32(a1, 14048) <= v3 )
  {
    v4 = 1;
    if ( FIELD_F32(a1, 14056) >= v3 )
      return v4;
  }
  v6 = FIELD_U32(a1, 13876);
  if ( (FIELD_U8(v6, 64) & 1) != 0
    && FIELD_U8(v6, 66) == 255
    && FIELD_F32(a1, 14060) <= v2
    && v2 <= FIELD_F32(a1, 14068)
    && FIELD_F32(a1, 14064) <= v3 )
  {
    v4 = 1;
    if ( FIELD_F32(a1, 14072) >= v3 )
      return v4;
  }
  v7 = FIELD_U32(a1, 13880);
  if ( (FIELD_U8(v7, 64) & 1) != 0
    && FIELD_U8(v7, 66) == 255
    && FIELD_F32(a1, 14076) <= v2
    && v2 <= FIELD_F32(a1, 14084)
    && FIELD_F32(a1, 14080) <= v3 )
  {
    v4 = 1;
    if ( FIELD_F32(a1, 14088) >= v3 )
      return v4;
  }
  v8 = FIELD_U32(a1, 13884);
  if ( (FIELD_U8(v8, 64) & 1) != 0
    && FIELD_U8(v8, 66) == 255
    && FIELD_F32(a1, 14092) <= v2
    && v2 <= FIELD_F32(a1, 14100)
    && FIELD_F32(a1, 14096) <= v3 )
  {
    v4 = 1;
    if ( FIELD_F32(a1, 14104) >= v3 )
      return v4;
  }
  v9 = FIELD_U32(a1, 13888);
  if ( (FIELD_U8(v9, 64) & 1) == 0
    || FIELD_U8(v9, 66) != 255
    || FIELD_F32(a1, 14108) > v2
    || v2 > FIELD_F32(a1, 14116)
    || FIELD_F32(a1, 14112) > v3 )
  {
    return 0;
  }
  return FIELD_F32(a1, 14120) >= v3;
}
