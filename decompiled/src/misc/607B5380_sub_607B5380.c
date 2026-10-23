/* sub_607B5380
 * address: 0x607B5380   size: 148   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607B5380(_DWORD *a1)
{
  int v2; // r4

  v2 = 0;
  if ( (*((_BYTE *)a1 + 1225) & 1) != 0
    && !a1[3095]
    && !(*(int (__fastcall **)(_DWORD *))(*a1 + 1064))(a1)
    && *((float *)a1 + 31) <= 3.0
    && sub_60786738((int)(a1 + 172)) == 1
    && sub_6079A890(a1) == 1 )
  {
    Player_changeState((int)a1, (StateBase *)&dword_60CC4FCC, 0);
    return 1;
  }
  return v2;
}
