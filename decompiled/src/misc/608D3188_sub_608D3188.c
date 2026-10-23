/* sub_608D3188
 * address: 0x608D3188   size: 244   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608D3188(int a1)
{
  int *v2; // r0
  int v3; // r9
  int v4; // r6
  int *v5; // r8
  int v6; // r4
  int v7; // r1
  int *v8; // r4
  int v9; // t1
  int v10; // r5
  int *v11; // r7
  int v12; // r0
  int result; // r0

  FIELD_U8(a1, 39) = 1;
  if ( FIELD_U8(a1, 1518) )
  {
    v2 = sub_608C3C60();
    sub_608C411C((int)v2, a1 + 164);
    FIELD_U8(a1, 1518) = 0;
  }
  if ( FIELD_U8(a1, 37) )
    FIELD_U8(a1, 37) = 0;
  if ( FIELD_U8(a1, 36) )
  {
    FIELD_U8(a1, 36) = 0;
    v3 = FIELD_U32(a1, 180);
    if ( v3 >= 1 )
    {
      v4 = 0;
      v5 = (int *)(a1 + 1172);
      do
      {
        v6 = a1 + 244 * v4;
        v9 = FIELD_U32(v6, 184);
        v8 = (int *)(v6 + 184);
        v7 = v9;
        if ( v9 >= 1 )
        {
          v10 = 0;
          v11 = v5;
          do
          {
            v12 = *v11;
            if ( *v11 )
            {
              if ( FIELD_U8(v12, 177) )
              {
                sub_608C7BA4(v12);
                v7 = *v8;
              }
              *v11 = 0;
            }
            ++v10;
            v11 += 2;
          }
          while ( v10 < v7 );
        }
        ++v4;
        v5 += 21;
      }
      while ( v4 != v3 );
    }
  }
  result = FIELD_U8(a1, 1517);
  if ( FIELD_U8(a1, 1517) )
  {
    sub_608D3B00(a1);
    FIELD_U8(a1, 1517) = 0;
    return 0;
  }
  return result;
}
