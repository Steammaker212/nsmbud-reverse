/* ShaderBinary_Bind_Error_ref
 * address: 0x6089E2D4   size: 308   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall ShaderBinary_Bind_Error_ref(int a1, int a2)
{
  int result; // r0
  bool v5; // zf
  int v6; // r0
  int v7; // r6
  __int64 v8; // r2
  int v9; // r1
  _DWORD *v10; // r0
  int v11; // r1
  int v12; // r0
  int v13; // r1
  int v14; // r0
  int v15; // r0
  int v16; // r1

  result = 1;
  if ( !*(_BYTE *)a1 )
  {
    result = 0;
    v5 = FIELD_U8(a2, 1000) == 0;
    if ( FIELD_U8(a2, 1000) )
      v5 = FIELD_U8(a2, 1036) == 0;
    if ( !v5 )
    {
      v6 = FIELD_U32(a1, 12);
      v7 = FIELD_U32(a2, 8);
      v8 = FIELD_U64(v6, 2248);
      if ( ((unsigned int)v8 & HIDWORD(v8)) != 0xFFFFFFFF )
      {
        v9 = FIELD_U32(a1, 576);
        if ( !v9 || v9 >= 4 )
        {
          FIELD_U32(a1, 76) = sub_60888098((_DWORD *)a2, v8);
          v6 = FIELD_U32(a1, 12);
        }
      }
      FIELD_U32(a1, 588) = 0;
      FIELD_U32(a1, 592) = 0;
      FIELD_U32(a1, 584) = sub_6088860C(a2 + 1000, FIELD_U32(v6, 2324));
      v10 = *(_DWORD **)(a1 + 12);
      v11 = v10[583];
      if ( v11 != -1 )
      {
        v12 = sub_6088860C(a2 + 1000, v11);
        FIELD_U32(a1, 588) = v12;
        if ( !v12 )
          goto LABEL_20;
        v10 = *(_DWORD **)(a1 + 12);
      }
      v13 = v10[584];
      if ( v13 == -1 )
      {
LABEL_15:
        v15 = v10[582];
        if ( v15 != -1 )
          FIELD_U32(a1, 596) = FIELD_U32(a2, 1048) + 56 * v15;
        v16 = sub_6089DDBC(a1, v7);
        result = 0;
        if ( v16 == 1 )
        {
          result = 1;
          *(_BYTE *)a1 = 1;
        }
        return result;
      }
      v14 = sub_6088860C(a2 + 1000, v13);
      FIELD_U32(a1, 592) = v14;
      if ( v14 )
      {
        v10 = *(_DWORD **)(a1 + 12);
        goto LABEL_15;
      }
LABEL_20:
      debugPrintRelated3("ShaderBinary Bind Error.\n");
      return 0;
    }
  }
  return result;
}
