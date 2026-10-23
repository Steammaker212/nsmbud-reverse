/* sub_6097C778
 * address: 0x6097C778   size: 64   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6097C778(_DWORD *a1, int a2)
{
  int v4; // r0
  int result; // r0

  sub_6098D964(a1[1]);
  v4 = a1[4];
  if ( v4 )
    sub_60996EE8(v4, a2);
  result = a1[5];
  if ( result )
    return sub_60996EE8(result, a2);
  return result;
}
