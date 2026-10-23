/* sub_6075C75C
 * address: 0x6075C75C   size: 272   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6075C75C(int a1, int a2, int a3)
{
  __int16 v3; // r3
  __int16 *v4; // r12
  int v5; // r3
  int result; // r0

  v4 = (__int16 *)(a1 + 304);
  v3 = FIELD_U16(a1, 304);
  if ( (v3 & 1) != 0 )
  {
    *(_DWORD *)(**(_DWORD **)(a1 + 240) + 32) = a2;
    *(_DWORD *)(**(_DWORD **)(a1 + 240) + 36) = a3;
    v3 = *v4;
  }
  if ( (v3 & 2) != 0 )
  {
    *(_DWORD *)(**(_DWORD **)(a1 + 244) + 32) = a2;
    *(_DWORD *)(**(_DWORD **)(a1 + 244) + 36) = a3;
    v3 = *v4;
  }
  if ( (v3 & 4) != 0 )
  {
    *(_DWORD *)(**(_DWORD **)(a1 + 248) + 32) = a2;
    *(_DWORD *)(**(_DWORD **)(a1 + 248) + 36) = a3;
    v3 = *v4;
  }
  if ( (v3 & 8) != 0 )
  {
    *(_DWORD *)(**(_DWORD **)(a1 + 252) + 32) = a2;
    *(_DWORD *)(**(_DWORD **)(a1 + 252) + 36) = a3;
    v3 = *v4;
  }
  if ( (v3 & 0x10) != 0 )
  {
    *(_DWORD *)(**(_DWORD **)(a1 + 256) + 32) = a2;
    *(_DWORD *)(**(_DWORD **)(a1 + 256) + 36) = a3;
    v3 = *v4;
  }
  if ( (v3 & 0x20) != 0 )
  {
    *(_DWORD *)(**(_DWORD **)(a1 + 260) + 32) = a2;
    *(_DWORD *)(**(_DWORD **)(a1 + 260) + 36) = a3;
  }
  v5 = FIELD_U32(a1, 564);
  if ( v5 )
  {
    FIELD_U32(v5, 32) = a2;
    *(_DWORD *)(FIELD_U32(a1, 564) + 36) = a3;
  }
  *(_DWORD *)(**(_DWORD **)(a1 + 1176) + 32) = a2;
  result = **(_DWORD **)(a1 + 1176);
  FIELD_U32(result, 36) = a3;
  return result;
}
