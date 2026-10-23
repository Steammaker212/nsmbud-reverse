/* sub_601C5354
 * address: 0x601C5354   size: 116   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601C5354(_DWORD *a1)
{
  _DWORD *v2; // r0
  float v3; // s0
  int result; // r0

  if ( a1[66] == 5 )
  {
    v2 = a1 + 32;
    if ( FIELD_U32(dword_60CC6D78, 412) == 7 )
      v3 = 1.9;
    else
      v3 = 1.4;
  }
  else
  {
    v3 = 1.9;
    v2 = a1 + 32;
  }
  ((void (__fastcall *)(_DWORD *, float, float, float, float))loc_60832560)(v2, v3, 0.1, 0.2, 0.02);
  result = a1[32];
  a1[33] = result;
  a1[34] = result;
  return result;
}
