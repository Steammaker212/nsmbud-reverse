/* sub_607EAF04
 * address: 0x607EAF04   size: 112   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607EAF04(int a1)
{
  int v2; // r0
  int v3; // r4
  int v4; // r1

  v2 = FIELD_U32(a1, 7352);
  v3 = dword_60CC62E4;
  v4 = dword_60CC6D78;
  FIELD_U32(dword_60CC6D78, 412) = byte_60B0D9C2[v2];
  FIELD_U32(v4, 424) = byte_60B0D9C5[v2];
  sub_607F67E8(v3, a1);
  FIELD_U32(v3, 108) = 589824;
  return 589824;
}
