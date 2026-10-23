/* sub_608D07BC
 * address: 0x608D07BC   size: 168   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608D07BC(_DWORD *a1, _DWORD *a2)
{
  int v4; // r6
  int v5; // r0
  bool v6; // zf

  v4 = 0;
  v5 = a2[1];
  v6 = v5 == 0;
  if ( v5 )
    v6 = a2[2] == 0;
  if ( !v6 && (int)a2[5] <= 31 )
  {
    if ( a2[7] )
    {
      a1[69] = a2[6];
      a1[70] = a2[7];
      if ( sub_608D08D0(a1, a1 + 1, a1 + 66, a2) == 1 )
      {
        sub_608D0994(a1, *a2);
        if ( a2[4] )
          sub_608D09AC(a1, a2[3]);
        a1[68] = a2[5];
        nullsub_103(a1);
        return 1;
      }
    }
  }
  return v4;
}
