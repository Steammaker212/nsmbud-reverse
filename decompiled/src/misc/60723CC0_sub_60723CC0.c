/* sub_60723CC0
 * address: 0x60723CC0   size: 280   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60723CC0(int a1, int a2, int *a3, int a4, int a5)
{
  int v7; // lr
  int v8; // r6
  int v9; // r1
  int v10; // r7
  int v11; // r9
  int v12; // r4
  int v13; // r4
  bool v14; // zf
  int v15; // r7
  int v16; // r2
  int result; // r0
  int v18; // t1

  v7 = *a3;
  v8 = FIELD_U32(a2, 3072);
  v9 = *a3;
  do
  {
    v10 = *(unsigned __int8 *)(v8 + v9);
    v9 += 3;
  }
  while ( v10 != 254 && (v10 & 1) == 0 );
  v11 = v9 - 3;
  if ( v10 == 254 )
  {
    v12 = v9 - 3;
  }
  else
  {
    v12 = v9 - 3;
    if ( (v10 & 1) != 0 )
    {
      v13 = v9;
      do
      {
        v10 = *(unsigned __int8 *)(v8 + v13);
        v13 += 3;
      }
      while ( v10 != 254 && (v10 & 1) != 0 );
      v12 = v13 - 3;
    }
  }
  v14 = v10 == 254;
  v15 = v12;
  if ( !v14 )
  {
    v15 = v12;
    do
    {
      v16 = v8 + v15;
      v15 += 3;
    }
    while ( FIELD_U8(v16, 3) != 254 );
  }
  if ( v15 + 3 == v9 )
  {
    if ( a4 < 0 )
      result = sub_607237E8(a1, a2, a4, a5, v11, v7);
    else
      result = sub_60723530(a1, a2, a4, a5, v11, v7);
  }
  else
  {
    sub_60723ABC(a1, (_WORD *)a2, a4, a5, v11, v12, v15, v7);
    v18 = FIELD_U16(a2, 3086);
    result = v18 + 1;
    FIELD_U16(a2, 3086) = v18 + 1;
  }
  *a3 = v15;
  return result;
}
