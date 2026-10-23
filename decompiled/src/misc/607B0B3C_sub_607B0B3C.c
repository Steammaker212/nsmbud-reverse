/* sub_607B0B3C
 * address: 0x607B0B3C   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607B0B3C(int a1)
{
  int result; // r0
  StateBase *v3; // r1

  result = sub_6079B544(a1, 0.0, FIELD_F32(a1, 88));
  if ( !result )
  {
    if ( (FIELD_U8(a1, 6900) & 1) != 0 )
      v3 = (StateBase *)&dword_60CC4BBC;
    else
      v3 = (StateBase *)&unk_60CC4C04;
    return Player_changeState(a1, v3, 1);
  }
  return result;
}
