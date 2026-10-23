/* sub_6076DD50
 * address: 0x6076DD50   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6076DD50(_BYTE *a1)
{
  int result; // r0

  result = 0;
  if ( (a1[1231] & 4) == 0 )
  {
    if ( (a1[1239] & 0x40) == 0 )
    {
      *((_DWORD *)a1 + 22) = 0;
      *((_DWORD *)a1 + 31) = 0;
      (*(void (__fastcall **)(_BYTE *))(*(_DWORD *)a1 + 1108))(a1);
    }
    (*(void (__fastcall **)(_BYTE *))(*(_DWORD *)a1 + 680))(a1);
    return 1;
  }
  return result;
}
