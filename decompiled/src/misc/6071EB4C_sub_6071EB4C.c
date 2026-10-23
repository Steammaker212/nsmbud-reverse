/* sub_6071EB4C
 * address: 0x6071EB4C   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6071EB4C(int a1, int a2)
{
  int v3; // r0
  _BYTE v5[112]; // [sp+0h] [bp-70h] BYREF

  v3 = sub_6090B350(v5);
  *(_DWORD *)&v5[28] = 15;
  return sub_6090B4B0(v3, FIELD_U32(a2, 40));
}
