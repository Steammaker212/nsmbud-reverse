/* sub_6051D7E8
 * address: 0x6051D7E8   size: 340   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6051D7E8(int result)
{
  int v1; // lr
  unsigned int i; // r2
  int v3; // r5
  signed int v4; // r3
  int v5; // r1
  int *v6; // r4
  int v7; // r5
  _DWORD *v8; // r8
  int v9; // r7
  signed int v10; // r6
  int v11; // r4
  int v12; // r1
  int *v13; // r1
  int v14; // r5
  int v15; // r6
  int v16; // r5
  int v17; // r5
  int v18; // r4
  int v19; // r3
  int v20; // r1

  v1 = FIELD_U32(result, 3880);
  if ( v1 )
  {
    for ( i = 0; i != v1; ++i )
    {
      v3 = FIELD_U32(result, 3876);
      v4 = FIELD_U32(result, 3872);
      v5 = FIELD_U32(result, 3868);
      v6 = *(int **)(result + 3772);
      if ( (int)(i + v3) >= v4 )
        v3 -= v4;
      v7 = i + v3;
      v8 = *(_DWORD **)(v5 + 16 * v7);
      if ( FIELD_U32(result, 3784) > i )
      {
        v9 = FIELD_U32(result, 3780);
        v10 = FIELD_U32(result, 3776);
        if ( (int)(i + v9) >= v10 )
          v9 -= v10;
        v6 += i + v9;
      }
      v11 = *v6;
      v12 = v5 + 16 * v7;
      FIELD_U32(v12, 12) = v11;
      v13 = (int *)(v12 + 12);
      v14 = v8[3];
      if ( v14 == 6 || FIELD_U32(v11, 8) != v14 )
      {
        FIELD_U32(v11, 8) = v14;
        FIELD_U32(v11, 4) |= 1u;
        v11 = *v13;
      }
      v15 = FIELD_U32(v11, 20);
      v16 = v8[1];
      if ( v15 != v16 )
      {
        FIELD_U32(v11, 16) = v15;
        FIELD_U32(v11, 20) = v16;
        FIELD_U32(v11, 4) |= 2u;
        v11 = *v13;
      }
      v17 = v8[13];
      if ( FIELD_U32(v11, 3660) != v17 )
      {
        FIELD_U32(v11, 3660) = v17;
        FIELD_U8(v11, 3664) = 1;
      }
      if ( i <= 3 )
      {
        v18 = *v13;
        if ( i != *(_DWORD *)(*v13 + 12) )
        {
          FIELD_U32(v18, 12) = i;
          FIELD_U32(v18, 4) |= 1u;
        }
      }
      if ( FIELD_U8(result, 4013) )
      {
        v19 = 2;
        if ( !v8[5] )
          v19 = 1;
      }
      else
      {
        v19 = 0;
      }
      v20 = *v13;
      if ( FIELD_U32(v20, 3652) != v19 )
      {
        FIELD_U32(v20, 3652) = v19;
        FIELD_U8(v20, 3656) = 1;
      }
    }
  }
  return result;
}
