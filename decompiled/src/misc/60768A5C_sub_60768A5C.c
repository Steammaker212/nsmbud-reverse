/* sub_60768A5C
 * address: 0x60768A5C   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60768A5C(int a1)
{
  int v1; // r2
  int v2; // r1

  v1 = FIELD_U32(a1, 1232);
  v2 = 0;
  if ( (v1 & 0x100000) == 0 && (FIELD_U16(PlayerMgr_instance, 66) & (unsigned __int16)(1 << FIELD_U8(a1, 84))) != 0 )
  {
    FIELD_U32(a1, 1232) = v1 & 0xFFF1FFFF | 0x60000;
    FIELD_U32(a1, 1220) &= ~0x400000u;
    FIELD_U32(a1, 124) = 0;
    FIELD_U32(a1, 88) = 0;
    (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 1108))(a1);
    return 1;
  }
  return v2;
}
