/* sub_60973A54
 * address: 0x60973A54   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_60973A54()
{
  int *result; // r0

  result = (int *)dword_60CD0B6C;
  if ( dword_60CD0B6C )
  {
    dword_60CD0B6C = 0;
    (*(void (__fastcall **)(int *))*result)(result);
    if ( dword_60CD0B70 )
      (*(void (__fastcall **)(int))(*(_DWORD *)dword_60CD0B70 + 8))(dword_60CD0B70);
    dword_60CD0B70 = 0;
    return &dword_60CD0B70;
  }
  return result;
}
