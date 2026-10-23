/* sub_60242F84
 * address: 0x60242F84   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_60242F84(int a1)
{
  int v2; // r2
  _BOOL4 result; // r0

  v2 = FIELD_U32(a1, 6320);
  result = 1;
  if ( v2 != 1 )
    return (FIELD_U8(dword_60C9CF0C, 1404) & (1 << FIELD_U8(a1, 6314))) != 0;
  return result;
}
