/* sub_60872F48
 * address: 0x60872F48   size: 144   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60872F48(int *a1, _DWORD *a2)
{
  int v4; // r0
  int v5; // r1
  int v6; // r7
  int v7; // r0
  int v9; // [sp+0h] [bp-28h] BYREF
  int v10; // [sp+4h] [bp-24h]
  int v11; // [sp+8h] [bp-20h]
  int v12; // [sp+Ch] [bp-1Ch]

  v4 = *a1;
  v5 = FIELD_S8(v4, 226);
  if ( v5 < 0 )
    return 0;
  v6 = *(unsigned __int16 *)(FIELD_U32(v4, 72) + 32 * v5 + 26);
  v12 = 0;
  v11 = 0;
  v10 = 0;
  v9 = 0;
  sub_6083D5B0(&v9);
  v9 = v6;
  v10 = 16;
  v7 = sub_608352A0(a2, (int)&v9);
  return *((unsigned __int8 *)a1 + 40) * ((v6 + v7 - 1) & -v7);
}
