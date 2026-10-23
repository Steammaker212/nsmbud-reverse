/* sub_608B15C8
 * address: 0x608B15C8   size: 64   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608B15C8(_WORD *a1)
{
  _WORD *v1; // r1
  _WORD *v2; // r0
  int v3; // t1

  v1 = a1 + 10;
  if ( a1[10] != 8193 )
  {
    v1 = a1 + 16;
    if ( a1[16] != 8193 )
    {
      v3 = (unsigned __int16)a1[22];
      v2 = a1 + 22;
      if ( v3 != 8193 )
        v2 = 0;
      v1 = v2;
    }
  }
  return *((_DWORD *)v1 + 1);
}
