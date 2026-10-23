/* sub_6084B2A0
 * address: 0x6084B2A0   size: 292   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6084B2A0(_DWORD *a1)
{
  int v2; // r9
  int v3; // r6
  int v4; // r7
  int v5; // r0
  int v7; // [sp+0h] [bp-40h] BYREF
  int v8; // [sp+4h] [bp-3Ch]
  int v9; // [sp+8h] [bp-38h]
  int v10; // [sp+Ch] [bp-34h]
  int v11; // [sp+10h] [bp-30h]
  int v12; // [sp+14h] [bp-2Ch]
  int v13; // [sp+18h] [bp-28h]
  int v14; // [sp+1Ch] [bp-24h]

  v10 = 0;
  v9 = 0;
  v8 = 0;
  v7 = 0;
  sub_6083D5B0(&v7);
  v8 = 8;
  v2 = sub_608352A0(a1, (int)&v7);
  v10 = 0;
  v9 = 0;
  v8 = 0;
  v7 = 0;
  sub_6083D5B0(&v7);
  v8 = 16;
  v3 = sub_608352A0(a1, (int)&v7);
  v10 = 0;
  v9 = 0;
  v8 = 0;
  v7 = 0;
  sub_6083D5B0(&v7);
  v8 = 16;
  v4 = sub_608352A0(a1, (int)&v7);
  v14 = 0;
  v13 = 0;
  v12 = 0;
  v11 = 0;
  v10 = 0;
  v9 = 0;
  v8 = 0;
  v7 = 0;
  sub_6083D5C0(&v7);
  v5 = sub_60836514();
  return (((((((v2 + 111) & -v2) + v3 + 11) & -v3) + v4 + 3) & -v4) + v5 + 3) & -v5;
}
