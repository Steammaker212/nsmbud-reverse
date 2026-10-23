/* sub_60835AD4
 * address: 0x60835AD4   size: 188   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60835AD4(int a1, int a2)
{
  int result; // r0

  dword_60CC780C(FIELD_U32(a1, 184), a2);
  dword_60CC78E4(FIELD_U32(a1, 184), 3, FIELD_U32(a2, 8));
  dword_60CC78E8(FIELD_U32(a1, 184), 3, FIELD_U32(a2, 12));
  dword_60CC78EC(FIELD_U32(a1, 184), 2, FIELD_U32(a2, 16));
  dword_60CC78EC(FIELD_U32(a1, 184), 1, FIELD_U32(a2, 20));
  result = FIELD_U8(a2, 26);
  if ( (result & 8) == 0 )
    return dword_60CC78C4(FIELD_U32(a1, 184), 0, 0.0, 1.0);
  return result;
}
