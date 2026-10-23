/* sub_6072A820
 * address: 0x6072A820   size: 28   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

__int64 __fastcall sub_6072A820(int a1, unsigned int a2)
{
  if ( a2 >= 0x40 )
    a2 = 0;
  return *(_QWORD *)(a1 + 24 * a2 + 792);
}
