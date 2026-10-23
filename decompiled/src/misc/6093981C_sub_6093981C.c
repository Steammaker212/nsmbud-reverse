/* sub_6093981C
 * address: 0x6093981C   size: 124   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6093981C(int a1, float *a2, float *a3, int a4, int a5, int a6, int a7)
{
  unsigned __int8 *v11; // r0
  int32x2_t v13[6]; // [sp+10h] [bp-B8h] BYREF
  _BYTE v14[136]; // [sp+40h] [bp-88h] BYREF

  v11 = (unsigned __int8 *)sub_6090B350((int)v14);
  sub_6090B4B0(v11, a1);
  sub_601B59CC((float *)v13, a2);
  return sub_60939898(a1, v13, a3, a4, a5, a6, a7);
}
