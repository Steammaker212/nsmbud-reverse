/* sub_60908670
 * address: 0x60908670   size: 28   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60908670(_DWORD *result, int a2)
{
  result[35] = a2;
  if ( (unsigned int)(result[30] - 1) <= 1 )
    return (_DWORD *)nn__os__ChangeThreadPriority(result[32], a2);
  return result;
}
