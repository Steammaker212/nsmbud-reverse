/* sub_606D7EA4
 * address: 0x606D7EA4   size: 984   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606D7EA4(int a1)
{
  int result; // r0
  int *v3; // r8
  int v4; // r11
  int v5; // r7
  int v6; // r1
  int v7; // r6
  unsigned int v8; // r0
  int v9; // r0
  float v10; // r4
  float v11; // r5
  float v12; // r0
  int v13; // r1
  int v14; // r0
  int v15; // r1
  int v16; // r0
  float v17; // r5
  unsigned int v18; // r1
  bool v19; // zf
  int v20; // r6
  int v21; // r1
  float v22; // r8
  float v23; // r9
  int v24; // r4
  unsigned int v25; // r0
  int v26; // r0
  float v27; // r5
  float v28; // r6
  float v29; // r0
  int v30; // [sp+1Ch] [bp-64h]
  int *v31; // [sp+20h] [bp-60h]
  int *v32; // [sp+24h] [bp-5Ch]
  _DWORD *v33; // [sp+28h] [bp-58h]
  _DWORD *v34; // [sp+2Ch] [bp-54h]
  ActorBuildInfo v35; // [sp+30h] [bp-50h] BYREF

  v3 = (int *)(a1 + 12752);
  result = FIELD_U32(a1, 12752);
  if ( result >= 1 )
  {
    v4 = 0;
    v5 = 0;
    v31 = v3;
    v32 = (int *)(a1 + 12760);
    v34 = (_DWORD *)(a1 + 12756);
    v33 = (_DWORD *)(a1 + 12764);
    v30 = 0;
    do
    {
      if ( *v33 )
      {
        if ( *v33 == 1 )
        {
          if ( !v5 )
          {
            v6 = v30;
            if ( (unsigned int)(*v32 - 3) < 3 )
              v6 = v30 + *v32;
            v30 = v6;
LABEL_10:
            v7 = FIELD_U8(a1, 86);
            v8 = v4 + *v34 + (v4 + *v34 < 0 ? 0x320 : 0);
            if ( v8 >= 0x320 )
              v8 = 0;
            v9 = a1 + 8 * v8;
            v10 = FIELD_F32(v9, 6356);
            v11 = FIELD_F32(v9, 6352);
            memset(&v35.settings2, 0, 36);
            v35.settings1 = FIELD_U32(a1, 20) & 0x3000;
            v35.profile = Profile__get(0x1B2u);
            v35.parentId = FIELD_U32(a1, 8);
            v12 = 550.0;
            v35.position.x = v11;
            v35.position.y = v10;
            if ( v7 )
              v12 = -3000.0;
            v35.position.z = v12;
            v35.field_20 = FIELD_U8(a1, 86);
            v35.movementId = v5;
            v35.linkId = FIELD_U8(a1, 29);
            v35.eventId1 = 0;
            v35.eventId2 = 0;
            v35.field_28 = 0;
            goto LABEL_41;
          }
        }
        else if ( v5 == result - 1 )
        {
          goto LABEL_10;
        }
      }
      v13 = *v32;
      if ( *v32 )
      {
        if ( v13 == 2 )
        {
          v15 = result - 1;
          v14 = 2;
          if ( v5 == v15 )
            goto LABEL_27;
        }
        else if ( v13 == 1 )
        {
          if ( !v5 )
          {
            v14 = 2;
LABEL_27:
            v17 = 550.0;
            if ( FIELD_U8(a1, 86) )
              v17 = -3000.0;
            v18 = v4 + *v34 + (v4 + *v34 < 0 ? 0x320 : 0);
            if ( v18 >= 0x320 )
              v18 = 0;
            v19 = v14 == 2;
            v20 = 1;
            v21 = a1 + 8 * v18;
            if ( v14 == 2 )
              v14 = FIELD_U32(a1, 24);
            v22 = FIELD_F32(v21, 6356);
            v23 = FIELD_F32(v21, 6352);
            if ( v19 )
              v20 = v14 & 0xF;
            memset(&v35, 0, 40);
            v35.settings2 = v20;
            v35.profile = Profile__get(0x139u);
            v35.parentId = FIELD_U32(a1, 8);
            v35.position.x = v23;
            v35.position.y = v22;
            v35.position.z = v17;
            v35.field_20 = FIELD_U8(a1, 86);
            v35.movementId = v5;
            v35.linkId = 0;
            v35.eventId1 = 0;
            v35.eventId2 = 0;
            v35.field_28 = 0;
            ActorMgr__create((void *)ActorMgr__instance, &v35, 0);
            v3 = v31;
            goto LABEL_42;
          }
        }
        else if ( v5 == v30 )
        {
          v16 = v5;
          if ( (unsigned int)(v13 - 3) < 3 )
            v16 = v5 + v13;
          v30 = v16;
          v14 = 3;
          if ( !v5 )
            v14 = 2;
          goto LABEL_27;
        }
      }
      v24 = FIELD_U8(a1, 86);
      v25 = v4 + *v34 + (v4 + *v34 < 0 ? 0x320 : 0);
      if ( v25 >= 0x320 )
        v25 = 0;
      v26 = a1 + 8 * v25;
      v27 = FIELD_F32(v26, 6356);
      v28 = FIELD_F32(v26, 6352);
      memset(&v35, 0, 40);
      v35.profile = Profile__get(0x1A2u);
      v35.parentId = FIELD_U32(a1, 8);
      v29 = 550.0;
      v35.position.x = v28;
      v35.position.y = v27;
      if ( v24 )
        v29 = -3000.0;
      v35.position.z = v29;
      v35.field_20 = FIELD_U8(a1, 86);
      v35.movementId = v5;
      v35.linkId = FIELD_U8(a1, 29);
      v35.eventId1 = 0;
      v35.eventId2 = 0;
      v35.field_28 = 0;
      v3 = v31;
LABEL_41:
      ActorMgr__create((void *)ActorMgr__instance, &v35, 0);
LABEL_42:
      result = *v3;
      ++v5;
      v4 -= 16;
    }
    while ( v5 < *v3 );
  }
  return result;
}
