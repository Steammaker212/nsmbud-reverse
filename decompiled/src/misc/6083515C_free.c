/* free
 * address: 0x6083515C   size: 24   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void *__fastcall free(void *result)
{
  if ( result )
    return (void *)nn__mem__StandardAllocator__Free((nn__mem__StandardAllocator *)&unk_60CC7278, result);
  return result;
}
