/* sub_6089F86C
 * address: 0x6089F86C   size: 1064   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_6089F86C(_DWORD *result, _DWORD *a2)
{
  int v2; // r12
  unsigned int v3; // r2
  int v4; // r3
  float v5; // s0
  int v6; // r2
  int v7; // r3
  float v8; // s0
  int v9; // r2
  int v10; // r3
  float v11; // s0
  int v12; // r2
  int v13; // r2
  unsigned int v14; // r1

  v2 = a2[3];
  if ( FIELD_U8(v2, 2033) )
    *result |= 8u;
  v3 = FIELD_U8(v2, 2535);
  if ( v3 <= 0x2F )
    *result |= *(_DWORD *)((char *)&unk_60B2D484 + ((v3 >> 2) & 0x3C));
  v4 = FIELD_U8(v2, 2640);
  if ( v4 == 1 )
  {
    *result |= 0x10u;
    v4 = FIELD_U8(v2, 2640);
  }
  if ( v4 == 2 )
  {
    *result |= 0x20u;
    v4 = FIELD_U8(v2, 2640);
  }
  if ( v4 == 3 )
  {
    *result |= 0x40u;
    v4 = FIELD_U8(v2, 2640);
  }
  if ( v4 == 4 )
  {
    v5 = FIELD_F32(v2, 280);
    if ( v5 > 0.0 )
    {
      v6 = 0;
      do
      {
        *(_DWORD *)(v2 + 288 + 4 * v6) = v6;
        ++v6;
        v5 = FIELD_F32(v2, 280);
      }
      while ( (float)v6 < v5 );
    }
    FIELD_F32(v2, 272) = v5;
    *result |= 0x80u;
  }
  v7 = FIELD_U8(v2, 2656);
  if ( v7 == 1 )
  {
    *result |= 0x100u;
    v7 = FIELD_U8(v2, 2656);
  }
  if ( v7 == 2 )
  {
    *result |= 0x200u;
    v7 = FIELD_U8(v2, 2656);
  }
  if ( v7 == 3 )
  {
    *result |= 0x400u;
    v7 = FIELD_U8(v2, 2656);
  }
  if ( v7 == 4 )
  {
    v8 = FIELD_F32(v2, 424);
    if ( v8 > 0.0 )
    {
      v9 = 0;
      do
      {
        *(_DWORD *)(v2 + 432 + 4 * v9) = v9;
        ++v9;
        v8 = FIELD_F32(v2, 424);
      }
      while ( (float)v9 < v8 );
    }
    FIELD_F32(v2, 416) = v8;
    *result |= 0x800u;
  }
  v10 = FIELD_U8(v2, 2672);
  if ( v10 == 1 )
  {
    *result |= 0x1000u;
    v10 = FIELD_U8(v2, 2672);
  }
  if ( v10 == 2 )
  {
    *result |= 0x2000u;
    v10 = FIELD_U8(v2, 2672);
  }
  if ( v10 == 3 )
  {
    *result |= 0x4000u;
    v10 = FIELD_U8(v2, 2672);
  }
  if ( v10 == 4 )
  {
    v11 = FIELD_F32(v2, 568);
    if ( v11 > 0.0 )
    {
      v12 = 0;
      do
      {
        *(_DWORD *)(v2 + 576 + 4 * v12) = v12;
        ++v12;
        v11 = FIELD_F32(v2, 568);
      }
      while ( (float)v12 < v11 );
    }
    FIELD_F32(v2, 560) = v11;
    *result |= 0x8000u;
  }
  if ( FIELD_U8(v2, 2221) )
    *result |= 0x10000u;
  if ( FIELD_U8(v2, 2222) )
    *result |= 0x20000u;
  if ( FIELD_U8(v2, 2223) )
    *result |= 0x40000u;
  if ( FIELD_U8(v2, 2645) )
    *result |= 0x80000u;
  if ( FIELD_U8(v2, 2646) )
    *result |= 0x100000u;
  if ( FIELD_U8(v2, 2661) )
    *result |= 0x200000u;
  if ( FIELD_U8(v2, 2662) )
    *result |= 0x400000u;
  if ( FIELD_U8(v2, 2677) )
    *result |= 0x800000u;
  if ( FIELD_U8(v2, 2678) )
    *result |= 0x1000000u;
  if ( FIELD_U8(v2, 2647) )
    *result |= 0x2000000u;
  if ( FIELD_U8(v2, 2663) )
    *result |= 0x4000000u;
  if ( FIELD_U8(v2, 2679) )
    *result |= 0x8000000u;
  if ( FIELD_U8(v2, 2227) )
    *result |= 0x10000000u;
  v13 = FIELD_U8(v2, 2220);
  if ( v13 == 1 )
  {
    *result |= 0x40000000u;
    v13 = FIELD_U8(v2, 2220);
  }
  if ( !v13 )
    *result |= 0x20000000u;
  if ( FIELD_U8(v2, 2228) )
    result[1] |= 1u;
  if ( a2[113] )
    result[1] |= 2u;
  if ( a2[114] )
    result[1] |= 0x100u;
  if ( a2[119] )
    result[1] |= 4u;
  if ( a2[115] )
    result[1] |= 8u;
  if ( a2[118] )
    result[1] |= 0x10u;
  if ( a2[116] )
    result[1] |= 0x20u;
  if ( a2[117] )
    result[1] |= 0x40u;
  if ( a2[120] )
    result[1] |= 0x80u;
  v14 = FIELD_U8(v2, 1875);
  if ( v14 <= 2 )
    result[1] |= dword_60B2D478[v14];
  return result;
}
