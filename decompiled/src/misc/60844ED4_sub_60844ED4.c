/* sub_60844ED4
 * address: 0x60844ED4   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60844ED4(int a1, int a2, nn__mii *a3)
{
  _DWORD *v4; // r0
  int v5; // r3
  int v6; // r4
  int v7; // r5
  int v8; // r6
  int v9; // r4
  _DWORD v11[10]; // [sp+0h] [bp-28h] BYREF

  if ( (int)nn__mii__GetExpressionCount(a3, a2) < 1 )
    return 0;
  v4 = (_DWORD *)sub_6083E70C(a2);
  v5 = v4[1];
  v6 = v4[2];
  v7 = v4[3];
  v8 = v4[4];
  v11[0] = *v4;
  v11[1] = v5;
  v11[2] = v6;
  v11[3] = v7;
  v11[4] = v8;
  v9 = sub_608479E4(v11, 9);
  nullsub_84(v11);
  return v9;
}
