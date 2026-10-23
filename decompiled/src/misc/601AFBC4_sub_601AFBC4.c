/* sub_601AFBC4
 * address: 0x601AFBC4   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601AFBC4(_DWORD *a1)
{
  int result; // r0

  if ( (int)a1[91] >= 0 )
  {
    sub_601E4F60(dword_60C8B13C);
    a1[91] = -1;
  }
  result = sub_60185EA8((int)a1);
  if ( result == 1 )
    return (*(int (__fastcall **)(_DWORD *))(*a1 + 152))(a1);
  return result;
}
