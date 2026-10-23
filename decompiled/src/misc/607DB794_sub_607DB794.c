/* sub_607DB794
 * address: 0x607DB794   size: 172   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607DB794(int a1)
{
  int v2; // r5
  int result; // r0
  _DWORD *v4; // r4
  int v5; // t1
  int *v6; // r5
  int v7; // r1
  unsigned int i; // r6
  int v9; // r0
  int v10; // r0

  v2 = a1 + 16692;
  sead__CriticalSection__lock(a1 + 16692);
  sub_608DE6BC(a1 + 16556);
  sead__CriticalSection__unlock(v2);
  v5 = FIELD_U32(a1, 16552);
  v4 = (_DWORD *)(a1 + 16552);
  result = v5;
  if ( v5 )
  {
    v6 = v4 - 2;
    v7 = *(v4 - 2);
    if ( v7 >= 1 )
    {
      for ( i = 0; (int)i < v7; ++i )
      {
        v9 = 0;
        if ( v7 > i )
          v9 = *(_DWORD *)(*v4 + 4 * i);
        sub_607DC9F0(v9);
        v7 = *v6;
        if ( *v6 > i )
        {
          v10 = *(_DWORD *)(*v4 + 4 * i);
          if ( v10 )
          {
            (*(void (__fastcall **)(int))(*(_DWORD *)v10 + 4))(v10);
            v7 = *v6;
          }
        }
      }
    }
    return sub_608DEB70(v4 - 2);
  }
  return result;
}
