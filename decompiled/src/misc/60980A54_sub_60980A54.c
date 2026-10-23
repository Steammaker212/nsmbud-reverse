/* sub_60980A54
 * address: 0x60980A54   size: 124   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60980A54(int a1, int a2)
{
  int v2; // r7
  int v4; // r6
  int i; // r8
  int v6; // r2
  int v7; // r0
  int v8; // r1

  v2 = FIELD_U32(a1, 8);
  v4 = a1 + 4;
  for ( i = 0; v2 != v4; v2 = FIELD_U32(v2, 4) )
  {
    v7 = sub_60980AD0(v2 - 4);
    if ( v7 )
    {
      v8 = FIELD_U32(v7, 56);
      v6 = 0;
      while ( *(unsigned __int8 *)(v8 + v6) == *(unsigned __int8 *)(a2 + v6) )
      {
        if ( *(_BYTE *)(v8 + v6) )
        {
          if ( ++v6 < 64 )
            continue;
        }
        return v7;
      }
    }
  }
  return i;
}
