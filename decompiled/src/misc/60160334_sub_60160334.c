/* sub_60160334
 * address: 0x60160334   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60160334(int result, int a2)
{
  int v3; // r3
  int v4; // r1

  v3 = FIELD_U32(a2, 2176);
  v4 = a2 + 2172;
  if ( v3 || FIELD_U32(a2, 2180) || FIELD_U32(result, 280) == v4 )
    return (*(int (__fastcall **)(int, int))(FIELD_U32(result, 276) + 4))(result + 276, v4);
  return result;
}
