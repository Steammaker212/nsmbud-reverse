/* sub_60995F60
 * address: 0x60995F60   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_60995F60(int a1)
{
  unsigned int result; // r0
  int v3; // r0

  result = FIELD_U8(a1, 84);
  if ( result <= 1 )
  {
    result = FIELD_U8(a1, 85);
    if ( FIELD_U8(a1, 85) )
    {
      result = sub_609912F8(a1);
      if ( !result )
      {
        v3 = FIELD_U32(a1, 60);
        if ( v3 )
          (*(void (__fastcall **)(int, _DWORD, float))(*(_DWORD *)v3 + 84))(v3, 0, -1.0);
        FIELD_U8(a1, 85) = 0;
        return 0;
      }
    }
  }
  return result;
}
