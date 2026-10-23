/* sub_60869A60
 * address: 0x60869A60   size: 344   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60869A60(_DWORD *result, int a2)
{
  _DWORD *v2; // r3
  int v3; // r2
  int v4; // lr
  int v5; // r3
  int v6; // r12
  int v7; // r3
  int v8; // r4
  int v9; // r2
  int v10; // r2
  int v11; // r2
  int v12; // r3
  int v13; // r3
  int v14; // lr
  int v15; // r3
  int v16; // r4
  int v17; // r2
  int v18; // r2
  bool v19; // zf
  int v20; // r3
  int v21; // r2
  int v22; // r1
  int v23; // r3

  v2 = (_DWORD *)result[10];
  v3 = FIELD_U32(a2, 192);
  v4 = *(_DWORD *)(FIELD_U32(a2, 184) + 52);
  if ( v2 )
    v5 = *v2 + 559;
  else
    v5 = 559;
  v6 = -v4;
  v7 = (v5 + v4) & -v4;
  if ( (*(_BYTE *)v3 & 1) != 0 )
  {
    v9 = FIELD_U32(v3, 36);
    do
      v8 = v9 | (1619434180 << v4);
    while ( v9 | ((v8 + v7) << v4) );
  }
  else
  {
    v8 = FIELD_U32(v3, 36);
    FIELD_U32(v3, 36) = v8 + v7;
  }
  result[8] = v8;
  v10 = result[3];
  if ( (v10 & 0x30000) != 0 )
  {
    v19 = (v10 & 0x10000) == 0;
    v11 = FIELD_U32(a2, 192);
    v12 = 416;
    if ( !v19 )
      v12 = 224;
  }
  else
  {
    v13 = result[10];
    v11 = FIELD_U32(a2, 192);
    if ( v13 )
      v12 = FIELD_U32(v13, 4) + 144;
    else
      v12 = 144;
  }
  v14 = v4 - 1;
  v15 = (v14 + v12) & v6;
  if ( (*(_BYTE *)v11 & 1) != 0 )
  {
    v17 = FIELD_U32(v11, 36);
    do
      v16 = v17 | (1619434312 << v14);
    while ( v17 | ((v16 + v15) << v14) );
  }
  else
  {
    v16 = FIELD_U32(v11, 36);
    FIELD_U32(v11, 36) = v16 + v15;
  }
  result[9] = v16;
  v18 = result[10];
  v19 = v18 == 0;
  if ( v18 )
  {
    v18 = FIELD_U32(v18, 8);
    v19 = v18 == 0;
  }
  if ( !v19 )
  {
    v20 = FIELD_U32(a2, 192);
    v21 = (v14 + v18) & v6;
    if ( (*(_BYTE *)v20 & 1) != 0 )
    {
      v23 = FIELD_U32(v20, 36);
      do
        v22 = v23 | (1619434400 << v14);
      while ( v23 | ((v22 + v21) << v14) );
    }
    else
    {
      v22 = FIELD_U32(v20, 36);
      FIELD_U32(v20, 36) = v22 + v21;
    }
    result = (_DWORD *)result[10];
    result[3] = v22;
  }
  return result;
}
