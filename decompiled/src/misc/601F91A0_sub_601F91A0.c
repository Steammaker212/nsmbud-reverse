/* sub_601F91A0
 * address: 0x601F91A0   size: 96   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_601F91A0(int a1, float result)
{
  float v3; // s0

  if ( !FIELD_U8(a1, 744) )
  {
    (*(void (__fastcall **)(int, _DWORD))(*(_DWORD *)a1 + 328))(a1, FIELD_U32(a1, 624));
    if ( FIELD_U8(a1, 621) )
    {
      v3 = 150.0;
      FIELD_U32(a1, 180) = 2147483520;
      FIELD_U32(a1, 192) = 2147483520;
    }
    else
    {
      v3 = -153.0;
    }
    result = v3 + FIELD_F32(a1, 568);
    FIELD_F32(a1, 80) = result;
  }
  return result;
}
