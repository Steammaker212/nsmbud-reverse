/* sub_6042C574
 * address: 0x6042C574   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_6042C574(_DWORD *a1)
{
  _DWORD *v2; // r5

  *a1 = 0;
  v2 = a1 + 88;
  agl_TextureSampler_ref(a1 + 2);
  agl_TextureSampler_ref(v2);
  return a1;
}
