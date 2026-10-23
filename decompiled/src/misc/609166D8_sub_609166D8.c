/* sub_609166D8
 * address: 0x609166D8   size: 64   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_609166D8(int a1, int a2, int a3)
{
  unsigned int v3; // r1
  unsigned int v4; // r3
  int v5; // r0

  v3 = a2 - FIELD_U16(a1, 196);
  v4 = FIELD_U32(a1, 188);
  v5 = FIELD_U32(a1, 192);
  if ( v4 > v3 )
    v5 += 104 * v3;
  return dword_60CC766C(v5, a3) != 0;
}
