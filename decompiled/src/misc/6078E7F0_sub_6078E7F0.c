/* sub_6078E7F0
 * address: 0x6078E7F0   size: 244   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6078E7F0(int a1)
{
  unsigned int v2; // r0
  int v3; // r0
  int v4; // r3
  int v5; // r12
  int v6; // r1
  int result; // r0

  v2 = FIELD_U32(a1, 296);
  if ( v2 >= 6 )
    v2 = 0;
  v3 = **(_DWORD **)(*(_DWORD *)(a1 + 4 * v2 + 240) + 12);
  if ( FIELD_U32(a1, 36) == -1 )
  {
    v4 = FIELD_U32(a1, 28);
    v5 = FIELD_U32(a1, 472);
    if ( v4 == -1 )
      v4 = 0;
    v6 = v4;
    if ( v5 == 9 )
      v6 = 3;
    if ( (FIELD_U8(a1, 198) & 0x40) == 0 )
      v6 = v4;
    if ( v5 != 9 && (unsigned int)(v6 - 230) <= 8 && ((0x1F3u >> (v6 + 26)) & 1) != 0 )
      v6 = 0;
    FIELD_U32(a1, 28) = -1;
    (*(void (__fastcall **)(int, int, float, float, float))(*(_DWORD *)a1 + 84))(
      a1,
      v6,
      FIELD_F32(v3, 24),
      0.0,
      FIELD_F32(v3, 20));
  }
  else
  {
    FIELD_U32(a1, 36) = -1;
    sub_607934D4(a1, FIELD_F32(v3, 24), 0.0, FIELD_F32(v3, 20));
  }
  result = FIELD_U8(a1, 209);
  if ( (result & 8) != 0 )
  {
    (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 240))(a1);
    return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 232))(a1);
  }
  return result;
}
