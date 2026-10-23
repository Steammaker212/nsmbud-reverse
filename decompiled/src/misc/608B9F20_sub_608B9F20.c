/* sub_608B9F20
 * address: 0x608B9F20   size: 136   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608B9F20(int *a1, int a2)
{
  int v4; // r6
  int v5; // r0
  int v6; // r1
  int v7; // r5
  _BYTE v9[4]; // [sp+0h] [bp-18h] BYREF
  int v10; // [sp+4h] [bp-14h]

  v4 = *a1;
  v9[0] = byte_60CC8D12;
  v9[1] = byte_60CC8D13;
  v10 = dword_60C5AF24;
  v5 = sub_608B0CEC((int)v9);
  v6 = *a1;
  v7 = 2 * v5 + 1024;
  if ( !v5 )
    v7 = 1000;
  return ((a2 - 1 + v7 * v4) & -a2) + ((a2 - 1 + 880 * v6) & -a2);
}
