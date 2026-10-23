/* sub_608713BC
 * address: 0x608713BC   size: 184   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608713BC(int a1, int a2)
{
  int result; // r0
  _DWORD *v5; // r5
  int v6; // r7
  void (__fastcall *v7)(int, _DWORD *, int); // r3
  int (__fastcall *v8)(int, _DWORD, int); // r3

  result = FIELD_U8(a1, 44);
  if ( (result & 1) != 0 )
  {
    v5 = *(_DWORD **)(a1 + 32);
    v6 = v5[40];
    if ( v6 )
    {
      nn__os__LockMutex(v5[40]);
      if ( (FIELD_U8(a1, 44) & 1) != 0 )
      {
        v7 = *(void (__fastcall **)(int, _DWORD *, int))(v5[34] + 40);
        if ( v7 )
          v7(a2, v5, -1227133513 * ((a1 - v5[30]) >> 3));
      }
      return nn__os__UnlockMutex(v6);
    }
    else
    {
      result = v5[34];
      v8 = *(int (__fastcall **)(int, _DWORD, int))(result + 40);
      if ( v8 )
        return v8(a2, FIELD_U32(a1, 32), -1227133513 * ((a1 - v5[30]) >> 3));
    }
  }
  return result;
}
