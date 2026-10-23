/* sub_60523B64
 * address: 0x60523B64   size: 132   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60523B64(int result)
{
  unsigned int v1; // r3
  unsigned int v2; // r4
  int v3; // r4
  int *v4; // r4
  int v5; // t1
  int v6; // r5
  unsigned int v7; // r6
  unsigned int v8; // r7
  unsigned int v9; // r1
  int v10; // r1
  int v11; // r4

  if ( FIELD_S32(result, 4620) >= 1 )
  {
    v1 = 0;
    do
    {
      v2 = 0;
      if ( v1 < 4 )
        v2 = v1;
      ++v1;
      v3 = result + 4 * v2;
      v5 = FIELD_U32(v3, 4152);
      v4 = (int *)(v3 + 4152);
      v6 = FIELD_U32(v5, 3140);
      v7 = FIELD_U32(v6, 52);
      v8 = FIELD_U32(v6, 68);
      v9 = v7 - v8;
      if ( v7 > v8 )
        v7 = FIELD_U32(v6, 68);
      else
        v9 = 0;
      FIELD_U32(v6, 52) = v9;
      v10 = *v4;
      v11 = *(_DWORD *)(*v4 + 3132) + v7;
      if ( v11 >= 9999 )
        v11 = 9999;
      FIELD_U32(v10, 3132) = v11;
    }
    while ( (signed int)v1 < FIELD_U32(result, 4620) );
  }
  return result;
}
