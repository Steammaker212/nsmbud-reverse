/* sub_60457304
 * address: 0x60457304   size: 328   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60457304(int a1, unsigned int a2, _DWORD *a3, int a4, int a5)
{
  unsigned int v6; // r7
  int result; // r0
  _DWORD *v10; // r0
  int v11; // r1
  _DWORD *v12; // r5
  _DWORD **v13; // r8
  _DWORD *v14; // r0
  _DWORD *v15; // r4
  _DWORD *v16; // t1
  int v17; // r0
  int v18; // t1
  _DWORD *v19; // r6
  _BYTE *v20; // r0

  v6 = a2;
  result = FIELD_U8(a1, 2596) & (1 << a2);
  if ( (_BYTE)result )
  {
    result = FIELD_U8(a1, 2597);
    if ( !FIELD_U8(a1, 2597) )
    {
      if ( a2 >= 4 )
        v6 = 0;
      v10 = (_DWORD *)(a1 + 600 * v6);
      v12 = v10 + 51;
      v11 = v10[51];
      v13 = (_DWORD **)(v10 + 49);
      if ( v11 >= v10[54] )
      {
        result = a5;
        if ( a5 != 1 )
          return result;
        if ( v11 < 1 )
          v15 = 0;
        else
          v15 = *v13;
        if ( v15 )
          v15 -= 7;
        sead__ListNode__erase(v15 + 7);
        --*v12;
        v17 = a1 + 600 * v6;
        v18 = FIELD_U32(v17, 208);
        v14 = (_DWORD *)(v17 + 208);
        *v15 = v18;
        *v14 = v15;
      }
      else
      {
        v16 = (_DWORD *)v10[52];
        v14 = v10 + 52;
        v15 = v16;
      }
      v19 = 0;
      if ( v15 )
      {
        v19 = v15;
        *v14 = *v15;
      }
      *v19 = 2;
      v19[4] = 0;
      v19[3] = 0;
      v19[2] = 0;
      v19[1] = 0;
      v19[7] = 0;
      v19[8] = 0;
      sub_608DE510(v13, v19 + 7);
      ++*v12;
      *v19 = 1;
      v19[1] = a4;
      (*(void (__fastcall **)(_DWORD *))(*a3 + 12))(a3);
      v20 = (_BYTE *)a3[1];
      v19[4] = v20;
      if ( !*v20 )
        v19[1] = 0;
      v19[5] = 0;
      return 0;
    }
  }
  return result;
}
