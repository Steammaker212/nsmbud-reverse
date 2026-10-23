/* sub_60986E84
 * address: 0x60986E84   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60986E84(_DWORD *a1, int a2)
{
  int result; // r0
  int v4; // r2
  _DWORD *v5; // r5

  result = a1[6];
  if ( (_DWORD *)result != a1 + 5 )
  {
    v4 = a1[8];
    v5 = (_DWORD *)(result - v4);
    while ( v5[10] != a2 )
    {
      result = FIELD_U32(result, 4);
      v5 = (_DWORD *)(result - v4);
      if ( (_DWORD *)(result - v4) == (_DWORD *)((char *)a1 - v4 + 20) )
        return result;
    }
    (*(void (__fastcall **)(_DWORD *))(*v5 + 20))(v5);
    sead__ListNode__erase((_DWORD *)((char *)v5 + a1[8]));
    --a1[7];
    return (*(int (__fastcall **)(_DWORD *))(*v5 + 4))(v5);
  }
  return result;
}
