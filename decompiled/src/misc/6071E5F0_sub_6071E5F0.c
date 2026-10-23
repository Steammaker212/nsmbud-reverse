/* sub_6071E5F0
 * address: 0x6071E5F0   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6071E5F0(int a1, int a2)
{
  int v3; // r0
  int v5; // [sp+0h] [bp-70h] BYREF
  int v6; // [sp+4h] [bp-6Ch]
  int v7; // [sp+1Ch] [bp-54h]

  sub_6090B260(a1 + 5464, FIELD_U32(a2, 40));
  v3 = sub_6090B350(&v5);
  v6 |= 1u;
  v7 = 7;
  return sub_6090B4B0(v3, FIELD_U32(a2, 40));
}
