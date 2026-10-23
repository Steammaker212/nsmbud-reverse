/* sub_60912C84
 * address: 0x60912C84   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60912C84(int a1, int a2, int a3, unsigned int a4)
{
  int v7; // r6
  int result; // r0

  v7 = (unsigned __int8)(a4 >> 3);
  result = (*(int (__fastcall **)(int, int, int))(*(_DWORD *)a2 + 4))(a2, a3, v7);
  if ( a4 != 8 * v7 )
    return (*(int (__fastcall **)(int, int, int))(*(_DWORD *)a2 + 4))(a2, a3 + v7, 1);
  return result;
}
