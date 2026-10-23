/* sub_60993670
 * address: 0x60993670   size: 32   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60993670(int *a1)
{
  int v1; // r1

  v1 = *a1;
  if ( (*((_BYTE *)a1 + 30) & 0x40) != 0 )
    return (*(int (**)(void))(v1 + 24))();
  else
    return (*(int (**)(void))(v1 + 32))();
}
