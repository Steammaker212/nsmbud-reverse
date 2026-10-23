/* sub_6042C900
 * address: 0x6042C900   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6042C900(int *a1, int a2, int a3, unsigned int a4)
{
  unsigned int v6; // r0
  int v8; // r7
  int v9; // r6
  int v10; // r2

  v6 = 0;
  if ( a4 < 2 )
    v6 = a4;
  v8 = (int)&a1[86 * v6 + 2];
  sub_60920EC8(v8, a3);
  v9 = *a1;
  sub_6091D95C(v9);
  v10 = FIELD_U32(v9, 636);
  if ( FIELD_U32(v9, 632) > a4 )
    v10 += 12 * a4;
  return sub_60920FDC(v8, a2, v10, -1, 0);
}
