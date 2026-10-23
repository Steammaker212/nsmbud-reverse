/* sub_605CEC10
 * address: 0x605CEC10   size: 140   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605CEC10(_DWORD *a1)
{
  unsigned int v1; // r1

  a1[1537] = a1[27];
  a1[1538] = a1[28];
  a1[1539] = a1[29];
  v1 = a1[5];
  sub_605CE780(
    (int)(a1 + 1530),
    a1 + 41,
    (a1[6] >> 20) & 0xF,
    HIWORD(a1[6]) & 0xF,
    a1[6] >> 28,
    (v1 >> 15) & 1,
    (v1 >> 13) & 1,
    (v1 & 0x4000) != 0,
    HIWORD(v1) & 0xF,
    HIBYTE(v1) & 0xF);
  return 1;
}
