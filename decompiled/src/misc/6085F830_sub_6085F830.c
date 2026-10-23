/* sub_6085F830
 * address: 0x6085F830   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6085F830(_DWORD *a1, int a2, int a3)
{
  int v6; // r0
  int v8; // [sp+0h] [bp-28h] BYREF
  int v9; // [sp+4h] [bp-24h]
  int v10; // [sp+8h] [bp-20h]
  int v11; // [sp+Ch] [bp-1Ch]

  v11 = 0;
  v10 = 0;
  v9 = 0;
  v8 = 0;
  sub_6083D5B0(&v8);
  v8 = a3;
  v9 = a2;
  v6 = sub_608352A0(a1, (int)&v8);
  return (a3 + v6 - 1) & -v6;
}
