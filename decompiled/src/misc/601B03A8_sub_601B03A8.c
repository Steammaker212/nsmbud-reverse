/* sub_601B03A8
 * address: 0x601B03A8   size: 244   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601B03A8(int a1)
{
  int result; // r0
  int v3; // r5
  bool v4; // zf
  int v5; // r1
  int v6; // r3
  int v7; // r3
  int v8; // r2
  int v9; // [sp+4h] [bp-1Ch] BYREF
  int v10; // [sp+8h] [bp-18h]
  int v11; // [sp+Ch] [bp-14h]

  result = sub_601CF9C0(dword_60C8AEF0);
  if ( result )
  {
    v3 = FIELD_U32(a1, 588);
    v9 = 0;
    v10 = 0;
    v11 = 0;
    sub_6019EC34(&v9, (_DWORD *)(result + 1056));
    result = v9;
    if ( v9 != -1 )
    {
      result = v10;
      v4 = v10 == -1;
      if ( v10 != -1 )
      {
        result = v11;
        v4 = v11 == -1;
      }
      if ( !v4 )
      {
        v5 = FIELD_U32(dword_60C8A8C0, 44);
        if ( v3 < 1 )
          v6 = FIELD_U32(dword_60C8A8C0, 176);
        else
          v6 = v3 - 1;
        if ( *(_DWORD *)(*(_DWORD *)(v5 + 4 * v6) + 96) == result
          || (v6 < 1 ? (v7 = FIELD_U32(dword_60C8A8C0, 176)) : (v7 = v6 - 1),
              *(_DWORD *)(*(_DWORD *)(v5 + 4 * v7) + 96) == result) )
        {
          FIELD_U32(a1, 248) = result;
        }
        else
        {
          if ( v7 <= 0 )
            v8 = FIELD_U32(dword_60C8A8C0, 176);
          else
            v8 = v7 - 1;
          if ( *(_DWORD *)(*(_DWORD *)(v5 + 4 * v8) + 96) == result )
            FIELD_U32(a1, 248) = result;
        }
      }
    }
  }
  return result;
}
