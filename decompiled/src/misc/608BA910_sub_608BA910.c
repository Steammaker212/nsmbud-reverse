/* sub_608BA910
 * address: 0x608BA910   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608BA910(int a1, int a2, int a3, int a4)
{
  int v7; // r7
  int *v8; // r0
  _BYTE v10[28]; // [sp+4h] [bp-1Ch] BYREF

  v7 = 0;
  v8 = *(int **)(FIELD_U32(a1, 4) + 112);
  if ( v8 && sub_608B44A8(v8) == 1 )
  {
    nullsub_104(v10);
    v7 = sub_608D524C(v10, a2 + 12 * a3 + 408, a2 + 16 * a3 + 344, a4);
    nullsub_105(v10);
  }
  return v7;
}
