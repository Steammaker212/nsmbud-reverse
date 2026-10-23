/* sub_604B8984
 * address: 0x604B8984   size: 204   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604B8984(int a1)
{
  int v2; // r5
  int result; // r0
  unsigned int v4; // r1
  unsigned int v5; // r1
  float v6; // s0

  v2 = a1 + 4;
  result = sub_6047467C((_DWORD *)(a1 + 4), 4u, &dword_60CA24C0, (int)&dword_60CA24A0, 1.0, 0);
  if ( result == 1 )
  {
    result = sub_6047482C(v2, 4u);
    if ( result )
    {
      result = sub_6047482C(v2, 4u);
      if ( result )
      {
        v4 = FIELD_U32(a1, 3724);
        if ( v4 >= 0x2C )
          v4 = 0;
        v5 = dword_60CA1E08[9 * v4 + 8];
        if ( v5 > 3 )
          v6 = 0.0;
        else
          v6 = flt_60AF28F4[v5];
        return (*(int (__fastcall **)(int, float))(*(_DWORD *)result + 96))(result, v6);
      }
    }
  }
  return result;
}
