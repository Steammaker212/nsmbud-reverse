/* sub_60632AB4
 * address: 0x60632AB4   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60632AB4(int a1, int a2, float a3, float a4)
{
  int v8; // r6
  int ResArchiveById; // r1

  v8 = a1 + 6576;
  ResArchiveById = Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
  return sub_60632D90(v8, ResArchiveById, a2, a3, a4, (float)((FIELD_U32(a1, 24) >> 20) & 3));
}
