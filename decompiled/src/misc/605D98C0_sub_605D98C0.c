/* sub_605D98C0
 * address: 0x605D98C0   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605D98C0(int a1)
{
  int v1; // r4

  v1 = a1 + 6260;
  FIELD_U32(a1, 6260) |= 0x40u;
  sub_605EAB48(a1 + 6064, 0.0);
  *(_DWORD *)(v1 - 6140) = 0;
  return -6140;
}
