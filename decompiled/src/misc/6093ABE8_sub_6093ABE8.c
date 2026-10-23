/* sub_6093ABE8
 * address: 0x6093ABE8   size: 116   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6093ABE8(int a1, float *a2, int a3, int a4, int a5, int a6, int a7)
{
  unsigned __int8 *v11; // r0
  float *v12; // r0
  float v14[12]; // [sp+10h] [bp-B0h] BYREF
  _BYTE v15[128]; // [sp+40h] [bp-80h] BYREF

  v11 = (unsigned __int8 *)sub_6090B350((int)v15);
  sub_6090B4B0(v11, a1);
  sub_601B59CC(v14, a2);
  v12 = (float *)sub_6090BDE0(a3);
  return sub_6093A72C(a1, v14, v12, a4, a5, 0, a7);
}
