/* sub_602A7CEC
 * address: 0x602A7CEC   size: 156   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_602A7CEC(char *a1)
{
  char *v2; // r5
  int v3; // r2
  int v4; // r3

  v2 = a1 + 6124;
  (*(void (__fastcall **)(char *))(*(_DWORD *)a1 + 72))(a1);
  v3 = *v2;
  if ( v3 >= 0 )
  {
    v4 = a1[6132];
    if ( (unsigned __int8)v4 > 3u )
    {
      if ( (unsigned __int8)v4 == 4 )
        sub_600229B0(0.0, 24.0, dword_60C7F52C, (int)a1, v3);
    }
    else
    {
      sub_60022760(0.0, 24.0, dword_60C7F52C, (int)a1, v3, v4);
    }
  }
}
