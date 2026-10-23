/* sub_6087552C
 * address: 0x6087552C   size: 112   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6087552C(int a1, _DWORD *a2)
{
  int v4; // r0
  int v6; // [sp+0h] [bp-20h] BYREF
  int v7; // [sp+4h] [bp-1Ch]
  int v8; // [sp+8h] [bp-18h]
  int v9; // [sp+Ch] [bp-14h]

  v9 = 0;
  v8 = 0;
  v7 = 0;
  v6 = 0;
  sub_6083D5B0(&v6);
  v6 = 256;
  v7 = 16;
  v4 = sub_608352A0(a2, (int)&v6);
  return FIELD_U8(a1, 10) * ((v4 + 255) & -v4) * FIELD_U8(a1, 11);
}
