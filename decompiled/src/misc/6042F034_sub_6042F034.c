/* sub_6042F034
 * address: 0x6042F034   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6042F034(int a1, int a2)
{
  int v3; // r5
  int v4; // r6

  v3 = dword_60C9C114;
  v4 = sub_6042BA90(dword_60C9C114, (const void *)(a1 + 4));
  return v4 - sub_6042BA90(v3, (const void *)(a2 + 4));
}
