/* Player__vfA8
 * address: 0x607977EC   size: 48   group: player
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_607977EC(int a1)
{
  int v2; // r0
  bool v3; // zf

  v2 = sub_607C70B0(a1);
  v3 = v2 == 0;
  if ( v2 )
    v3 = (FIELD_U8(v2, 1231) & 1) == 0;
  return v3 && sub_6075FA34(a1);
}
