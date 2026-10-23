/* sub_60666028
 * address: 0x60666028   size: 712   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60666028(int a1)
{
  char v1; // r12
  unsigned int v3; // r10
  unsigned int v4; // r0
  unsigned int v5; // r2
  int v6; // r1
  int v7; // r2
  unsigned int v8; // r3
  int v9; // r3
  bool v10; // zf
  float v11; // r6
  float v12; // r7
  int v13; // r11
  unsigned int v14; // r0
  float *v15; // r0
  float v16; // s16
  float v17; // s18
  int v18; // r9
  Profile *v19; // r0
  int v20; // r1
  float v21; // s20
  float v22; // s22
  int v24; // [sp+0h] [bp-50h]
  int v25; // [sp+4h] [bp-4Ch]

  FIELD_U8(a1, 535) = 0;
  v3 = FIELD_U32(a1, 20);
  FIELD_F32(a1, 644) = (float)((unsigned int)(unsigned __int8)(v3 >> 20) + 4) * 16.0;
  FIELD_U8(a1, 664) = (v3 & 0x10000000) != 0;
  if ( ((unsigned int)&unk_60CB6C00 & ~(1617322112 << v1) & 1) == 0 && _cxa_guard_acquire((__guard *)&unk_60CB6C00) )
  {
    dword_60CB6C04 = 0;
    byte_60CB6C08 = 0;
    dword_60CB6C0C = 1;
    byte_60CB6C10 = 1;
    dword_60CB6C14 = 2;
    byte_60CB6C18 = 2;
    dword_60CB6C1C = 3;
    byte_60CB6C20 = 3;
    _cxa_guard_release((__guard *)&unk_60CB6C00);
  }
  v4 = HIWORD(v3) & 3;
  FIELD_U32(a1, 80) = v4;
  v5 = FIELD_U32(a1, 24);
  v25 = *((_DWORD *)&unk_60CB6C00 + 2 * v4 + 1) | (FIELD_U8(a1, 664) << 28);
  FIELD_U32(a1, 648) = v25;
  v6 = (v5 >> 8) & 0xF;
  v7 = v5 & 0xF;
  v24 = v6 << 8;
  FIELD_U32(a1, 652) = v6 << 8;
  if ( !v6 )
    v6 = 4;
  LOWORD(v8) = 128;
  if ( v4 >= 2 )
  {
    v9 = v7;
    if ( !v7 )
      v9 = 4;
    v8 = (unsigned int)(float)((float)(unsigned int)(v6 + v9) * 16.0);
  }
  v10 = v4 == 2;
  FIELD_U16(a1, 656) = v8;
  if ( v4 != 2 )
    v10 = v4 == 3;
  FIELD_U16(a1, 658) = v8;
  FIELD_U32(a1, 492) = 0;
  FIELD_U32(a1, 496) = 0;
  FIELD_U32(a1, 500) = 1140850688;
  FIELD_U32(a1, 504) = 1140850688;
  FIELD_U32(a1, 508) = 1140850688;
  FIELD_U32(a1, 512) = 1140850688;
  v11 = FIELD_F32(a1, 108);
  v12 = FIELD_F32(a1, 112);
  v13 = FIELD_U32(a1, 116);
  if ( v10 )
  {
    v17 = 0.0;
    if ( v7 )
      v14 = v6 + v7;
    else
      v14 = v6 + 4;
    v16 = (float)v14 * 16.0;
  }
  else
  {
    v15 = (float *)((char *)&unk_60B07978 + 16 * *((unsigned __int8 *)&unk_60CB6C00 + 8 * v4 + 8));
    v16 = v15[2] * 128.0;
    v17 = v15[3] * 128.0;
  }
  v18 = FIELD_U32(a1, 8);
  v19 = Profile__get(0xD8u);
  v20 = FIELD_U32(a1, 160);
  FIELD_U32(a1, 668) = v25;
  FIELD_U32(a1, 672) = v24;
  FIELD_U32(a1, 676) = v18;
  FIELD_U32(a1, 680) = v19;
  FIELD_F32(a1, 684) = v11;
  FIELD_F32(a1, 688) = v12;
  FIELD_U32(a1, 692) = v13;
  FIELD_U32(a1, 696) = v20;
  FIELD_U32(a1, 704) = 0;
  FIELD_U32(a1, 708) = 0;
  FIELD_U32(a1, 700) = 0;
  if ( (v3 & 1) != 0 )
  {
    FIELD_U16(a1, 656) = 2;
  }
  else
  {
    ActorMgr__create((void *)ActorMgr__instance, (ActorBuildInfo *)(a1 + 668), 0);
    FIELD_U32(a1, 692) = v13;
    FIELD_F32(a1, 684) = v16 + v11;
    FIELD_F32(a1, 688) = v17 + v12;
    ActorMgr__create((void *)ActorMgr__instance, (ActorBuildInfo *)(a1 + 668), 0);
    v21 = v16 + (float)(v16 + v11);
    v22 = v17 + (float)(v17 + v12);
    FIELD_U32(a1, 692) = v13;
    FIELD_F32(a1, 684) = v21;
    FIELD_F32(a1, 688) = v22;
    ActorMgr__create((void *)ActorMgr__instance, (ActorBuildInfo *)(a1 + 668), 0);
    FIELD_U32(a1, 692) = v13;
    FIELD_F32(a1, 684) = v16 + v21;
    FIELD_F32(a1, 688) = v17 + v22;
    ActorMgr__create((void *)ActorMgr__instance, (ActorBuildInfo *)(a1 + 668), 0);
    FIELD_F32(a1, 684) = v11;
    FIELD_F32(a1, 688) = v12;
    FIELD_U32(a1, 692) = v13;
  }
  return 1;
}
