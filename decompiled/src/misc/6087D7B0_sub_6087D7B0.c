/* sub_6087D7B0
 * address: 0x6087D7B0   size: 148   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6087D7B0(unsigned __int8 *a1, _DWORD *a2)
{
  int v4; // r0
  int v5; // r7
  int v6; // r6
  int v7; // r0
  int v9; // [sp+0h] [bp-28h] BYREF
  int v10; // [sp+4h] [bp-24h]
  int v11; // [sp+8h] [bp-20h]
  int v12; // [sp+Ch] [bp-1Ch]

  v4 = *(_DWORD *)a1;
  v5 = FIELD_U16(v4, 80);
  v6 = FIELD_U16(v4, 78);
  v12 = 0;
  v11 = 0;
  v10 = 0;
  v9 = 0;
  sub_6083D5B0(&v9);
  v9 = 48 * (*(unsigned __int16 *)(*(_DWORD *)a1 + 80) + *(unsigned __int16 *)(*(_DWORD *)a1 + 78));
  v10 = 80;
  v7 = sub_608352A0(a2, (int)&v9);
  return a1[6] * ((v7 + 48 * (v5 + v6) - 1) & -v7);
}
