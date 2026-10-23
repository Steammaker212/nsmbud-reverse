/* sub_6078E574
 * address: 0x6078E574   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void **__fastcall sub_6078E574(int a1)
{
  void **result; // r0

  sub_6079421C();
  result = *(void ***)(a1 + 292);
  if ( result )
    return (void **)DrawMgr_drawModel(DrawMgr_instance, *result);
  return result;
}
