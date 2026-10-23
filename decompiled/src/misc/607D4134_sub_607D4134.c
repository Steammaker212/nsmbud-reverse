/* sub_607D4134
 * address: 0x607D4134   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607D4134(int a1)
{
  StateBase *v1; // r1

  if ( (FIELD_U8(a1, 6900) & 1) != 0 )
    v1 = (StateBase *)&dword_60CC5488;
  else
    v1 = &stru_60CC54D0;
  return Player_changeState(a1, v1, 1);
}
