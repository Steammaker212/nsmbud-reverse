/* sub_60445E30
 * address: 0x60445E30   size: 336   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60445E30(int result, int a2)
{
  int v3; // r5
  int v4; // r7
  int v5; // r6
  _WORD *v6; // r0
  int v7; // r2
  int v8; // r2
  int v9; // r2
  int v10; // r2
  int v11; // r7
  int v12; // r6
  _WORD *v13; // r0
  int v14; // r2
  int v15; // r2
  int v16; // r2
  int v17; // r2

  v3 = result;
  v4 = FIELD_U16(a2, 74);
  if ( FIELD_U16(a2, 74) )
  {
    v5 = 0;
    do
    {
      v6 = *(_WORD **)sub_6043AFA0(a2, 1, v5);
      v7 = FIELD_U32(v3, 4);
      ++v5;
      if ( v7 < (unsigned __int16)v6[50] )
        v7 = (unsigned __int16)v6[50];
      FIELD_U32(v3, 4) = v7;
      v8 = FIELD_U32(v3, 8);
      if ( v8 < (unsigned __int16)v6[57] + (unsigned __int16)v6[56] )
        v8 = (unsigned __int16)v6[57] + (unsigned __int16)v6[56];
      FIELD_U32(v3, 8) = v8;
      v9 = FIELD_U32(v3, 16);
      if ( v9 < (unsigned __int16)v6[51] )
        v9 = (unsigned __int16)v6[51];
      FIELD_U32(v3, 16) = v9;
      v10 = FIELD_U32(v3, 12);
      if ( v10 < (unsigned __int16)v6[59] )
        v10 = (unsigned __int16)v6[59];
      FIELD_U32(v3, 12) = v10;
      result = ((v6[48] & 1) == 0) | FIELD_U8(v3, 21);
      FIELD_U8(v3, 21) = result;
    }
    while ( v4 != v5 );
  }
  v11 = FIELD_U16(a2, 76);
  if ( FIELD_U16(a2, 76) )
  {
    v12 = 0;
    do
    {
      v13 = *(_WORD **)sub_6043AFA0(a2, 2, v12);
      v14 = FIELD_U32(v3, 4);
      ++v12;
      if ( v14 < (unsigned __int16)v13[50] )
        v14 = (unsigned __int16)v13[50];
      FIELD_U32(v3, 4) = v14;
      v15 = FIELD_U32(v3, 8);
      if ( v15 < (unsigned __int16)v13[57] + (unsigned __int16)v13[56] )
        v15 = (unsigned __int16)v13[57] + (unsigned __int16)v13[56];
      FIELD_U32(v3, 8) = v15;
      v16 = FIELD_U32(v3, 16);
      if ( v16 < (unsigned __int16)v13[51] )
        v16 = (unsigned __int16)v13[51];
      FIELD_U32(v3, 16) = v16;
      v17 = FIELD_U32(v3, 12);
      if ( v17 < (unsigned __int16)v13[59] )
        v17 = (unsigned __int16)v13[59];
      FIELD_U32(v3, 12) = v17;
      result = ((v13[48] & 1) == 0) | FIELD_U8(v3, 21);
      FIELD_U8(v3, 21) = result;
    }
    while ( v11 != v12 );
  }
  return result;
}
