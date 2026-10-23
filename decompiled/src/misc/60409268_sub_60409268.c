/* sub_60409268
 * address: 0x60409268   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60409268(_BYTE *a1, _DWORD *a2)
{
  unsigned int v3; // r3
  int result; // r0
  int v5; // r2

  v3 = (unsigned __int8)(a1[6559] - 1);
  result = 0;
  if ( v3 <= 2 && a1[6476] == 3 )
  {
    v5 = (unsigned __int8)a1[6481];
    if ( v5 )
    {
      *a2 = v5;
      return 1;
    }
  }
  return result;
}
