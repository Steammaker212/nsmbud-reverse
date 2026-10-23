/* sub_6087D748
 * address: 0x6087D748   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6087D748(int a1, _DWORD *a2)
{
  int v5; // [sp+0h] [bp-20h] BYREF
  int v6; // [sp+4h] [bp-1Ch]
  int v7; // [sp+8h] [bp-18h]
  int v8; // [sp+Ch] [bp-14h]

  v8 = 0;
  v7 = 0;
  v6 = 0;
  v5 = 0;
  sub_6083D5B0(&v5);
  v5 = 48 * (*(unsigned __int16 *)(*(_DWORD *)a1 + 80) + *(unsigned __int16 *)(*(_DWORD *)a1 + 78));
  v6 = 80;
  return sub_608352A0(a2, (int)&v5);
}
