/* sub_605184C0
 * address: 0x605184C0   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_605184C0(int a1)
{
  _DWORD *v1; // r4
  unsigned int result; // r0

  v1 = (_DWORD *)(a1 + 40);
  result = sub_604746E4(a1 + 40, &dword_60CA88A0, &dword_60CA88CC);
  if ( result != -1 )
  {
    sub_604742D0(v1, 0, &dword_60CA88A0, result, 1.0, 0);
    return sub_6047482C((int)v1, 0);
  }
  return result;
}
