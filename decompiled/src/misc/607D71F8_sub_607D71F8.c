/* sub_607D71F8
 * address: 0x607D71F8   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607D71F8(int a1)
{
  int result; // r0

  if ( (float)(FIELD_F32(a1, 88) * FIELD_F32(a1, 92)) >= 0.0 )
    return Player_changeState(a1, (StateBase *)&dword_60CC5488, 0);
  result = ((int (__fastcall *)(int))loc_607743E8)(a1);
  if ( !result )
    return Player_changeState(a1, (StateBase *)&dword_60CC5488, 0);
  return result;
}
