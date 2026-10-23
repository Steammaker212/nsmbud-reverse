/* sub_608CFB44
 * address: 0x608CFB44   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608CFB44(_DWORD *a1)
{
  int v2; // r1
  int result; // r0

  v2 = (*(int (__fastcall **)(_DWORD *))(*a1 + 64))(a1);
  result = 0;
  if ( v2 == 1 )
    return a1[10];
  return result;
}
