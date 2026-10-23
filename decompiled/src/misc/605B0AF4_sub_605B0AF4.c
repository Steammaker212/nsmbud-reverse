/* sub_605B0AF4
 * address: 0x605B0AF4   size: 140   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605B0AF4(int a1)
{
  int v2; // r5
  int v3; // r6

  v2 = a1 + 108;
  v3 = a1 + 156;
  ((void (*)(void))sub_605B0B80)();
  sub_605B0B80(a1, v2, v3, 3);
  sub_605B0B80(a1, a1 + 6120, a1 + 6132, 1);
  sub_605B0B80(a1, a1 + 6168, a1 + 6132, 4);
  sub_605B0B80(a1, a1 + 6144, a1 + 6156, 2);
  return 1;
}
