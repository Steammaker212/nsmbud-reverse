/* sub_60849300
 * address: 0x60849300   size: 172   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_60849300(int a1, _DWORD *a2, int a3, int a4)
{
  _WORD *v8; // r6
  int v9; // [sp+0h] [bp-28h] BYREF
  int v10; // [sp+4h] [bp-24h]
  int v11; // [sp+8h] [bp-20h]
  int v12; // [sp+Ch] [bp-1Ch]

  v12 = 0;
  v11 = 0;
  v10 = 0;
  v9 = 0;
  sub_6083D5B0(&v9);
  v9 = 32;
  v10 = 4;
  sub_60843650(a1, a3, a2, &v9);
  v8 = (_WORD *)sub_60843858(a1);
  sub_60843BA8(v8, a4);
  sub_60843BA8(v8 + 4, a4 + 12);
  sub_60843BA8(v8 + 8, a4 + 24);
  sub_60843BA8(v8 + 12, a4 + 36);
  sub_6084385C(a1);
}
