/* sub_6099C8F0
 * address: 0x6099C8F0   size: 168   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6099C8F0(int result, int a2)
{
  _DWORD *v3; // r4
  int v4; // r5
  int *v5; // r7

  v3 = (_DWORD *)result;
  if ( a2 )
  {
    v4 = 0;
    if ( (FIELD_U8(result, 120) & 1) != 0 )
    {
      v4 = result + 84;
      sead__CriticalSection__lock(result + 84);
    }
    result = v3[32];
    if ( (_DWORD *)result != v3 + 31 )
    {
      v5 = (int *)(result - 8);
      while ( *v5 != a2 )
      {
        result = FIELD_U32(result, 4);
        v5 = (int *)(result - 8);
        if ( (_DWORD *)(result - 8) == v3 + 29 )
          goto LABEL_11;
      }
      if ( v5 )
      {
        sead__ListNode__erase(v5 + 2);
        --v3[33];
        result = v3[34];
        *v5 = result;
        v3[34] = v5;
      }
    }
LABEL_11:
    if ( v4 )
      return sead__CriticalSection__unlock(v4);
  }
  return result;
}
