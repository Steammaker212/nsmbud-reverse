/* sub_60867200
 * address: 0x60867200   size: 196   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60867200(_DWORD *a1)
{
  int result; // r0
  unsigned int v3; // r0
  int v4; // r3
  int v5; // r2
  int v6; // r5
  unsigned __int8 *v7; // r1
  int v8; // r6
  int v9; // r0

  result = a1[11];
  if ( result )
  {
    v3 = a1[3];
    if ( (v3 & 0xC00) != 0 )
    {
      v4 = (8 * v3) & 0x18;
      v5 = (v3 >> 6) & 8;
      v6 = a1[5];
      v7 = (unsigned __int8 *)(v6 + v4 + (a1[3] & 0x30) + v5 + 20 * ((a1[3] >> 2) & 3));
      if ( (a1[3] & 0xC00) == 0x800 )
        v7 = (unsigned __int8 *)(v6 + (a1[3] & 0x30 | 4) + v4 + v5 + 20 * ((v3 >> 2) & 3));
      if ( sub_60854EFC((unsigned __int8 *)(v6 + v4 + (a1[3] & 0x30) + v5 + 20 * ((a1[3] >> 2) & 3)), v7) == 7 )
      {
        v8 = sub_6083C538(a1[11]);
        sub_6083C790(a1[11]);
        sub_60855BF0(v8);
        if ( a1[11] )
        {
          nullsub_1447();
          sub_60855BF0(v9);
        }
      }
    }
    a1[11] = 0;
    return 0;
  }
  return result;
}
