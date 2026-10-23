/* sub_608CFB08
 * address: 0x608CFB08   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_608CFB08(_DWORD *a1)
{
  _BOOL4 result; // r0
  int v3; // r2
  bool v4; // zf

  result = 0;
  v3 = a1[6];
  v4 = v3 == 0;
  if ( v3 )
    v4 = a1[8] == 0;
  if ( !v4 )
    return a1[9] != 0;
  return result;
}
