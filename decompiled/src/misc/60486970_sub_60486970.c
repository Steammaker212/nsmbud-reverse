/* sub_60486970
 * address: 0x60486970   size: 184   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60486970(_DWORD *a1)
{
  int v1; // r2
  int v2; // r4
  int v3; // r1
  int v4; // r3
  _DWORD *v5; // r5
  char v7; // [sp+4h] [bp-14h] BYREF
  char v8; // [sp+5h] [bp-13h]

  v1 = 1;
  v2 = a1[1467];
  v3 = a1[1468];
  v7 = 1;
  v8 = 1;
  v4 = a1[3557];
  if ( v4 )
  {
    if ( v4 != 3 )
    {
      v5 = a1 + 942;
LABEL_6:
      sub_60502D0C(v5, v3);
      goto LABEL_8;
    }
  }
  else
  {
    v1 = 0;
  }
  *(_BYTE *)((unsigned int)&v7 | v1) = 0;
  v5 = a1 + 942;
  if ( v7 )
    goto LABEL_6;
  sub_60502B90(v5, v3);
LABEL_8:
  if ( v8 )
    return sub_60502D0C(v5, v2);
  else
    return sub_60502B90(v5, v2);
}
