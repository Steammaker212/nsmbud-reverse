/* sub_608ECA58
 * address: 0x608ECA58   size: 212   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608ECA58(int a1, int a2, const void *a3)
{
  int v6; // r4
  int v7; // r6
  _DWORD v9[10]; // [sp+0h] [bp-28h] BYREF

  v6 = FIELD_U32(a1, 92) + 4;
  sead__CriticalSection__lock(v6);
  v7 = 0;
  if ( !FIELD_U32(a1, 496) )
  {
    FIELD_U32(a1, 112) = 1;
    if ( sub_608F0654(FIELD_U32(a1, 92), a2, 5) == 1 )
    {
      FIELD_U32(a1, 116) = a2;
      FIELD_U32(a2, 48) |= 1u;
      v9[0] = off_60C5C51C;
      v9[1] = 3;
      (*(void (__fastcall **)(_DWORD, _DWORD *))(**(_DWORD **)(a1 + 116) + 56))(FIELD_U32(a1, 116), v9);
      qmemcpy((void *)(a1 + 120), a3, 0x80u);
      FIELD_U32(a1, 472) = 0;
      FIELD_U32(a1, 496) = 1;
      FIELD_U8(a1, 492) = 0;
      FIELD_U32(a1, 488) = 0;
      sub_608EF560(a1);
      v7 = 1;
    }
  }
  sead__CriticalSection__unlock(v6);
  return v7;
}
