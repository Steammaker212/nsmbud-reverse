/* sub_607C8690
 * address: 0x607C8690   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607C8690(_BYTE *a1, int a2, int a3)
{
  bool v4; // zf

  v4 = a3 == 1;
  if ( a3 == 1 )
    v4 = (a1[1219] & 4) == 0;
  if ( !v4 )
    return (*(int (__fastcall **)(_BYTE *, _DWORD, int))(*(_DWORD *)a1 + 1180))(a1, 0, 15);
  Player_changeState((int)a1, (StateBase *)&unk_60CC4C4C, 1);
  ((void (__fastcall *)(_BYTE *, int))loc_60799BA0)(a1, 1);
  return 0;
}
