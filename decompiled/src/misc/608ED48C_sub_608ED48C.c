/* sub_608ED48C
 * address: 0x608ED48C   size: 308   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_608ED48C(_DWORD *a1)
{
  _DWORD *v2; // r5
  int v3; // r0
  int v4; // r0
  _DWORD *v5; // r0
  _DWORD *v6; // r7
  int v7; // r4
  int v8; // r6

  *a1 = off_60C5C57C;
  if ( a1[7] )
  {
    sub_608EFCAC();
    v2 = (_DWORD *)a1[7];
    if ( v2 )
    {
      *v2 = &off_60C5C5C4;
      v2[78] = off_60BFA048;
      sead__MethodTreeNode__detachAll((int)(v2 + 78));
      sead__IDisposer__dtor(v2 + 78);
      sead__CriticalSection__dtor(v2 + 1);
      operator_delete(v2);
    }
    a1[7] = 0;
  }
  v3 = a1[8];
  if ( v3 )
  {
    (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 12))(v3);
    a1[8] = 0;
  }
  v4 = a1[9];
  if ( v4 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 16))(v4);
  a1[3] = &off_60C5C5D0;
  v5 = (_DWORD *)a1[5];
  if ( v5 != a1 + 4 )
  {
    v6 = (_DWORD *)a1[5];
    do
    {
      v7 = v5[2];
      v6 = (_DWORD *)v6[1];
      if ( FIELD_U8(v7, 56) )
      {
        v8 = FIELD_U32(v7, 28);
        if ( v8 )
        {
          FIELD_U32(v7, 28) = 0;
          sead__ListNode__erase((_DWORD *)(v7 + 16));
          --FIELD_U32(v8, 8);
        }
        FIELD_U8(v7, 56) = 0;
      }
      v5 = v6;
    }
    while ( v6 != a1 + 4 );
  }
  return a1;
}
