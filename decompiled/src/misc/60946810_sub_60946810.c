/* sub_60946810
 * address: 0x60946810   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60946810(_DWORD *a1, int a2, int a3)
{
  int result; // r0

  result = (*(int (__fastcall **)(_DWORD *))(*a1 + 68))(a1);
  if ( !result )
  {
    a1[3] = a2;
    a1[4] = a3;
  }
  return result;
}
