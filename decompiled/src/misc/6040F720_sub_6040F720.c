/* sub_6040F720
 * address: 0x6040F720   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6040F720(int a1, int a2, int a3, int a4)
{
  int v5; // r0
  int v6; // r5
  int v7; // r6
  int v8; // r2

  v5 = sub_60958564(a4);
  sub_6090B260(v5, FIELD_U32(a4, 40));
  v6 = FIELD_U32(a4, 32);
  v7 = FIELD_U32(a4, 40);
  v8 = sub_60958564(a4);
  return sub_6090E560(v6, v7, v8);
}
