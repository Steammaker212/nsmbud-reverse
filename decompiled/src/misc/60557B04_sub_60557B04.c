/* sub_60557B04
 * address: 0x60557B04   size: 296   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60557B04(int a1)
{
  unsigned int v2; // r5
  int v3; // r6
  char v4; // r0
  unsigned int v5; // r1
  int v6; // r2
  int v7; // r1
  unsigned int v8; // r2
  int v9; // r1
  bool v10; // zf

  v2 = 0;
  v3 = a1 + 5700;
  v4 = 0;
  do
  {
    v8 = v3 + 4 * v2;
    v9 = *(_DWORD *)(v8 - 28);
    v10 = v9 == 0;
    if ( v9 )
      v10 = FIELD_U8(v9, 2689) == 0;
    if ( !v10 )
    {
      if ( FIELD_U8(v9, 2691) || FIELD_U8(v9, 2690) )
        goto LABEL_25;
      v5 = FIELD_U32(v9, 2540);
      if ( *(_BYTE *)(v3 + v2) )
      {
        v6 = FIELD_U32(v8, 8);
        if ( v6 == 1 )
        {
          if ( v5 >= 5 )
            v5 = 0;
          if ( (*(_BYTE *)(a1 + 404 * v5 + 3656) & 0x40) != 0 )
          {
            sub_6055793C(a1, v2);
            goto LABEL_25;
          }
        }
        else if ( !v6 )
        {
          if ( v5 >= 5 )
            v5 = 0;
          if ( (*(_BYTE *)(a1 + 404 * v5 + 3656) & 0x80) != 0 )
          {
            sub_60557A20(a1, v2);
LABEL_25:
            v4 = 1;
          }
        }
      }
      else
      {
        if ( v5 >= 5 )
          v5 = 0;
        v7 = *(_DWORD *)(a1 + 404 * v5 + 3656);
        if ( (v7 & 0x40) != 0 )
        {
          sub_6055793C(a1, v2);
        }
        else
        {
          if ( (v7 & 0x80) == 0 )
            goto LABEL_26;
          sub_60557A20(a1, v2);
        }
        v4 = 1;
        *(_BYTE *)(v3 + v2) = 1;
      }
    }
LABEL_26:
    ++v2;
  }
  while ( v2 != 7 );
  return v4 & 1;
}
