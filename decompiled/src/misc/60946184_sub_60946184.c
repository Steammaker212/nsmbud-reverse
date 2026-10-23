/* sub_60946184
 * address: 0x60946184   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60946184(_DWORD *a1, int a2, unsigned int a3)
{
  int result; // r0

  result = (*(int (__fastcall **)(_DWORD *))(*a1 + 68))(a1);
  if ( !result )
  {
    a1[3] = a2;
    a1[4] = a3 >> 2;
    return a3 >> 2;
  }
  return result;
}
