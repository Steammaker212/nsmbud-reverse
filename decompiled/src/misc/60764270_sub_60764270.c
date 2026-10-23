/* sub_60764270
 * address: 0x60764270   size: 148   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60764270(char *a1, int a2)
{
  int (__fastcall *v3)(char *, _DWORD, int); // r3
  int v4; // r1
  int result; // r0

  v3 = *(int (__fastcall **)(char *, _DWORD, int))(*(_DWORD *)a1 + 1180);
  if ( a2 == 15 )
  {
    v4 = v3(a1, 0, 15);
    result = 1;
    if ( !v4 )
      return 0;
  }
  else
  {
    if ( ((int (__fastcall *)(char *, _DWORD))v3)(a1, 0) != 1 )
      return 0;
    AreaRumbleMgr_rumbleForPlayer(AreaRumbleMgr_instance, a1[84], 4, 0, 0);
    return 1;
  }
  return result;
}
