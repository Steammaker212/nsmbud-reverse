/* sub_607D3918
 * address: 0x607D3918   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607D3918(_BYTE *a1)
{
  int v2; // r4

  v2 = 0;
  if ( (a1[1229] & 0x20) == 0 && (a1[6900] & 1) == 0 && (a1[6905] & 0x80) == 0 && sub_60786B38((int)(a1 + 688)) )
  {
    Player_changeState((int)a1, &stru_60CC55A8, 0);
    return 1;
  }
  return v2;
}
