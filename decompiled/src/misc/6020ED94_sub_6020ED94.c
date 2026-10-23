/* sub_6020ED94
 * address: 0x6020ED94   size: 28   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6020ED94(int a1)
{
  unsigned int v1; // r1

  v1 = FIELD_U32(a1, 464);
  if ( v1 >= 2 )
    v1 = 0;
  return sub_601867D0(a1, *(ModelWrapper **)(a1 + 4 * v1 + 372), 40.0);
}
