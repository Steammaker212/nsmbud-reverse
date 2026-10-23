/* sub_60872EDC
 * address: 0x60872EDC   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60872EDC(int a1, _DWORD *a2)
{
  int v3; // r6
  int v4; // r2
  int v6; // [sp+0h] [bp-20h] BYREF
  int v7; // [sp+4h] [bp-1Ch]
  int v8; // [sp+8h] [bp-18h]
  int v9; // [sp+Ch] [bp-14h]

  v3 = 0;
  v4 = *(char *)(*(_DWORD *)a1 + 226);
  if ( v4 >= 0 )
    v3 = *(unsigned __int16 *)(*(_DWORD *)(*(_DWORD *)a1 + 72) + 32 * v4 + 26);
  v9 = 0;
  v8 = 0;
  v7 = 0;
  v6 = 0;
  sub_6083D5B0(&v6);
  v6 = v3;
  v7 = 16;
  return sub_608352A0(a2, (int)&v6);
}
