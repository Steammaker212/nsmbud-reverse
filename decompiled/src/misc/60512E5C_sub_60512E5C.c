/* sub_60512E5C
 * address: 0x60512E5C   size: 220   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60512E5C(int a1)
{
  int v1; // r4
  int result; // r0
  float v3; // s16
  unsigned int v4; // r0

  v1 = a1 + 56;
  result = sub_6047467C((_DWORD *)(a1 + 56), 1u, &dword_60CA84B0, (int)&unk_60CA8470, 1.0, 0);
  if ( result == 1 )
  {
    result = sub_6047482C(v1, 1u);
    if ( result )
    {
      v3 = 0.0;
      if ( *(_DWORD *)(sub_60834614(result) + 492) == 4 )
      {
        if ( dword_60C9A1F0 )
        {
          v4 = sub_60408934(dword_60C9A1F0);
          if ( v4 <= 3 )
            v3 = flt_60AF2944[v4];
        }
      }
      result = sub_6047482C(v1, 1u);
      if ( result )
        return (*(int (__fastcall **)(int, float))(*(_DWORD *)result + 96))(result, v3);
    }
  }
  return result;
}
