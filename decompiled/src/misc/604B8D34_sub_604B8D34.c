/* sub_604B8D34
 * address: 0x604B8D34   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604B8D34(int a1)
{
  int v1; // r4
  int result; // r0

  v1 = a1 + 4;
  result = sub_6047467C((_DWORD *)(a1 + 4), 0, &dword_60CA24D0, (int)&dword_60CA2480, 1.0, 0);
  if ( result == 1 )
    return sub_6047482C(v1, 0);
  return result;
}
