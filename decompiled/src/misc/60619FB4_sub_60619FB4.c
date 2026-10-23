/* sub_60619FB4
 * address: 0x60619FB4   size: 28   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60619FB4(int a1)
{
  int v1; // r3

  v1 = a1 + 164;
  if ( (FIELD_U8(a1, 20) & 1) != 0 )
    v1 = a1 + 6624;
  return *(_DWORD *)v1;
}
