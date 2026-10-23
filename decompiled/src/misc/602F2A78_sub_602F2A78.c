/* sub_602F2A78
 * address: 0x602F2A78   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602F2A78(int a1, int a2)
{
  int v2; // r4
  unsigned int U32; // r0

  v2 = FIELD_U32(a2, 144);
  U32 = sead__Random__getU32((void *)(dword_60C9CF0C + 1340));
  sub_602EE7D8(v2, U32 >> 31, 0xFFFFFFFF, 1);
  return 1;
}
