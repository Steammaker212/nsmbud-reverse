/* sub_600C9A1C
 * address: 0x600C9A1C   size: 996   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600C9A1C(_DWORD *a1)
{
  int v2; // r5
  int ActorSlotChecked; // r0
  int v4; // r0
  int v5; // r1
  int v6; // r0
  int v7; // r1
  int v8; // r0
  int v9; // r1
  int *v10; // r11
  int *v11; // r4
  int v12; // r8
  int v13; // r1
  int v14; // r6
  int v15; // r0
  int v16; // r10
  int v17; // r9
  float v18; // s16
  int v19; // r2
  int v20; // r0
  int v21; // r2
  int v22; // r0
  int v23; // r1
  int v24; // r1
  bool v25; // vf
  int v26; // r0
  int i; // r0
  bool v28; // cc
  int v29; // r2
  int v30; // r3
  _DWORD *v31; // r3
  int v32; // r1
  _DWORD *v34; // [sp+0h] [bp-60h]
  _DWORD *v35; // [sp+8h] [bp-58h]
  unsigned int v36; // [sp+Ch] [bp-54h]
  int v37; // [sp+1Ch] [bp-44h]
  _DWORD v38[16]; // [sp+20h] [bp-40h] BYREF

  sub_6077A268(dword_60CBFA90);
  v2 = PlayerMgr_instance;
  FIELD_U32(PlayerMgr_instance, 140) = -1;
  v37 = 0;
  if ( (FIELD_U8(v2, 66) & 1) != 0 )
  {
    ActorSlotChecked = Player_getActorSlotChecked(v2, 0);
    if ( ActorSlotChecked )
    {
      FIELD_U32(ActorSlotChecked, 1232) |= 0x400000u;
      v37 = 1;
      v38[0] = 0;
    }
  }
  if ( (FIELD_U8(v2, 66) & 2) != 0 )
  {
    v4 = Player_getActorSlotChecked(v2, 1);
    if ( v4 )
    {
      FIELD_U32(v4, 1232) |= 0x400000u;
      v5 = v37++;
      v38[v5] = 1;
    }
  }
  if ( (FIELD_U8(v2, 66) & 4) != 0 )
  {
    v6 = Player_getActorSlotChecked(v2, 2);
    if ( v6 )
    {
      FIELD_U32(v6, 1232) |= 0x400000u;
      v7 = v37;
      if ( v37 < 4 )
      {
        ++v37;
        v38[v7] = 2;
      }
    }
  }
  if ( (FIELD_U8(v2, 66) & 8) != 0 )
  {
    v8 = Player_getActorSlotChecked(v2, 3);
    if ( v8 )
    {
      FIELD_U32(v8, 1232) |= 0x400000u;
      v9 = v37;
      if ( v37 < 4 )
      {
        ++v37;
        v38[v9] = 3;
      }
    }
  }
  a1[1549] = 0;
  v10 = a1 + 1549;
  v34 = a1;
  v36 = 0;
  a1[1548] = 0;
  v35 = a1 + 1548;
  if ( v37 )
  {
    v11 = a1 + 1547;
    do
    {
      v12 = v36++;
      while ( 1 )
      {
        v13 = v12 - 4;
        if ( v12 < 4 )
          v13 = v12;
        v14 = v38[v13];
        v15 = sub_60788F54(v2, v14);
        if ( !v15 )
          goto LABEL_25;
        v16 = v36;
        if ( v37 < v36 )
          v16 = 0;
        if ( v16 != v37 )
        {
          v18 = FIELD_F32(v15, 108);
          v17 = v12;
          do
          {
            v19 = 0;
            if ( v16 >= 4 )
              v19 = -4;
            v20 = sub_60788F54(v2, v38[v16 + v19]);
            if ( v20 && FIELD_F32(v20, 108) > v18 )
            {
              v18 = FIELD_F32(v20, 108);
              v17 = v16;
              v21 = 0;
              if ( v16 >= 4 )
                v21 = -4;
              v14 = v38[v16 + v21];
            }
            ++v16;
          }
          while ( v16 != v37 );
        }
        else
        {
LABEL_25:
          v17 = v12;
        }
        v22 = *v11;
        v23 = *v10;
        if ( *v10 < *v11 )
        {
          *v10 = v23 + 1;
          v24 = *v35 + v23;
          v25 = __OFSUB__(v24, v22);
          v26 = v24 - v22;
          if ( v26 < 0 != v25 )
            v26 = v24;
          *(_DWORD *)(v34[1546] + 4 * v26) = v14;
        }
        i = v37;
        if ( v17 == v12 )
          break;
        if ( v37 > v17 )
        {
          v28 = v17 < 0;
          if ( v17 >= 0 )
            v28 = v37 < 1;
          if ( !v28 )
          {
            for ( i = v37 - 1; v17 < v37 - 1; i = v37 - 1 )
            {
              v29 = 0;
              v30 = v17;
              if ( v17 + 1 >= 4 )
                v30 = v17 - 4;
              v31 = &v38[v30];
              if ( v17 >= 4 )
                v29 = -4;
              v32 = v17 + v29;
              ++v17;
              v38[v32] = v31[1];
            }
            v37 = i;
          }
        }
        if ( v12 == i )
          goto LABEL_54;
      }
    }
    while ( v36 != v37 );
  }
LABEL_54:
  v34[1554] = 0;
  return 6216;
}
