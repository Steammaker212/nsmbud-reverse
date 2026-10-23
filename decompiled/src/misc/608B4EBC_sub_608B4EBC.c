/* sub_608B4EBC
 * address: 0x608B4EBC   size: 208   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608B4EBC(int result, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  int v9; // r5
  int v10; // r4
  char v11; // r6
  int v12; // r12
  char v13; // r5
  char v14; // r6
  int v16; // r5
  int v17; // r1

  v9 = 0;
  if ( a4 == 1 && a7 == 1 )
    v9 = (a5 | a6) ^ 1;
  v10 = v9 ^ 1;
  v11 = a5;
  FIELD_U8(result, 39) = v9;
  v12 = 6;
  v13 = a4 & (v9 ^ 1);
  if ( a5 )
    v11 = v10;
  FIELD_U8(result, 30) = v13;
  FIELD_U8(result, 25) = v11;
  v14 = a6;
  if ( a6 )
    v14 = v10;
  if ( a2 )
    v12 = 2;
  FIELD_U8(result, 26) = v14;
  if ( v10 )
  {
    v16 = 2 * v12;
    v17 = (2 * v12) | 2;
    if ( a3 )
    {
      v16 = 30;
      v17 = 36;
    }
    if ( a5 )
      v16 = v17;
    a8 = 1;
    if ( a5 )
      a8 = 2;
    if ( a6 == 1 )
    {
      ++a8;
      if ( a3 )
        v16 += v12;
    }
    if ( a4 )
      v12 = v16;
    else
      a8 = 0;
  }
  else
  {
    v12 += a9;
  }
  FIELD_U32(result, 16) = a8;
  FIELD_U32(result, 20) = v12;
  return result;
}
