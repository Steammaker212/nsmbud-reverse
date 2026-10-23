/* TapButtonAnim_ref
 * address: 0x60994C68   size: 300   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall TapButtonAnim_ref(int a1, _DWORD *a2, int a3)
{
  _DWORD *result; // r0
  int v7; // r8
  void *v8; // r9
  int v9; // r7
  int v10; // r0
  int v11; // r1
  _DWORD *v12; // r0
  _DWORD *v13; // r0
  int v14; // r0
  int v15; // r4
  int v16; // t1
  _DWORD *v17; // r7
  int v18; // t1

  result = (_DWORD *)sub_60993D34(a1);
  if ( result == (_DWORD *)1 )
  {
    result = sub_6085982C(a1, "TapButtonAnim");
    if ( result )
    {
      result = sub_60980684(a2, (int)result + result[1], 1);
      v7 = (int)result;
      if ( result )
      {
        v8 = (void *)sub_609908C0();
        v9 = operator_new_8DE25C(0x3Cu, v8, 4);
        sub_60990E0C();
        *(_DWORD *)v9 = off_60C6063C;
        FIELD_U32(v9, 16) = a2;
        v10 = a2[18];
        if ( v10 )
        {
          v11 = FIELD_U8(v10, 127);
          if ( FIELD_U8(v10, 127) )
            v11 = 1;
        }
        else
        {
          v11 = 0;
        }
        sub_60991174(v9, v11);
        FIELD_U32(v9, 52) = a1;
        v12 = (_DWORD *)operator_new_8DE25C(0x10u, v8, 4);
        v13 = sub_6098A108(v12);
        FIELD_U32(v9, 44) = v13;
        sub_6098A12C((int)v13, 6, (int)v8);
        FIELD_U8(v7, 51) = FIELD_U8(v7, 51) & 0xCF | 0x10;
        sub_6098A2E0(*(_DWORD **)(v9 + 44), 4u, v7);
        FIELD_U32(v9, 12) = a1 + 136;
        FIELD_U16(v9, 30) |= 0x200u;
        v16 = FIELD_U32(a3, 4);
        v15 = a3 + 4;
        v14 = v16;
        v18 = FIELD_U32(v9, 4);
        v17 = (_DWORD *)(v9 + 4);
        *v17 = v14;
        FIELD_U32(v18, 4) = v15;
        result = *(_DWORD **)v15;
        *(_DWORD *)(*(_DWORD *)v15 + 4) = v17;
        *(_DWORD *)v15 = v18;
      }
    }
  }
  return result;
}
