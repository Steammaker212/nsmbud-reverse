/* sub_607BB984
 * address: 0x607BB984   size: 172   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607BB984(_BYTE *a1)
{
  bool v1; // zf
  bool v2; // zf
  int v4; // r2

  v1 = (a1[1217] & 0x10) == 0;
  if ( (a1[1217] & 0x10) == 0 )
    v1 = (a1[1230] & 2) == 0;
  if ( !v1 )
    return 0;
  v2 = (a1[1211] & 4) == 0;
  if ( (a1[1211] & 4) == 0 )
    v2 = (a1[1214] & 0x20) == 0;
  if ( !v2 || (a1[6902] & 4) == 0 )
    return 0;
  if ( (a1[6914] & 4) != 0 )
  {
    v4 = 0;
  }
  else
  {
    if ( (a1[1226] & 4) == 0 )
    {
      Player_changeState((int)a1, (StateBase *)&dword_60CC4D24, 1);
      return 1;
    }
    v4 = 2;
  }
  Player_changeState((int)a1, (StateBase *)&dword_60CC4D24, v4);
  return 1;
}
