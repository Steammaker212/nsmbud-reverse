/* sub_608B23C8
 * address: 0x608B23C8   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608B23C8(int a1, int a2, int *a3)
{
  int *v5; // r0
  int v6; // r5
  int v7; // r1
  unsigned __int16 *v8; // r0
  int v9; // r6
  int v10; // r0
  int v11; // r0

  v5 = (int *)sub_608B1860(FIELD_U32(a1, 60), a2);
  v6 = 0;
  if ( v5 )
  {
    v7 = *v5;
    *a3 = *v5;
    v8 = (unsigned __int16 *)sub_608B18E8(FIELD_U32(a1, 60), v7);
    v9 = (int)v8;
    if ( v8 )
    {
      v10 = sub_608B20A4(v8);
      if ( v10 == 1 )
      {
        sub_608B20F8(v9);
        v11 = -1;
        goto LABEL_7;
      }
      if ( !v10 )
      {
        v11 = *(_DWORD *)(sub_608B20D8(v9) + 8);
LABEL_7:
        v6 = 1;
        a3[1] = v11;
      }
    }
  }
  return v6;
}
