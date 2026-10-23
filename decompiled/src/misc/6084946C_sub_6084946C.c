/* sub_6084946C
 * address: 0x6084946C   size: 140   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_6084946C(int a1, _DWORD *a2, int a3, const void *a4)
{
  void *v8; // r0
  size_t v9; // [sp+0h] [bp-28h] BYREF
  int v10; // [sp+4h] [bp-24h]
  int v11; // [sp+8h] [bp-20h]
  int v12; // [sp+Ch] [bp-1Ch]

  v12 = 0;
  v11 = 0;
  v10 = 0;
  v9 = 0;
  sub_6083D5B0(&v9);
  a1 += 144;
  v9 = 12;
  v10 = 8;
  sub_60843650(a1, a3, a2, &v9);
  v8 = (void *)sub_60843858(a1);
  qmemcpy(v8, a4, v9);
  sub_6084385C(a1);
}
