/* sub_60434518
 * address: 0x60434518   size: 364   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60434518(unsigned __int8 *a1)
{
  int result; // r0

  (*(void (__fastcall **)(unsigned __int8 *))(*(_DWORD *)a1 + 64))(a1);
  (*(int (__fastcall **)(unsigned __int8 *))(*(_DWORD *)a1 + 72))(a1);
  (*(int (__fastcall **)(unsigned __int8 *))(*(_DWORD *)a1 + 72))(a1);
  (*(int (__fastcall **)(unsigned __int8 *))(*(_DWORD *)a1 + 0x48))(a1);
  sub_6086D74C((int)(a1 + 40));
  result = a1[316];
  if ( (result & 1) != 0 )
    return sub_604332D4((int)a1);
  return result;
}
