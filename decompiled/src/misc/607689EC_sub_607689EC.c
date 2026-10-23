/* sub_607689EC
 * address: 0x607689EC   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607689EC(int a1, int a2)
{
  int v2; // r3
  int v3; // r4
  unsigned int v4; // r2

  v2 = FIELD_U32(a1, 1232);
  v3 = 0;
  if ( (v2 & 0x100000) == 0 && (FIELD_U16(PlayerMgr_instance, 66) & (unsigned __int16)(1 << FIELD_U8(a1, 84))) != 0 )
  {
    v3 = 1;
    v4 = v2 & 0xFFF1FFFF | 0x20000;
    if ( a2 )
      v4 = v2 | 0x60000;
    FIELD_U32(a1, 1232) = v4 & 0xFFF7FFFF;
    FIELD_U32(a1, 1220) &= ~0x400000u;
  }
  return v3;
}
