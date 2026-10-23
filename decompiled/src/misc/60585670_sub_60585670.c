/* sub_60585670
 * address: 0x60585670   size: 28   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60585670(int a1, unsigned int a2)
{
  if ( a2 >= 0x100 )
    a2 = 0;
  return *(_DWORD *)(a1 + 24 * a2 + 27672);
}
