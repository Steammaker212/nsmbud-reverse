/* sub_60998680
 * address: 0x60998680   size: 96   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60998680(int a1)
{
  int result; // r0
  int v3; // r0

  sub_60991630(a1);
  result = FIELD_U8(a1, 61);
  if ( FIELD_U8(a1, 61) )
  {
    result = FIELD_U8(a1, 60);
    if ( !FIELD_U8(a1, 60) )
    {
      result = sub_609912F8(a1);
      if ( !result )
      {
        v3 = FIELD_U32(a1, 64);
        if ( v3 )
          (*(void (__fastcall **)(int, _DWORD, float))(*(_DWORD *)v3 + 84))(v3, 0, 1.0);
        FIELD_U8(a1, 60) = 1;
        return 1;
      }
    }
  }
  return result;
}
