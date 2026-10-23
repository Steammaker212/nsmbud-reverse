/* sub_604434C8
 * address: 0x604434C8   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604434C8(int a1, int a2, Vec3 *a3, int *a4, Vec3 *a6)
{
  _DWORD a5[5]; // [sp+Ch] [bp-14h] BYREF

  a5[0] = 0;
  a5[1] = 0;
  a5[2] = *a4;
  return sub_60720018(dword_60CBD830, 3, a2, a3, a5, a6);
}
