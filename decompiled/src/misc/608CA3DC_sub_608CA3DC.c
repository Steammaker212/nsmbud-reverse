/* sub_608CA3DC
 * address: 0x608CA3DC   size: 144   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608CA3DC(int a1, int a2)
{
  _BOOL4 v4; // r4
  _DWORD *v5; // r5
  int v6; // r6
  int v7; // r4
  int v9; // [sp+0h] [bp-20h]
  int v10; // [sp+0h] [bp-20h]

  v4 = sub_608B0FF8(a2);
  v5 = (_DWORD *)sub_608B0EEC(a2);
  v6 = sub_608B0F6C(a2);
  if ( v4 )
  {
    v7 = sub_608B0F8C(a2);
    v9 = sub_608B1010(a2);
    return sub_608CA030(a1, v5, v6, v7, v9);
  }
  else
  {
    v10 = sub_608B1010(a2);
    return sub_608CA030(a1, v5, v6, 0, v10);
  }
}
