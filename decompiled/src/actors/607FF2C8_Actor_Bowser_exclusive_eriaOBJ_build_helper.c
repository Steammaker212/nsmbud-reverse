/* Actor_Bowser_exclusive_eriaOBJ_build_helper
 * address: 0x607FF2C8   size: 204   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_Bowser_exclusive_eriaOBJ_build_helper(int result, int a2, int a3, int a4)
{
  int v4; // r12
  _DWORD *v5; // lr
  int v6; // r3
  unsigned int v7; // r2
  int v8; // r2
  __int64 v9; // r4

  *(_BYTE *)result = 1;
  v4 = FIELD_U8(a2, 17);
  FIELD_U8(result, 2) = v4;
  v5 = *(_DWORD **)a2;
  FIELD_U32(result, 4) = **(_DWORD **)a2;
  FIELD_U32(result, 8) = v5[1];
  FIELD_U32(result, 12) = v5[2];
  FIELD_U32(result, 16) = v5[3];
  FIELD_U32(result, 20) = FIELD_U32(a2, 4);
  FIELD_U8(result, 24) = FIELD_U8(a2, 8);
  FIELD_U32(result, 28) = FIELD_U32(a2, 12);
  FIELD_U8(result, 32) = FIELD_U8(a2, 16);
  FIELD_U32(result, 36) = a3;
  FIELD_U32(result, 40) = a4;
  if ( !FIELD_U8(result, 1) )
  {
    if ( v4 )
    {
      v6 = v4 - 33;
      v7 = 1u >> (33 - v4);
      if ( v4 - 33 >= 0 )
        v7 = 1 << v6;
      v9 = *(_QWORD *)(EventMgr__instance + 16);
      v8 = HIDWORD(v9) & v7;
      HIDWORD(v9) = 1 << (v4 - 1);
      if ( v6 >= 0 )
        HIDWORD(v9) = 0;
      if ( (unsigned int)v9 & HIDWORD(v9) | v8 )
        FIELD_U8(result, 1) = 1;
    }
    else
    {
      FIELD_U8(result, 1) = 1;
    }
  }
  return result;
}
