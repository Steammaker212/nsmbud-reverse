/* sub_60896484
 * address: 0x60896484   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60896484(int a1, int a2, int a3)
{
  int result; // r0

  result = FIELD_U8(a1, 76);
  if ( result )
  {
    sub_60835494(a1);
    sub_60836614(a1 + 80);
    if ( FIELD_U32(a1, 368) )
    {
      (*(void (__fastcall **)(int))(*(_DWORD *)a3 + 12))(a3);
      FIELD_U32(a1, 368) = 0;
    }
    FIELD_U8(a1, 76) = 0;
    return 0;
  }
  return result;
}
