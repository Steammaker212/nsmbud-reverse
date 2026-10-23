/* sub_601A2D98
 * address: 0x601A2D98   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601A2D98(int a1, int a2)
{
  _BYTE v4[28]; // [sp+0h] [bp-78h] BYREF
  int v5; // [sp+1Ch] [bp-5Ch]

  sub_6095856C(a2, FIELD_U32(a2, 40));
  sub_6090B350(v4);
  v5 &= 0xFFFFFFF0;
  sub_6090B4B0(v4, FIELD_U32(a2, 40));
  v5 |= 0xFu;
  return sub_6090B4B0(v4, FIELD_U32(a2, 40));
}
