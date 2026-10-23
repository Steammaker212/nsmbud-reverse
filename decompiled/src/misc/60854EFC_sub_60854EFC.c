/* sub_60854EFC
 * address: 0x60854EFC   size: 208   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60854EFC(unsigned __int8 *a1, unsigned __int8 *a2)
{
  int v4; // r2
  int result; // r0
  int v6; // r4
  int v7; // r4
  int v8; // [sp+0h] [bp-20h] BYREF
  int v9; // [sp+4h] [bp-1Ch] BYREF

  sub_60854BB4(&v9, &v8);
  v4 = 0;
  result = 0;
  while ( 1 )
  {
    if ( *(unsigned __int8 *)(v9 + v4) == *a1 )
    {
      v6 = v9 + v4;
      if ( *(unsigned __int8 *)(v9 + v4 + 1) == a1[1]
        && FIELD_U8(v6, 2) == a1[2]
        && FIELD_U8(v6, 3) == a1[3]
        && *(unsigned __int8 *)(v8 + v4) == *a2 )
      {
        v7 = v8 + v4;
        if ( *(unsigned __int8 *)(v8 + v4 + 1) == a2[1]
          && FIELD_U8(v7, 2) == a2[2]
          && FIELD_U8(v7, 3) == a2[3] )
        {
          break;
        }
      }
    }
    ++result;
    v4 += 4;
    if ( result >= 6 )
      return 7;
  }
  return result;
}
