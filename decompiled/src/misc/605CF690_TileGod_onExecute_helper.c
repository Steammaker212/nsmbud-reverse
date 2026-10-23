/* TileGod_onExecute_helper
 * address: 0x605CF690   size: 364   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall TileGod_onExecute_helper(int a1)
{
  int v2; // r0
  int v3; // r3
  unsigned int v4; // r1
  int v5; // r0
  __int64 v6; // r6
  int v7; // r5
  int v8; // r6
  int v9; // r0
  int v10; // r3
  __int64 v11; // r0
  __int64 v12; // r0
  int v13; // r1
  int v14; // r0
  int result; // r0
  char v16; // r8
  int v17; // r0
  int v18; // r1

  v2 = FIELD_U8(a1, 539);
  if ( v2 )
  {
    v3 = v2 - 33;
    v4 = 1u >> (33 - v2);
    v5 = 1 << (v2 - 1);
    if ( v3 >= 0 )
    {
      v4 = 1 << v3;
      v5 = 0;
    }
    v6 = FIELD_U64(EventMgr__instance, 16);
    v7 = HIDWORD(v6) & v4;
    v8 = v6 & v5;
  }
  else
  {
    v8 = 0;
    v7 = 0;
  }
  v9 = FIELD_U8(a1, 540);
  if ( FIELD_U8(a1, 540) )
  {
    v10 = v9 - 33;
    HIDWORD(v11) = 1u >> (33 - v9);
    LODWORD(v11) = 1 << (v9 - 1);
    if ( v10 >= 0 )
    {
      HIDWORD(v11) = 1 << v10;
      LODWORD(v11) = 0;
    }
    v12 = FIELD_U64(EventMgr__instance, 16) & v11;
    v7 |= HIDWORD(v12);
    v8 |= v12;
  }
  v13 = v8 ^ FIELD_U32(a1, 6104);
  v14 = v7 ^ FIELD_U32(a1, 6108);
  if ( !FIELD_U32(a1, 6120) )
  {
    result = v13 | v14;
    if ( !result )
      return result;
    if ( v8 | v7 )
    {
      SE_OBJ_KAKIKAE_B_ref(a1, 0, 0, 0);
      v16 = 1;
      goto LABEL_21;
    }
    v16 = 0;
    goto LABEL_19;
  }
  result = v13 | v14;
  if ( !result )
    return result;
  if ( v8 | v7 )
  {
    v16 = 1;
LABEL_19:
    v17 = a1;
    v18 = 1;
    goto LABEL_20;
  }
  v16 = 0;
  v17 = a1;
  v18 = 0;
LABEL_20:
  SE_OBJ_KAKIKAE_B_ref(v17, v18, 0, 0);
LABEL_21:
  FIELD_U8(a1, 6136) = v16;
  FIELD_U32(a1, 6104) = v8;
  FIELD_U32(a1, 6108) = v7;
  result = FIELD_U32(a1, 6128);
  if ( result )
  {
    FIELD_U8(a1, 19) = 1;
    return 1;
  }
  return result;
}
