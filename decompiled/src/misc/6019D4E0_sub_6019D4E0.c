/* sub_6019D4E0
 * address: 0x6019D4E0   size: 144   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6019D4E0(int a1)
{
  int v2; // r1
  int result; // r0
  int v4; // r2
  int v5; // r3
  _DWORD *v6; // r3

  v2 = sub_60185CD8((Actor *)a1);
  result = 0;
  if ( v2 == 1 )
  {
    result = 1;
    if ( FIELD_U8(a1, 12891) )
    {
      v4 = 0;
      do
      {
        v5 = 0;
        if ( (unsigned int)v4 < 6 )
          v5 = v4;
        ++v4;
        v6 = (_DWORD *)(a1 + 40 * v5);
        v6[3158] = v6[3161];
        v6[3159] = v6[3162];
        v6[3160] = v6[3163];
      }
      while ( v4 < FIELD_U8(a1, 12891) );
    }
  }
  return result;
}
