/* sub_60998628
 * address: 0x60998628   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60998628(int a1)
{
  int result; // r0
  bool v3; // zf
  int v4; // r0

  result = FIELD_U8(a1, 61);
  v3 = result == 0;
  if ( result )
  {
    result = FIELD_U8(a1, 60);
    v3 = result == 0;
  }
  if ( !v3 )
  {
    result = sub_609912F8(a1);
    if ( !result )
    {
      v4 = FIELD_U32(a1, 64);
      if ( v4 )
        (*(void (__fastcall **)(int, _DWORD, float))(*(_DWORD *)v4 + 84))(v4, 0, -1.0);
      FIELD_U8(a1, 60) = 0;
      return 0;
    }
  }
  return result;
}
