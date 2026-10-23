/* sub_60722E70
 * address: 0x60722E70   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60722E70(int a1, int a2, int a3, _DWORD *a4)
{
  int v5; // r0

  v5 = dword_60CBD85C;
  FIELD_U32(dword_60CBD85C, 2964) = 0;
  sub_6093EA98(dword_60CD09F8, FIELD_U32(v5, 2552));
  sub_6090B260(a4[3], a4[10]);
  return sub_6090E560(a4[8], a4[10], a4[3]);
}
