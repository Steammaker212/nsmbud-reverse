/* sub_6055576C
 * address: 0x6055576C   size: 800   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6055576C(int a1)
{
  int v1; // s0
  int v2; // s4
  float v3; // s2
  int v4; // r2
  int v5; // s4
  float v6; // s2
  int v7; // r1
  int v8; // s4
  float v9; // s2
  int v10; // r2
  int v11; // s4
  float v12; // s2
  int v13; // r1
  int v14; // s4
  float v15; // s2
  int v16; // r2
  int v17; // s4
  float v18; // s2
  int v19; // r1
  int v20; // r2
  float v21; // s2
  int result; // r0

  v1 = 0;
  FIELD_U32(a1, 6848) = 2;
  FIELD_U32(a1, 6852) = 2;
  FIELD_U8(a1, 6863) = 0;
  FIELD_U8(a1, 6860) = 1;
  FIELD_U8(a1, 5700) = 0;
  FIELD_U8(a1, 5705) = 0;
  FIELD_U8(a1, 5704) = 0;
  FIELD_U8(a1, 5703) = 0;
  FIELD_U8(a1, 5702) = 0;
  FIELD_U8(a1, 5701) = 0;
  FIELD_U8(a1, 5706) = 0;
  FIELD_U32(a1, 5708) = 2;
  FIELD_U32(a1, 5712) = 2;
  FIELD_U32(a1, 5716) = 2;
  FIELD_U32(a1, 5720) = 2;
  FIELD_U32(a1, 5724) = 2;
  FIELD_U32(a1, 5728) = 2;
  FIELD_U32(a1, 5732) = 2;
  v2 = 0;
  v3 = 0.0;
  FIELD_U32(a1, 11568) = -1;
  FIELD_U32(a1, 11564) = -1;
  FIELD_U32(a1, 11560) = -1;
  FIELD_U32(a1, 11556) = -1;
  FIELD_U32(a1, 11552) = -1;
  FIELD_U32(a1, 11548) = -1;
  FIELD_U32(a1, 11544) = -1;
  FIELD_U32(a1, 11540) = -1;
  v4 = FIELD_U32(a1, 5672);
  if ( v4 )
  {
    v2 = 0;
    v3 = 0.0;
    if ( FIELD_U8(v4, 2689) )
    {
      v2 = FIELD_U32(v4, 380);
      v3 = 10.0;
    }
  }
  FIELD_U32(a1, 5736) = v2;
  v5 = 0;
  FIELD_F32(a1, 5740) = v3;
  v6 = 0.0;
  FIELD_U32(a1, 5744) = 0;
  v7 = FIELD_U32(a1, 5676);
  if ( v7 )
  {
    v5 = 0;
    v6 = 0.0;
    if ( FIELD_U8(v7, 2689) )
    {
      v5 = FIELD_U32(v7, 380);
      v6 = 10.0;
    }
  }
  FIELD_U32(a1, 5748) = v5;
  v8 = 0;
  FIELD_F32(a1, 5752) = v6;
  v9 = 0.0;
  FIELD_U32(a1, 5756) = 0;
  v10 = FIELD_U32(a1, 5680);
  if ( v10 )
  {
    v8 = 0;
    v9 = 0.0;
    if ( FIELD_U8(v10, 2689) )
    {
      v8 = FIELD_U32(v10, 380);
      v9 = 10.0;
    }
  }
  FIELD_U32(a1, 5760) = v8;
  v11 = 0;
  FIELD_F32(a1, 5764) = v9;
  v12 = 0.0;
  FIELD_U32(a1, 5768) = 0;
  v13 = FIELD_U32(a1, 5684);
  if ( v13 )
  {
    v11 = 0;
    v12 = 0.0;
    if ( FIELD_U8(v13, 2689) )
    {
      v11 = FIELD_U32(v13, 380);
      v12 = 10.0;
    }
  }
  FIELD_U32(a1, 5772) = v11;
  v14 = 0;
  FIELD_F32(a1, 5776) = v12;
  v15 = 0.0;
  FIELD_U32(a1, 5780) = 0;
  v16 = FIELD_U32(a1, 5688);
  if ( v16 )
  {
    v14 = 0;
    v15 = 0.0;
    if ( FIELD_U8(v16, 2689) )
    {
      v14 = FIELD_U32(v16, 380);
      v15 = 10.0;
    }
  }
  FIELD_U32(a1, 5784) = v14;
  v17 = 0;
  FIELD_F32(a1, 5788) = v15;
  v18 = 0.0;
  FIELD_U32(a1, 5792) = 0;
  v19 = FIELD_U32(a1, 5692);
  if ( v19 )
  {
    v17 = 0;
    v18 = 0.0;
    if ( FIELD_U8(v19, 2689) )
    {
      v17 = FIELD_U32(v19, 380);
      v18 = 10.0;
    }
  }
  FIELD_U32(a1, 5796) = v17;
  FIELD_F32(a1, 5800) = v18;
  FIELD_U32(a1, 5804) = 0;
  v20 = FIELD_U32(a1, 5696);
  if ( v20 )
  {
    v21 = 0.0;
    if ( FIELD_U8(v20, 2689) )
    {
      v1 = FIELD_U32(v20, 380);
      v21 = 10.0;
    }
  }
  else
  {
    v21 = 0.0;
  }
  FIELD_U32(a1, 5808) = v1;
  FIELD_F32(a1, 5812) = v21;
  FIELD_U32(a1, 5816) = 0;
  FIELD_U8(a1, 18828) = 0;
  result = FIELD_U32(a1, 3644);
  FIELD_U8(result, 64) |= 1u;
  return result;
}
