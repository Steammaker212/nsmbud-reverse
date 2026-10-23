/* sub_603CFCD8
 * address: 0x603CFCD8   size: 668   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603CFCD8(int a1)
{
  int v2; // r5
  unsigned int v3; // r1
  int v4; // r6
  unsigned int v5; // r1
  int v6; // r0
  bool v7; // zf
  unsigned int v8; // r1
  int v9; // r0
  bool v10; // zf
  unsigned int v11; // r1
  int v12; // r0
  bool v13; // zf
  int result; // r0
  int v15; // r5
  int v16; // r10
  int v17; // r11
  float *v18; // r6
  int v19; // r8
  int v20; // r0
  float v21; // s22
  float v22; // s20
  float v23; // s16
  unsigned int v24; // r9
  int v25; // r0
  _BYTE *v26; // r0
  int v27; // r1
  ActorBuildInfo buildInfo; // [sp+1Ch] [bp-74h] BYREF

  v2 = ActorMgr__instance + 27168;
  v3 = FIELD_U32(a1, 660);
  if ( v3 )
  {
    v4 = 1;
    if ( !ActorMgrRelated_getById(ActorMgr__instance + 27168, v3) )
    {
      v4 = 0;
      FIELD_U32(a1, 660) = 0;
    }
  }
  else
  {
    v4 = 0;
  }
  v5 = FIELD_U32(a1, 668);
  if ( v5 )
  {
    v6 = ActorMgrRelated_getById(v2, v5);
    v7 = v6 == 0;
    if ( v6 )
      ++v4;
    else
      v6 = 0;
    if ( v7 )
      FIELD_U32(a1, 668) = v6;
  }
  v8 = FIELD_U32(a1, 676);
  if ( v8 )
  {
    v9 = ActorMgrRelated_getById(v2, v8);
    v10 = v9 == 0;
    if ( v9 )
      ++v4;
    else
      v9 = 0;
    if ( v10 )
      FIELD_U32(a1, 676) = v9;
  }
  v11 = FIELD_U32(a1, 684);
  if ( v11 )
  {
    v12 = ActorMgrRelated_getById(v2, v11);
    v13 = v12 == 0;
    if ( v12 )
      ++v4;
    else
      v12 = 0;
    if ( v13 )
      FIELD_U32(a1, 684) = v12;
  }
  result = sub_6078A50C(PlayerMgr_instance);
  v15 = result;
  if ( result >= 4 )
    v15 = 4;
  if ( v4 < v15 && result > 0 )
  {
    v16 = 0;
    v17 = 0;
    v18 = (float *)&unk_60AF2814;
    do
    {
      v19 = a1 + 8 * v17;
      result = FIELD_U32(v19, 660);
      if ( !result )
      {
        v20 = FIELD_U32(v19, 664);
        if ( !v20 || (result = v20 - 1, (FIELD_U32(v19, 664) = result) == 0) )
        {
          v21 = FIELD_F32(a1, 112) + *v18;
          v22 = FIELD_F32(dword_60CC6484, 120) + (float)((float)v17 * 8.0);
          v23 = sub_60007178(dword_60C7B3F8);
          if ( v17 )
            v24 = FIELD_U32(a1, 24) >> 28;
          else
            v24 = 0;
          memset(&buildInfo.settings2, 0, 40);
          buildInfo.position.x = v22;
          buildInfo.position.y = v21;
          buildInfo.position.z = v23;
          buildInfo.settings1 = 318800144;
          v25 = -268435456;
          if ( v24 <= 2 )
            v25 = dword_60B0111C[v24];
          buildInfo.settings2 = FIELD_U32(a1, 24) & 0xFF1 | v25;
          buildInfo.profile = Profile__get(0x26Fu);
          buildInfo.parentId = FIELD_U32(a1, 8);
          buildInfo.field_20 = 0;
          buildInfo.eventId1 = 0;
          buildInfo.eventId2 = 0;
          buildInfo.field_28 = 0;
          v26 = ActorMgr__create((void *)ActorMgr__instance, &buildInfo, 0);
          if ( v26 )
            FIELD_U32(v19, 660) = *((_DWORD *)v26 + 2);
          v27 = 30 * (unsigned __int8)(FIELD_U32(a1, 24) >> 4) + 120;
          if ( !(unsigned __int8)(FIELD_U32(a1, 24) >> 4) )
            v27 = 128;
          result = v27 + v16;
          FIELD_U32(v19, 664) = v27 + v16;
        }
      }
      ++v17;
      v16 += 10;
      ++v18;
    }
    while ( v17 < v15 );
  }
  return result;
}
