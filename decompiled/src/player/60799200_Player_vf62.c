/* Player_vf62
 * address: 0x60799200   size: 332   group: player
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Player_vf62(char *a1, int a2)
{
  int v5; // r6
  int v6; // r0
  bool v7; // zf
  int v8; // r0

  if ( a2 == 3 && (a1[1236] & 0x10) != 0 )
    return 0;
  if ( FIELD_U32(PlayerMgr_instance, 160) )
    return (*(int (__fastcall **)(char *))(*(_DWORD *)a1 + 252))(a1);
  v5 = 0;
  if ( sub_60766AA0((int)a1) )
  {
    if ( (a2 | 1) != 1 )
      goto LABEL_23;
    v6 = sub_60766708((int)a1);
    v7 = v6 == 1;
    if ( v6 == 1 )
      v7 = (a1[1220] & 4) == 0;
    if ( !v7 )
    {
LABEL_23:
      if ( sub_6079D894(a1) )
      {
        v8 = sub_6079D894(a1);
        (*(void (__fastcall **)(int, int))(*(_DWORD *)v8 + 248))(v8, a2);
      }
      if ( (a2 | 1) == 1 )
      {
        if ( a1[1204] < 0 )
          (*(void (__fastcall **)(char *))(*(_DWORD *)a1 + 244))(a1);
        else
          (*(void (__fastcall **)(char *, int, _DWORD))(*(_DWORD *)a1 + 1184))(a1, 15, 0);
        sub_60773630((int)a1, 43, 0);
        AreaRumbleMgr_rumbleForPlayer(AreaRumbleMgr_instance, a1[84], 4, 0, 0);
      }
      else
      {
        (*(void (__fastcall **)(char *))(*(_DWORD *)a1 + 244))(a1);
      }
      return 1;
    }
  }
  return v5;
}
