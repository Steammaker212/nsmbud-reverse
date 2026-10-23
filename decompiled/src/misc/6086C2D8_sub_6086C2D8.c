/* sub_6086C2D8
 * address: 0x6086C2D8   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6086C2D8(unsigned __int8 *a1, _DWORD *a2)
{
  int v4; // r7
  int v5; // r0
  int v7; // [sp+0h] [bp-28h] BYREF
  int v8; // [sp+4h] [bp-24h]
  int v9; // [sp+8h] [bp-20h]
  int v10; // [sp+Ch] [bp-1Ch]

  v4 = *(unsigned __int16 *)(*(_DWORD *)a1 + 176);
  v10 = 0;
  v9 = 0;
  v8 = 0;
  v7 = 0;
  sub_6083D5B0(&v7);
  v7 = *(unsigned __int16 *)(*(_DWORD *)a1 + 176);
  v8 = 16;
  v5 = sub_608352A0(a2, (int)&v7);
  return a1[6] * ((v4 + v5 - 1) & -v5);
}
