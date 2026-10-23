/* sub_604CB19C
 * address: 0x604CB19C   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604CB19C(int a1)
{
  int result; // r0

  result = *(unsigned __int8 *)(sub_6047482C(a1 + 40, 1u) + 51);
  if ( (result & 1) != 0 )
    return sub_604D3074(a1);
  return result;
}
