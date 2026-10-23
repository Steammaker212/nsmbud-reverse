/* sub_602EDA9C
 * address: 0x602EDA9C   size: 632   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602EDA9C(int a1)
{
  unsigned int v2; // r0
  int v3; // r9
  bool v4; // cf
  int v5; // r0
  int v6; // r0
  int v7; // r6
  int v8; // r8
  float v9; // s0
  bool v10; // fzf
  bool v11; // fnf
  float v12; // s0
  unsigned int v13; // r5
  int v14; // r1
  unsigned int v15; // r2
  int v16; // r1
  int v17; // r3
  int v18; // r2
  int *v19; // r0
  int v20; // r1
  char v21; // r3
  int v22; // r7
  bool v23; // zf
  unsigned int v24; // r2
  int v26; // r0
  StateMgr *v27; // r0

  v2 = FIELD_U8(a1, 84);
  v3 = (char)v2;
  v4 = v2 >= 4;
  v5 = 0;
  if ( !v4 )
    v5 = v3;
  v6 = *(_DWORD *)(PlayerMgr_instance + 4 * v5 + 32);
  if ( v6 )
  {
    v7 = 0;
    v8 = 0;
    v9 = FIELD_F32(v6, 112) - FIELD_F32(v6, 588);
    v10 = v9 == 0.0;
    v11 = v9 < 0.0;
    v12 = FIELD_F32(v6, 108) - FIELD_F32(v6, 584);
    v13 = (!v11 && !v10) | ((FIELD_U32(v6, 1216) & 0x2000u) >> 13);
    v14 = FIELD_U32(a1, 3192);
    v15 = v14 & 0xFFFFFB9F;
    if ( v13 )
      v15 = v14 | 0x460;
    if ( v12 < 0.0 )
      v7 = 1;
    FIELD_U32(a1, 3192) = v15;
    v16 = FIELD_U32(a1, 3200);
    if ( (FIELD_U8(v6, 1217) & 0x20) != 0 )
    {
      FIELD_U32(a1, 3200) = v16 & 0xFBFFFDFF;
      v18 = FIELD_U32(a1, 3184);
      FIELD_U32(a1, 3176) = FIELD_U32(a1, 3176) & 0xBBFFFDFF | 0x40000000;
      FIELD_U32(a1, 3184) = v18 & 0xBBFFFDFF | 0x40000000;
      if ( FIELD_U8(a1, 6780) )
        v12 = (*(float (__fastcall **)(int))(FIELD_U32(a1, 6356) + 16))(a1 + 6356);
    }
    else
    {
      v8 = 1;
      FIELD_U32(a1, 3200) = v16 | 0x4000200;
      v17 = FIELD_U32(a1, 3184);
      FIELD_U32(a1, 3176) = FIELD_U32(a1, 3176) & 0xBBFFFDFF | 0x4000200;
      FIELD_U32(a1, 3184) = v17 & 0xBBFFFDFF | 0x4000200;
    }
    CollisionMgr_process((_BYTE *)(a1 + 648), v12);
    if ( v13 == 1 )
    {
      if ( (FIELD_U32(a1, 2872) & 0x10400) == 0x400 )
      {
        FIELD_U32(a1, 80) = v7 ^ 1;
LABEL_26:
        sub_602EE7D8(a1, v7, v3, 0);
        return 1;
      }
      v19 = *(int **)(a1 + 6360);
      if ( v19 )
      {
        v20 = 0;
        v21 = 0;
        do
        {
          v22 = *v19;
          v23 = *v19 == 0;
          if ( *v19 )
          {
            v22 = FIELD_U32(v22, 2196);
            v23 = v22 == 0;
          }
          if ( !v23 )
          {
            v24 = FIELD_U8(v22, 533) - 1;
            if ( v24 <= 1 )
            {
              v21 = 1;
              if ( (FIELD_U8(v22, 6900) & 2) != 0 )
                v20 = 1;
            }
            else
            {
              v21 |= v24 < 2;
            }
          }
          v19 = (int *)v19[1];
        }
        while ( v19 );
        if ( ((unsigned __int8)v21 & (v20 != 0)) != 0 )
          goto LABEL_26;
      }
    }
    if ( v8 == 1 )
    {
      v26 = FIELD_U32(a1, 2872);
      if ( (v26 & 0x880000) == 0 || (v26 & 0x20000000) != 0 )
      {
        if ( (v26 & 0x440000) == 0 || (v26 & 0x10000000) != 0 )
          return 0;
        FIELD_U32(a1, 80) = 1;
        v27 = (StateMgr *)(a1 + 6084);
      }
      else
      {
        FIELD_U32(a1, 80) = 0;
        v27 = (StateMgr *)(a1 + 6084);
      }
      StateMgr__changeState(v27, &stru_60C926A4);
    }
  }
  return 0;
}
