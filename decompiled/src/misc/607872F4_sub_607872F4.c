/* sub_607872F4
 * address: 0x607872F4   size: 1404   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607872F4(int a1, int a2)
{
  _BOOL4 v3; // r1
  int result; // r0
  int v5; // r2
  int v6; // r9
  int v7; // r3
  int v8; // r0
  int v9; // r0
  int v10; // r1
  int v11; // r0
  int v12; // r1
  int v13; // r0
  int v14; // r1
  int v15; // r1
  int v16; // r0
  int v17; // r7
  int *v18; // r11
  int v19; // r12
  int v20; // lr
  char v21; // r10
  int v22; // r0
  int v23; // r1
  bool v24; // cc
  unsigned int v25; // r0
  signed int v26; // r4
  unsigned int v27; // r5
  int v28; // r6
  int v29; // r1
  unsigned int v30; // r0
  int *v31; // r0
  unsigned int v32; // r3
  unsigned int v33; // r3
  int v34; // r4
  int v35; // r4
  int v36; // r4
  int v37; // r4
  int v38; // [sp+0h] [bp-60h] BYREF
  int v39; // [sp+4h] [bp-5Ch] BYREF
  int v40; // [sp+8h] [bp-58h] BYREF
  int v41; // [sp+Ch] [bp-54h] BYREF
  ActorBuildInfo buildInfo; // [sp+10h] [bp-50h] BYREF

  v3 = sub_6040E510(LevelInfo_instance);
  result = 0;
  if ( !v3 )
    return result;
  v5 = 23;
  v6 = 1;
  v7 = FIELD_U8(dword_60CC6D8C, 17);
  buildInfo.settings1 = v7;
  buildInfo.settings2 = 4;
  buildInfo.parentId = 2;
  v8 = 1;
  if ( v7 )
  {
    v5 = 54;
    v8 = 5;
  }
  buildInfo.profile = (Profile *)v8;
  if ( FIELD_U8(a2, 20) )
  {
    v9 = FIELD_U32(a2, 32);
    v10 = (1 << v9) ^ 0x37;
    v38 = v9;
    if ( v9 == 3 )
      v10 = 51;
    v5 &= v10;
  }
  else
  {
    v6 = 0;
  }
  if ( FIELD_U8(a2, 92) )
  {
    v11 = FIELD_U32(a2, 104);
    ++v6;
    v12 = ~(1 << v11);
    v39 = v11;
    if ( v11 == 3 )
      v12 = -5;
    v5 &= v12;
  }
  if ( FIELD_U8(a2, 164) )
  {
    v13 = FIELD_U32(a2, 176);
    ++v6;
    v14 = ~(1 << v13);
    v40 = v13;
    if ( v13 == 3 )
      v14 = -5;
    v5 &= v14;
  }
  if ( FIELD_U8(a2, 236) )
  {
    v15 = FIELD_U32(a2, 248);
    v16 = ~(1 << v15);
    v41 = v15;
    if ( v15 == 3 )
      v16 = -5;
    if ( v6 > 2 )
      goto LABEL_68;
    v5 &= v16;
    ++v6;
  }
  v17 = 0;
  v18 = &v38;
  v19 = 0;
  v20 = 0;
  v21 = 0;
  v22 = v6;
  if ( (v5 & (1 << v7)) != 0 )
    goto LABEL_25;
  while ( 1 )
  {
    v24 = v17 <= 5;
    if ( v17 <= 5 )
      v24 = v22 <= 3;
    if ( !v24 )
      break;
    v7 = *(&buildInfo.settings2 + v17++);
    if ( (v5 & (1 << v7)) != 0 )
    {
LABEL_25:
      v23 = 0;
      if ( (unsigned int)v22 < 4 )
        v23 = v22;
      v5 &= ~(1 << v7);
      ++v22;
      *(&v38 + v23) = v7;
      switch ( v7 )
      {
        case 1:
          v21 = 1;
          break;
        case 2:
          v19 = 1;
          break;
        case 4:
          v20 = 1;
          break;
      }
    }
  }
  if ( (v21 & 1) != 0 )
  {
    v25 = 3;
    if ( v41 == 1 || (v25 = 2, v40 == 1) || (v25 = 1, v39 == 1) )
    {
      if ( (int)v25 > v6 )
      {
        do
        {
          v26 = v25 - 1;
          v27 = 0;
          if ( v25 - 1 < 4 )
            v27 = v25 - 1;
          v28 = *(&v38 + v27);
          if ( !v28 )
            break;
          if ( v25 >= 4 )
            v25 = 0;
          v29 = *(&v38 + v25);
          *(&v38 + v25) = v28;
          v25 = v26;
          *(&v38 + v27) = v29;
        }
        while ( v26 > v6 );
      }
    }
  }
  if ( (v20 & v19 & 1) == 0 )
    goto LABEL_68;
  v30 = 1;
  if ( v38 == 4 )
  {
LABEL_56:
    if ( v30 <= 3 )
    {
LABEL_57:
      if ( *(&v38 + v30) != 2 )
      {
        v32 = v30 + 1;
        if ( v30 + 1 > 3 )
          goto LABEL_68;
        if ( *(&v38 + v32) == 2 )
        {
          v31 = &v38 + v32;
          goto LABEL_59;
        }
        v33 = v30 + 2;
        if ( v30 + 2 > 3 )
          goto LABEL_68;
        if ( *(&v38 + v33) == 2 )
        {
          v31 = &v38 + v33;
          goto LABEL_59;
        }
        v30 += 3;
        if ( v30 > 3 || *(&v38 + v30) != 2 )
          goto LABEL_68;
      }
      v31 = &v38 + v30;
LABEL_59:
      *v18 = 2;
      *v31 = 4;
      goto LABEL_68;
    }
    goto LABEL_68;
  }
  if ( v39 == 4 )
  {
    v18 = &v39;
    v30 = 2;
    goto LABEL_57;
  }
  if ( v40 == 4 )
  {
    v18 = &v40;
    v30 = 3;
    goto LABEL_57;
  }
  if ( v41 == 4 )
  {
    v18 = &v41;
    v30 = 4;
    goto LABEL_56;
  }
LABEL_68:
  v34 = v38;
  memset(&buildInfo, 0, sizeof(buildInfo));
  buildInfo.profile = Profile__get(0x1BCu);
  if ( v34 == 5 )
    buildInfo.profile = Profile__get(0x1BBu);
  memset(&buildInfo.position, 0, sizeof(buildInfo.position));
  buildInfo.settings1 = ((v34 & 0xF) << 8) | 0x10;
  ActorMgr__create((void *)ActorMgr__instance, &buildInfo, 0);
  v35 = v39;
  memset(&buildInfo, 0, sizeof(buildInfo));
  buildInfo.profile = Profile__get(0x1BCu);
  if ( v35 == 5 )
    buildInfo.profile = Profile__get(0x1BBu);
  memset(&buildInfo.position, 0, sizeof(buildInfo.position));
  buildInfo.settings1 = ((v35 & 0xF) << 8) | 0x11;
  ActorMgr__create((void *)ActorMgr__instance, &buildInfo, 0);
  v36 = v40;
  memset(&buildInfo, 0, sizeof(buildInfo));
  buildInfo.profile = Profile__get(0x1BCu);
  if ( v36 == 5 )
    buildInfo.profile = Profile__get(0x1BBu);
  memset(&buildInfo.position, 0, sizeof(buildInfo.position));
  buildInfo.settings1 = ((v36 & 0xF) << 8) | 0x12;
  ActorMgr__create((void *)ActorMgr__instance, &buildInfo, 0);
  v37 = v41;
  memset(&buildInfo, 0, sizeof(buildInfo));
  buildInfo.profile = Profile__get(0x1BCu);
  if ( v37 == 5 )
    buildInfo.profile = Profile__get(0x1BBu);
  memset(&buildInfo.position, 0, sizeof(buildInfo.position));
  buildInfo.settings1 = ((v37 & 0xF) << 8) | 0x13;
  ActorMgr__create((void *)ActorMgr__instance, &buildInfo, 0);
  if ( FIELD_U8(a2, 20) )
    FIELD_U8(a2, 49) = 1;
  if ( FIELD_U8(a2, 92) )
    FIELD_U8(a2, 121) = 1;
  if ( FIELD_U8(a2, 164) )
    FIELD_U8(a2, 193) = 1;
  if ( FIELD_U8(a2, 236) )
    FIELD_U8(a2, 265) = 1;
  return 1;
}
