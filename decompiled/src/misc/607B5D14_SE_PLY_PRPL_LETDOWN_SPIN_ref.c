/* SE_PLY_PRPL_LETDOWN_SPIN_ref
 * address: 0x607B5D14   size: 308   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_PLY_PRPL_LETDOWN_SPIN_ref(int a1)
{
  int v2; // r0
  _DWORD *v4; // r4
  int v5; // t1
  int v6; // r2

  if ( (FIELD_U8(a1, 1212) & 4) != 0 )
  {
    if ( FIELD_U32(a1, 9940) == 2 )
    {
      FIELD_U32(a1, 12100) = 327680000;
      FIELD_U32(a1, 12448) = 1;
      PlayerBase_dispatchVirtual3(a1 + 11356, 140, 0.0);
      sub_607734E8((unsigned __int8 *)a1, (int)"SE_PLY_PRPL_LETDOWN_SPIN", 0, 0);
      v5 = FIELD_U32(a1, 12460);
      v4 = (_DWORD *)(a1 + 12460);
      if ( !v5 )
      {
        *v4 = 1;
        return 1;
      }
    }
  }
  else
  {
    if ( (FIELD_U8(a1, 6904) & 0x18) != 0 )
    {
      v2 = sub_607B9CC8(a1, 0, 1);
      Player_changeState(a1, (StateBase *)&dword_60CC4E0C, v2);
      return 0;
    }
    if ( !FIELD_U8(a1, 12453) )
      return 0;
    sub_607AE0D4(a1);
    if ( (FIELD_U8(a1, 6900) & 1) != 0 )
      v6 = 2;
    else
      v6 = 0;
    Player_changeState(a1, (StateBase *)&dword_60CC4F4C, v6);
  }
  return 1;
}
