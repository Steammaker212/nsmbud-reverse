/* sub_601D6DF8
 * address: 0x601D6DF8   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_601D6DF8(_BYTE *a1)
{
  unsigned int result; // r0

  a1[280] = 1;
  result = (unsigned __int8)a1[1120];
  if ( (result & 1) != 0 )
  {
    (*(void (__fastcall **)(_BYTE *, int, int, float))(*(_DWORD *)a1 + 336))(a1, 6, -1, 0.0);
    result = *((_DWORD *)a1 + 280) & 0xFFFFFFFE;
    *((_DWORD *)a1 + 280) = result;
  }
  return result;
}
