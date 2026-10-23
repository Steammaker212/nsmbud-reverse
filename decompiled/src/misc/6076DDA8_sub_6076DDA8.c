/* sub_6076DDA8
 * address: 0x6076DDA8   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6076DDA8(int a1)
{
  float v2; // s2
  float v3; // s0

  FIELD_U32(a1, 1228) |= 2u;
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 1108))(a1);
  v2 = FIELD_F32(a1, 88);
  v3 = -1.5;
  if ( v2 >= -1.5 )
  {
    v3 = FIELD_F32(a1, 88);
    if ( v2 > 1.5 )
      v3 = 1.5;
  }
  FIELD_F32(a1, 88) = v3;
  FIELD_U32(a1, 104) = 0;
  FIELD_U32(a1, 92) = 0;
  return sub_607689EC(a1, 0);
}
