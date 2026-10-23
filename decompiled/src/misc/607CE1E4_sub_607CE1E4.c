/* sub_607CE1E4
 * address: 0x607CE1E4   size: 124   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607CE1E4(_BYTE *a1, int a2, int a3)
{
  int v6; // r4
  char v7; // r8

  v6 = 0;
  if ( !sub_60766714((int)a1) )
  {
    v7 = a1[84];
    if ( (*(int (__fastcall **)(_BYTE *, int, int))(*(_DWORD *)a1 + 1180))(a1, a2, a3) == 1 )
    {
      AreaRumbleMgr_rumbleForPlayer(AreaRumbleMgr_instance, v7, 4, 0, 0);
      return 1;
    }
  }
  return v6;
}
