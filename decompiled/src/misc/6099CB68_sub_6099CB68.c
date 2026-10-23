/* sub_6099CB68
 * address: 0x6099CB68   size: 144   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6099CB68(int a1)
{
  int v2; // r8
  int result; // r0
  _DWORD *v4; // r6
  _DWORD *v5; // r4

  v2 = 0;
  if ( (FIELD_U8(a1, 120) & 1) != 0 )
  {
    v2 = a1 + 84;
    sead__CriticalSection__lock(a1 + 84);
  }
  result = sub_608F98A4(a1, 0, 0);
  v4 = *(_DWORD **)(a1 + 128);
  if ( v4 != (_DWORD *)(a1 + 124) )
  {
    do
    {
      v5 = (_DWORD *)v4[1];
      sead__ListNode__erase(v4);
      --FIELD_U32(a1, 132);
      *(v4 - 2) = FIELD_U32(a1, 136);
      result = (int)(v4 - 2);
      v4 = v5;
      FIELD_U32(a1, 136) = result;
    }
    while ( v5 != (_DWORD *)(a1 + 124) );
  }
  if ( v2 )
    return sead__CriticalSection__unlock(v2);
  return result;
}
