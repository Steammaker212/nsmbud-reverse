/* sub_60965C10
 * address: 0x60965C10   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60965C10(_DWORD *result)
{
  _DWORD *v1; // r4
  int v2; // r1
  int v3; // r1
  int v4; // r1

  v1 = result;
  v2 = result[81];
  if ( v2 )
  {
    sub_6093EA98(dword_60CD09F8, v2);
    result = 0;
    v1[81] = 0;
  }
  v3 = v1[170];
  if ( v3 )
  {
    sub_6093EA98(dword_60CD09F8, v3);
    result = 0;
    v1[170] = 0;
  }
  v4 = v1[82];
  if ( v4 )
  {
    sub_6093EA98(dword_60CD09F8, v4);
    v1[82] = 0;
    return 0;
  }
  return result;
}
