/* sub_608AEAFC
 * address: 0x608AEAFC   size: 172   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608AEAFC(int a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  int v8; // r1
  int result; // r0
  int v10; // r5
  int v11; // r0
  _DWORD v12[4]; // [sp+4h] [bp-24h] BYREF
  int v13; // [sp+14h] [bp-14h]

  v8 = sub_608A9DA4(a2);
  result = 3;
  if ( v8 == 1 )
  {
    v10 = sub_608AC060(a3);
    if ( v10 )
    {
      v11 = sub_608B4094(a3 + 12, v13);
      if ( v11 )
      {
        v12[0] = v13;
        v12[1] = FIELD_U32(a7, 16);
        v12[2] = v10;
        v12[3] = v11;
        sub_608D2E74(a5, v12);
        return 0;
      }
      else
      {
        return 9;
      }
    }
    else
    {
      return 8;
    }
  }
  return result;
}
