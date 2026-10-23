/* sub_60178694
 * address: 0x60178694   size: 20   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60178694(int a1, unsigned int a2)
{
  if ( a2 >= 6 )
    a2 = 0;
  return *(_DWORD *)(a1 + 4 * a2 + 24);
}
