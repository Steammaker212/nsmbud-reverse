/* sub_6090E2D8
 * address: 0x6090E2D8   size: 136   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_6090E2D8(int *a1, int a2, int a3, int a4, int a5)
{
  char *v8; // r6
  int v9; // r0
  unsigned int v10; // r1
  char v11; // [sp+8h] [bp-420h] BYREF

  v8 = (char *)a1[17];
  if ( v8 )
  {
    v9 = a1[18];
  }
  else
  {
    v9 = 512;
    v8 = &v11;
  }
  if ( a3 < 0 )
  {
    v10 = v9;
  }
  else
  {
    v10 = a3 + 1;
    if ( v9 < a3 + 1 )
      v10 = v9;
  }
  sub_60901A08(v8, v10, a2, v10 - 1);
  sub_6090E1F4(a1, (int)v8, -1, a4, a5);
}
