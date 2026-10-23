/* sub_608B20F8
 * address: 0x608B20F8   size: 32   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608B20F8(int a1)
{
  int v1; // r1

  v1 = 0;
  if ( *(_WORD *)a1 == 8717 )
    return a1 + FIELD_U32(a1, 4);
  return v1;
}
