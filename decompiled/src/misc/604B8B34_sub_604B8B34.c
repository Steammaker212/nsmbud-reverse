/* sub_604B8B34
 * address: 0x604B8B34   size: 112   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604B8B34(int a1)
{
  int v1; // r4
  int result; // r0
  int v3; // r0

  v1 = a1 + 4;
  result = sub_6047467C((_DWORD *)(a1 + 4), 0, &dword_60CA24B0, (int)&dword_60CA2480, 1.0, 0);
  if ( result == 1 )
  {
    result = sub_6047482C(v1, 0);
    if ( result )
    {
      v3 = sub_60473B4C(v1);
      return sub_6098F1D4(v3);
    }
  }
  return result;
}
