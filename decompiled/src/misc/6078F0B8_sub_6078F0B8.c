/* sub_6078F0B8
 * address: 0x6078F0B8   size: 32   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_6078F0B8(_DWORD *result)
{
  int v1; // r1

  v1 = result[52];
  if ( (v1 & 0x800) == 0 )
  {
    result[52] = v1 | 0x800;
    return (_DWORD *)(*(int (__fastcall **)(_DWORD *))(*result + 232))(result);
  }
  return result;
}
