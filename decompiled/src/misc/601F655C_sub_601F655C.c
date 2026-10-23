/* sub_601F655C
 * address: 0x601F655C   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601F655C(_DWORD *a1)
{
  int result; // r0

  (*(void (__fastcall **)(_DWORD *))(*a1 + 352))(a1);
  result = sub_601916EC(dword_60C8996C);
  if ( (unsigned int)(result - 52) <= 2 )
  {
    result = sub_601E4EA4(dword_60C8B13C, result - 5, 0, (int)(a1 + 20), 1);
    a1[179] = result;
  }
  return result;
}
