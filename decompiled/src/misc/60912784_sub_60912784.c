/* sub_60912784
 * address: 0x60912784   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60912784(
        int a1,
        int (__fastcall ***a2)(_DWORD, unsigned __int8 *, int),
        unsigned __int8 *a3,
        unsigned int a4)
{
  unsigned int v7; // r5
  int result; // r0
  unsigned int v9; // r7
  unsigned __int8 v10; // [sp+7h] [bp-19h] BYREF

  v7 = a4 >> 3;
  result = (**a2)(a2, a3, a4 >> 3);
  v9 = a4 - 8 * v7;
  if ( v9 )
  {
    (**a2)(a2, &v10, 1);
    result = v10 & ~(255 << v9) | a3[v7] & (255 << v9);
    a3[v7] = result;
  }
  return result;
}
