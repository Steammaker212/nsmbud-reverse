/* sub_608F6F58
 * address: 0x608F6F58   size: 348   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608F6F58(int a1, unsigned int a2, int a3, int a4)
{
  int v4; // r12
  int v5; // lr
  int v6; // r8
  int v7; // r9
  int v8; // r4
  int v9; // r6
  int result; // r0
  unsigned int v11; // r3
  int v12; // r7
  unsigned int v13; // r7
  int v14; // r5
  unsigned int v15; // r3
  int v16; // r6

  v4 = FIELD_U32(a1, 132);
  if ( v4 == a1 + 128 )
    return 0;
  v5 = FIELD_U32(a1, 140);
  v6 = -a3;
  v7 = a3 - 1;
  v8 = a1 + 128 - v5;
  v9 = v4 - v5;
  if ( a4 )
  {
    result = 0;
    if ( a4 == 1 )
    {
      do
      {
        v11 = FIELD_U32(v9, 12);
        if ( v11 >= a2 )
        {
          v12 = v9 + FIELD_U16(v9, 10) + 16;
          if ( v11 >= a2 - v12 + ((v7 + v12) & v6) )
          {
            if ( result )
            {
              if ( FIELD_U32(result, 12) > v11 )
                result = v9;
            }
            else
            {
              result = v9;
            }
          }
        }
        v4 = FIELD_U32(v4, 4);
        v9 = v4 - v5;
      }
      while ( v4 - v5 != v8 );
    }
    else
    {
      do
      {
        v13 = FIELD_U32(v9, 12);
        if ( v13 >= a2 )
        {
          v14 = v9 + FIELD_U16(v9, 10) + 16;
          if ( v13 >= a2 - v14 + ((v7 + v14) & v6) )
          {
            if ( result )
            {
              if ( a4 == 2 && FIELD_U32(result, 12) < v13 )
                result = v9;
            }
            else
            {
              result = v9;
            }
          }
        }
        v4 = FIELD_U32(v4, 4);
        v9 = v4 - v5;
      }
      while ( v4 - v5 != v8 );
    }
  }
  else
  {
    result = v4 - v5;
    while ( 1 )
    {
      v15 = FIELD_U32(result, 12);
      if ( v15 >= a2 )
      {
        v16 = result + FIELD_U16(result, 10) + 16;
        if ( v15 >= a2 - v16 + ((v7 + v16) & v6) )
          break;
      }
      v4 = FIELD_U32(v4, 4);
      result = v4 - v5;
      if ( v4 - v5 == v8 )
        return 0;
    }
  }
  return result;
}
