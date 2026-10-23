/* sub_601D6E54
 * address: 0x601D6E54   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_601D6E54(int a1)
{
  unsigned int result; // r0

  FIELD_U8(a1, 280) = 1;
  if ( (unsigned int)(FIELD_U32(a1, 1112) - 11) <= 1 )
    FIELD_U8(a1, 776) = 1;
  result = FIELD_U8(a1, 1120);
  if ( (result & 1) != 0 )
  {
    (*(void (__fastcall **)(int, int, int, float))(*(_DWORD *)a1 + 336))(a1, 11, -1, 0.0);
    result = FIELD_U32(a1, 1120) & 0xFFFFFFFE;
    FIELD_U32(a1, 1120) = result;
  }
  return result;
}
