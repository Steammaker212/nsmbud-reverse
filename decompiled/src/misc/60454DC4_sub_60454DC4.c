/* sub_60454DC4
 * address: 0x60454DC4   size: 188   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60454DC4(_DWORD *result)
{
  int *v1; // r1
  int v2; // r2
  bool v3; // zf
  int *v4; // r6
  int v5; // r6
  unsigned int v6; // r5
  unsigned int v7; // r6
  int v8; // r4
  int v9; // r5

  if ( result[329] != 2 )
  {
    v1 = result + 316;
    v2 = 0;
    do
    {
      v3 = (result[352] | v2) == 0;
      v4 = v1;
      ++v2;
      if ( v3 )
        v4 = result + 320;
      v5 = *v4;
      v6 = FIELD_U32(v5, 4);
      v7 = FIELD_U32(v5, 272);
      v8 = (v6 >> 2) & 0x800 | v6 & 0x7FF | (v6 >> 4) & 0x1000 | (v6 >> 4) & 0x2000;
      v9 = v8 | 8;
      if ( (v7 & 0x200) == 0 )
        v9 = v8 & 0x3EF7;
      v1[9] = (v9 | v1[9] & (v7 & 0x7F7 | (v7 >> 2) & 0x800 | (v7 >> 4) & 0x1000 | (v7 >> 4) & 0x2000 | 8)) & 0xFFFFFEFF;
      ++v1;
    }
    while ( v2 != 4 );
  }
  return result;
}
