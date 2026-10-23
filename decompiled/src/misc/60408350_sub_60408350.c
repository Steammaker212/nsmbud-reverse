/* sub_60408350
 * address: 0x60408350   size: 148   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60408350(int a1, int a2)
{
  int v4; // r4
  int v5; // r6
  int v6; // r0
  int v7; // r2
  unsigned int v8; // r1
  unsigned int v9; // r2

  v4 = 1;
  v5 = sub_6040E5B0((unsigned __int8)a2, 0, 1);
  v6 = 82;
  if ( a2 + 1 > 8 )
    goto LABEL_5;
  v6 = sub_6040E5B0((unsigned __int8)(a2 + 1), 0, 1);
  if ( v5 < v6 )
  {
    while ( 1 )
    {
      v7 = a1;
      if ( (unsigned int)(v5 / 2) < 0x29 )
        v7 = a1 + v5 / 2;
      v8 = FIELD_U8(v7, 4);
      v9 = v8 >> 4;
      if ( (v5 & 1) == 0 )
        v9 = v8 & 0xF;
      if ( v9 != 7 )
        break;
      ++v5;
LABEL_5:
      if ( v5 >= v6 )
        return v4;
    }
    return 0;
  }
  return v4;
}
