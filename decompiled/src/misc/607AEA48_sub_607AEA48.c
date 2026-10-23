/* sub_607AEA48
 * address: 0x607AEA48   size: 152   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607AEA48(_BYTE *a1)
{
  int v2; // r4
  int *v3; // r1

  v2 = 0;
  if ( (a1[1229] & 0x20) == 0 && (a1[6900] & 1) == 0 && (a1[6905] & 0x80) == 0 && sub_60786B38((int)(a1 + 688)) )
  {
    if ( (a1[1212] & 4) != 0 )
    {
      v3 = &dword_60CC4F6C;
      goto LABEL_9;
    }
    if ( !(*(int (__fastcall **)(_BYTE *))(*(_DWORD *)a1 + 1064))(a1) )
    {
      v3 = &dword_60CC4CDC;
LABEL_9:
      Player_changeState((int)a1, (StateBase *)v3, 0);
      return 1;
    }
  }
  return v2;
}
