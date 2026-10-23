/* sub_60965348
 * address: 0x60965348   size: 192   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60965348(_DWORD *result)
{
  _DWORD *v1; // r4
  int v2; // r1
  int v3; // r1
  int v4; // r1
  int v5; // r1
  int v6; // r1

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
    result = 0;
    v1[82] = 0;
  }
  v5 = v1[258];
  if ( v5 )
  {
    sub_6093EA98(dword_60CD09F8, v5);
    result = 0;
    v1[258] = 0;
  }
  v6 = v1[346];
  if ( v6 )
  {
    sub_6093EA98(dword_60CD09F8, v6);
    v1[346] = 0;
    return 0;
  }
  return result;
}
