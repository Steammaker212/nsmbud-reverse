/* sub_605B9974
 * address: 0x605B9974   size: 340   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605B9974(int a1, int a2)
{
  float WrappedXPos; // s0
  int v5; // r0
  float v6; // s18
  float v7; // s16
  unsigned int v8; // r0
  __int16 v9; // r6
  int v10; // r1
  int v11; // r0
  float v13; // [sp+8h] [bp-30h] BYREF
  float v14; // [sp+Ch] [bp-2Ch]
  __int16 v15; // [sp+10h] [bp-28h]
  __int16 v16; // [sp+12h] [bp-26h]
  __int16 v17; // [sp+14h] [bp-24h]

  WrappedXPos = AreaTask_getWrappedXPos(AreaTask_intance, *(float *)a2);
  v5 = FIELD_U32(a2, 12);
  v6 = FIELD_F32(a2, 4);
  v7 = WrappedXPos;
  if ( v5 )
  {
    if ( v5 == 2 )
    {
      v8 = FIELD_U32(a2, 8);
      if ( v8 >= 7 )
        v8 = 7;
      v9 = word_60AF2A34[v8];
    }
    else
    {
      v9 = 0;
    }
  }
  else
  {
    v9 = 3;
  }
  TileMgr_setTile(TileMgr_instance, (unsigned int)WrappedXPos, (unsigned int)(float)-v6, 0, 0);
  v10 = FIELD_U32(a2, 20);
  v11 = FIELD_U8(a2, 16);
  if ( v10 && *(_DWORD *)(v10 + 8 * v11 + 2528) & 0x1000000 | *(_DWORD *)(v10 + 8 * v11 + 2532) & 0x8000
    || v11 != 2
    || (LOBYTE(v11) = 2, FIELD_U32(a2, 8) == 1) )
  {
    v13 = v7;
    v14 = v6;
    LOBYTE(v15) = v11;
    HIBYTE(v15) = FIELD_U8(a2, 17);
    v16 = v9;
    return SE_OBJ_BLOCK_BREAK_ref_3(a1, &v13, 0, 0);
  }
  else
  {
    v13 = v7;
    v14 = v6;
    v15 = 258;
    LOBYTE(v16) = FIELD_U8(a2, 18);
    HIBYTE(v16) = FIELD_U8(a2, 17);
    v17 = v9;
    return SE_OBJ_BLOCK_BREAK_ref_2(a1, (int)&v13, 0);
  }
}
