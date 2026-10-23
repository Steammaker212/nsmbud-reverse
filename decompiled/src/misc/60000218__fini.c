/* _fini
 * address: 0x60000218   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int fini()
{
  return _nnmusl_fini_dso(&dword_60000000, sub_609AD3BC, dword_60C7B274, dword_60C7B274, dword_60C7B274, dword_60C7B274);
}
