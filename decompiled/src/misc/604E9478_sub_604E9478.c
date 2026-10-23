/* sub_604E9478
 * address: 0x604E9478   size: 280   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604E9478(int result)
{
  int v1; // r12
  int v2; // r3
  unsigned __int8 *v3; // r2
  int v4; // r1
  int v5; // r4
  int v6; // t1
  unsigned int v7; // r4
  _BOOL4 v8; // r5
  _BOOL4 v9; // r4
  int v10; // r3
  int v11; // r2
  int v12; // r4
  int v13; // r1
  int v14; // r4
  int v15; // t1
  int v16; // r1
  int v17; // r4

  v1 = FIELD_U32(result, 568);
  if ( v1 <= 0 )
  {
    FIELD_U8(result, 576) = 0;
  }
  else
  {
    v2 = 0;
    v3 = (unsigned __int8 *)(FIELD_U32(result, 580) + 4);
    v4 = 0;
    do
    {
      v5 = *(_DWORD *)(FIELD_U32(result, 8) + 4 * FIELD_U32(result, 572) + 4 * v4);
      v6 = *v3;
      v3 += 24;
      ++v4;
      v7 = FIELD_U8(v5, 65);
      v8 = v7 < 0x3D;
      v9 = v7 == 255;
      if ( v6 )
        v9 = v8;
      if ( v9 )
        ++v2;
    }
    while ( v4 < v1 );
    FIELD_U8(result, 576) = v2 < v1;
    v10 = 0;
    v11 = 0;
    do
    {
      v12 = FIELD_U32(result, 580);
      v15 = *(_DWORD *)(v12 + v10);
      v14 = v12 + v10;
      v13 = v15;
      if ( FIELD_U8(v14, 4) )
      {
        v16 = v13 - 12;
        if ( v16 <= 60 )
          v16 = 60;
      }
      else
      {
        v16 = v13 + 12;
        if ( v16 >= 255 )
          v16 = 255;
      }
      FIELD_U8(v14, 4) = 0;
      v17 = FIELD_U32(result, 580);
      if ( *(_DWORD *)(v17 + v10) != v16 )
      {
        *(_DWORD *)(v17 + v10) = v16;
        *(_BYTE *)(*(_DWORD *)(FIELD_U32(result, 8) + 4 * (v11 + FIELD_U32(result, 572))) + 65) = v16;
        FIELD_U8(result, 296) = 1;
      }
      ++v11;
      v10 += 24;
    }
    while ( v11 < FIELD_U32(result, 568) );
  }
  return result;
}
