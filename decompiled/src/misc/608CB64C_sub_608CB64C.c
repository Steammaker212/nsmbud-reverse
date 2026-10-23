/* sub_608CB64C
 * address: 0x608CB64C   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_608CB64C(int a1)
{
  int v1; // r1

  v1 = FIELD_U32(a1, 196);
  if ( v1 )
    qmemcpy((void *)(v1 + 40), (const void *)(a1 + 8), 0x78u);
}
