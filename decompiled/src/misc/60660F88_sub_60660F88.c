/* sub_60660F88
 * address: 0x60660F88   size: 348   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60660F88(int result)
{
  int v1; // r12
  int *i; // r1
  int v3; // r4
  bool v4; // zf
  int v5; // r4
  unsigned __int8 *v6; // r2
  int v7; // r2
  int v8; // lr
  int v9; // r3
  int v10; // r5
  int v11; // r6
  int v12; // r1
  _BOOL4 v13; // r3
  int v14; // r8
  int v15; // r4
  _BOOL4 v16; // r7
  int v17; // r5
  int v18; // r5
  unsigned __int8 v19[28]; // [sp+0h] [bp-1Ch] BYREF

  v1 = 0;
  *(_DWORD *)v19 = 0;
  for ( i = *(int **)(result + 6368); i; i = (int *)i[1] )
  {
    v3 = *i;
    v4 = *i == 0;
    if ( *i )
    {
      v3 = FIELD_U32(v3, 2196);
      v4 = v3 == 0;
    }
    if ( !v4 && (unsigned __int8)(FIELD_U8(v3, 533) - 1) <= 1u )
    {
      v5 = FIELD_S8(v3, 84);
      if ( (unsigned __int8)v5 != 255 )
      {
        v6 = v19;
        if ( (unsigned __int8)v5 < 4u )
          v6 = &v19[v5];
        *v6 = 1;
      }
    }
  }
  v7 = v19[0];
  v8 = FIELD_U8(result, 7020);
  FIELD_U8(result, 7020) = v19[0];
  v9 = v19[1];
  v10 = FIELD_U8(result, 7021);
  FIELD_U8(result, 7021) = v19[1];
  v4 = v9 == 0;
  v11 = FIELD_U8(result, 7022);
  v12 = v19[2];
  v13 = v9 != 0;
  FIELD_U8(result, 7022) = v19[2];
  v14 = FIELD_U8(result, 7023);
  v15 = v19[3];
  FIELD_U8(result, 7023) = v19[3];
  v16 = v4;
  v4 = v10 == 0;
  v17 = 0;
  if ( !v4 )
    v13 = v16;
  if ( v12 )
    v12 = 1;
  else
    v17 = 1;
  if ( v11 )
    v12 = v17;
  v18 = 0;
  if ( v15 )
    v15 = 1;
  else
    v18 = 1;
  if ( v14 )
    v15 = v18;
  if ( v7 )
    v7 = 1;
  else
    v1 = 1;
  if ( v8 )
    v7 = v1;
  if ( v7 || v12 != __PAIR64__(v13, 0) || v15 )
    FIELD_U32(result, 6984) = FIELD_U32(result, 7012);
  return result;
}
