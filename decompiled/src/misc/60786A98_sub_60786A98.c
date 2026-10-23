/* sub_60786A98
 * address: 0x60786A98   size: 136   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60786A98(int a1, int a2)
{
  int v2; // r2
  int v3; // r12
  unsigned int v4; // r3
  _BYTE *v5; // r2
  int v6; // r4
  int v7; // r2

  v2 = 0;
  if ( (FIELD_U8(a1, 4) & 1) == 0 )
  {
    v3 = FIELD_U32(a1, 28);
    if ( v3 < a2 )
      a2 = FIELD_U32(a1, 28);
    if ( a2 >= 1 )
    {
      v4 = 0;
      while ( 1 )
      {
        v5 = *(_BYTE **)(a1 + 16);
        if ( v3 > v4 )
        {
          v6 = FIELD_U32(a1, 24);
          v7 = FIELD_U32(a1, 20);
          if ( (int)(v4 + v6) >= v7 )
            v6 -= v7;
          v5 = (_BYTE *)(FIELD_U32(a1, 16) + 4 * (v4 + v6));
        }
        if ( (*v5 & 1) != 0 )
          break;
        if ( (int)++v4 >= a2 )
          return 0;
      }
      return 1;
    }
  }
  return v2;
}
