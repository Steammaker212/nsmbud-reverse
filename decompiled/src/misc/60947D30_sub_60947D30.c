/* sub_60947D30
 * address: 0x60947D30   size: 124   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60947D30(int a1, int a2, int a3, int a4, float a5)
{
  int v6; // r2
  int v7; // r1
  int v8; // r3
  int v10; // [sp+0h] [bp-10h]

  v6 = a2;
  if ( a2 && a5 <= 0.0 )
  {
    a5 = 0.0;
    v7 = 0;
    v10 = a4;
  }
  else
  {
    if ( a5 < 1.0 || !a3 )
    {
      v10 = a4;
      v7 = 1;
      v8 = a3;
      return sub_60947DB0(a1, v7, v6, v8, a5, v10);
    }
    a5 = 0.0;
    v10 = a4;
    v7 = 0;
    v6 = a3;
  }
  v8 = 0;
  return sub_60947DB0(a1, v7, v6, v8, a5, v10);
}
