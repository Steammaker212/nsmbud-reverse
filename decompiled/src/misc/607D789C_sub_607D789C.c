/* sub_607D789C
 * address: 0x607D789C   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607D789C(_BYTE *a1)
{
  int v2; // r4
  char v3; // r0
  bool v4; // zf

  v2 = 0;
  v3 = a1[1219];
  v4 = (v3 & 4) == 0;
  if ( (v3 & 4) == 0 )
    v4 = (a1[1207] & 0x40) == 0;
  if ( v4 && sub_60786974((int)(a1 + 688)) && (a1[6904] & 0x18) == 0 && (a1[1226] & 0x80) == 0 )
  {
    Player_changeState((int)a1, &stru_60CC5518, 0);
    return 1;
  }
  return v2;
}
