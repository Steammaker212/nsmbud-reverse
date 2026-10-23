/* sub_605E9820
 * address: 0x605E9820   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_605E9820(_DWORD *a1)
{
  _BOOL4 result; // r0
  int v3; // r2
  bool v4; // zf

  result = 1;
  v3 = a1[9];
  v4 = v3 == 0;
  if ( v3 )
    v4 = a1[41] == 0;
  if ( !v4 )
    return a1[73] == 3;
  return result;
}
