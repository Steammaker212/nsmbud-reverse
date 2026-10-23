/* sub_60566DE4
 * address: 0x60566DE4   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60566DE4(int result, _DWORD *a2)
{
  int v2; // r4
  bool v3; // zf
  int v4; // r1
  bool v5; // zf

  v2 = result;
  v3 = result == 0;
  if ( result )
  {
    result = a2[636] & 0x20;
    v3 = result == 0;
  }
  if ( !v3 )
  {
    result = FIELD_U32(v2, 300);
    if ( result == 41 )
    {
      result = FIELD_U8(v2, 140);
      if ( (result & 0x10) != 0 )
      {
        result = (*(int (__fastcall **)(_DWORD *, int, int))(*a2 + 32))(a2, v2, 2);
        v5 = result == 0;
        if ( result )
        {
          v4 = FIELD_U32(v2, 144);
          v5 = v4 == 0;
        }
        if ( !v5 )
        {
          FIELD_U8(v4, 6843) = 1;
          FIELD_U32(v4, 6860) = FIELD_S8(result, 84);
          result = FIELD_U8(result, 84);
          FIELD_U8(v4, 6850) = result;
        }
      }
    }
  }
  return result;
}
