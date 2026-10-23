/* sub_6082920C
 * address: 0x6082920C   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_6082920C(int a1, unsigned int a2, unsigned int a3)
{
  _BOOL4 v6; // r1
  _BOOL4 result; // r0
  int v8; // r0

  v6 = sub_6040E218(a2);
  result = 1;
  if ( !v6 )
  {
    v8 = sub_6040E5B0(a2, a3, 1);
    return (*(unsigned __int8 *)(FIELD_U32(a1, 40) + v8 / 8 + 44108) & (1 << (v8 & 7))) != 0;
  }
  return result;
}
