/* sub_60861274
 * address: 0x60861274   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60861274(int a1, int a2)
{
  int result; // r0

  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 40))(a1);
  if ( !a2 )
    return FIELD_U32(a1, 220);
  result = 0;
  if ( FIELD_S8(a1, 213) >= a2 )
    return *(_DWORD *)(FIELD_U32(a1, 216) + 8 * a2 - 4);
  return result;
}
