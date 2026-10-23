/* sub_604A1AC0
 * address: 0x604A1AC0   size: 352   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604A1AC0(_DWORD *a1)
{
  int v1; // r2
  float *v2; // r1
  float v3; // s0
  int v4; // r2
  float v5; // s0
  int v6; // r2
  float v7; // s0
  int result; // r0
  float v9; // s0

  v1 = a1[5069];
  v2 = (float *)(a1 + 5621);
  if ( FIELD_U8(v1, 2689) )
  {
    v3 = FIELD_F32(v1, 396) - *v2;
    if ( *v2 >= 0.0 )
    {
      if ( v3 <= -40.0 )
        v3 = -40.0;
    }
    else if ( v3 >= -40.0 )
    {
      v3 = -40.0;
    }
    FIELD_F32(v1, 396) = v3;
  }
  v4 = a1[5070];
  if ( FIELD_U8(v4, 2689) )
  {
    v5 = FIELD_F32(v4, 396) - *v2;
    if ( *v2 >= 0.0 )
    {
      if ( v5 <= -40.0 )
        v5 = -40.0;
    }
    else if ( v5 >= -40.0 )
    {
      v5 = -40.0;
    }
    FIELD_F32(v4, 396) = v5;
  }
  v6 = a1[5071];
  if ( FIELD_U8(v6, 2689) )
  {
    v7 = FIELD_F32(v6, 396) - *v2;
    if ( *v2 >= 0.0 )
    {
      if ( v7 <= -40.0 )
        v7 = -40.0;
    }
    else if ( v7 >= -40.0 )
    {
      v7 = -40.0;
    }
    FIELD_F32(v6, 396) = v7;
  }
  result = a1[5072];
  if ( FIELD_U8(result, 2689) )
  {
    v9 = FIELD_F32(result, 396) - *v2;
    if ( *v2 >= 0.0 )
    {
      if ( v9 <= -40.0 )
        v9 = -40.0;
    }
    else if ( v9 >= -40.0 )
    {
      FIELD_U32(result, 396) = -1038090240;
      return result;
    }
    FIELD_F32(result, 396) = v9;
  }
  return result;
}
