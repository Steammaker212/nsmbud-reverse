/* sub_608002B0
 * address: 0x608002B0   size: 1132   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float *__fastcall sub_608002B0(int a1)
{
  char v2; // r11
  int v3; // s16
  int v4; // r6
  int v5; // s18
  float v6; // s20
  _BYTE *v7; // r8
  int id; // r3
  char v9; // r2
  int v10; // r5
  unsigned int v11; // r1
  Actor *v12; // r0
  Actor *v13; // r7
  char v14; // r12
  bool v15; // zf
  float WrappedXPos; // s0
  float *v17; // r0
  float v18; // s0
  int v19; // r5
  int i; // r6
  int v21; // r1
  int v22; // r2
  float v23; // s0
  int v24; // r0
  int v25; // r2
  float v26; // s0
  int v27; // r6
  int v28; // r3
  bool v29; // cc
  int v30; // r1
  float *v31; // r1
  float v32; // s2
  int v34; // [sp+0h] [bp-78h]
  int v35; // [sp+4h] [bp-74h]
  int v36; // [sp+8h] [bp-70h]
  int v37; // [sp+Ch] [bp-6Ch]
  int v38; // [sp+20h] [bp-58h]

  v2 = 0;
  v3 = 0;
  v4 = 0;
  v37 = FIELD_U32(a1, 44);
  v5 = 0;
  v6 = 0.0;
  v36 = FIELD_U32(a1, 48);
  v35 = FIELD_U32(a1, 52);
  v34 = FIELD_U32(a1, 56);
  FIELD_U16(a1, 16) = 0;
  FIELD_U16(a1, 20) = 257;
  FIELD_U16(a1, 18) = 257;
  FIELD_U16(a1, 22) = 0;
  v7 = (_BYTE *)(a1 + 22);
  FIELD_U16(a1, 40) = 0;
  FIELD_U16(a1, 38) = 0;
  FIELD_U16(a1, 36) = 0;
  FIELD_U16(a1, 34) = 0;
  FIELD_U16(a1, 32) = 0;
  FIELD_U16(a1, 30) = 0;
  FIELD_U16(a1, 28) = 0;
  FIELD_U16(a1, 26) = 0;
  FIELD_U16(a1, 24) = 0;
  FIELD_U16(a1, 42) = 0;
  FIELD_U32(a1, 44) = 2139095039;
  FIELD_U32(a1, 48) = -8388609;
  FIELD_U32(a1, 52) = 2139095039;
  FIELD_U32(a1, 56) = -8388609;
  v38 = 0;
  do
  {
    v10 = sub_60802830(v4);
    if ( v10 )
    {
      FIELD_U16(a1, 16) |= 1 << v4;
      v11 = FIELD_U32(v10, 7104);
      if ( !v11 )
        goto LABEL_20;
      v12 = (Actor *)ActorMgrRelated_getById(ActorMgr__instance + 27168, v11);
      v13 = v12;
      if ( !v12 || Actor__getProfileId(v12) != 184 && Actor__getProfileId(v13) != 185 && Actor__getProfileId(v13) != 186 )
        goto LABEL_20;
      if ( ((unsigned int)&dword_60C7B364 & ~(1619002552 << v14) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
      {
        StageActor_RTTI = (int)&off_60BC0098;
        _cxa_guard_release(&dword_60C7B364);
      }
      if ( (*(int (__fastcall **)(Actor *, int *))FIELD_U32(v13, 0x0))(v13, &StageActor_RTTI) != 1 )
        goto LABEL_20;
      v6 = *(float *)&v13[1].childCount;
      v5 = v13[1].field_2C;
      v3 = v13[1].field_30;
      if ( !*v7 && v6 != 0.0 )
        *v7 = 1;
      if ( (v2 & 1) == 0 )
      {
        id = v38;
        v9 = v38;
        if ( v38 )
          v9 = 1;
        else
          id = FIELD_U32(v13, 0x8);
        v2 = (v38 != FIELD_U32(v13, 0x8)) & v9;
        v38 = id;
      }
      else
      {
LABEL_20:
        v2 = 1;
      }
      ++FIELD_U32(a1, 36);
      v15 = (FIELD_U8(v10, 1217) & 0x10) == 0;
      if ( (FIELD_U8(v10, 1217) & 0x10) == 0 )
        v15 = (FIELD_U8(v10, 1239) & 0x40) == 0;
      if ( !v15 )
        ++FIELD_U32(a1, 40);
      WrappedXPos = AreaTask_getWrappedXPos(AreaTask_intance, FIELD_F32(v10, 11468));
      v17 = (float *)(v10 + 11472);
      if ( FIELD_F32(a1, 44) > WrappedXPos )
        FIELD_F32(a1, 44) = WrappedXPos;
      if ( FIELD_F32(a1, 48) < WrappedXPos )
        FIELD_F32(a1, 48) = WrappedXPos;
      v18 = *v17;
      if ( FIELD_F32(a1, 52) > *v17 )
        FIELD_F32(a1, 52) = v18;
      if ( FIELD_F32(a1, 56) < v18 )
        FIELD_F32(a1, 56) = v18;
    }
    ++v4;
  }
  while ( v4 != 4 );
  if ( FIELD_U32(a1, 36) )
  {
    v19 = FIELD_U32(a1, 72);
    if ( v19 >= 1 )
    {
      for ( i = 0; i != v19; ++i )
      {
        v21 = FIELD_U32(a1, 64);
        v22 = FIELD_U32(a1, 68);
        if ( i + v22 >= v21 )
          v22 -= v21;
        v23 = AreaTask_getWrappedXPos(AreaTask_intance, *(float *)(FIELD_U32(a1, 60) + 4 * (i + v22)));
        if ( FIELD_F32(a1, 44) > v23 )
        {
          FIELD_F32(a1, 44) = v23;
          FIELD_U8(a1, 18) = 0;
        }
        if ( FIELD_F32(a1, 48) < v23 )
        {
          FIELD_F32(a1, 48) = v23;
          FIELD_U8(a1, 19) = 0;
        }
      }
    }
    v24 = FIELD_U32(a1, 120);
    if ( v24 >= 1 )
    {
      v25 = FIELD_U32(a1, 116);
      v26 = FIELD_F32(a1, 52);
      v27 = FIELD_U32(a1, 112);
      v28 = FIELD_U32(a1, 108) + 4 * v25;
      do
      {
        v29 = v25 < v27;
        v30 = v27;
        ++v25;
        if ( v29 )
          v30 = 0;
        v31 = (float *)(v28 - 4 * v30);
        v28 += 4;
        v32 = *v31;
        if ( v26 > *v31 )
        {
          FIELD_F32(a1, 52) = v32;
          FIELD_U8(a1, 20) = 0;
          v26 = v32;
        }
        if ( FIELD_F32(a1, 56) < v32 )
        {
          FIELD_F32(a1, 56) = v32;
          FIELD_U8(a1, 21) = 0;
        }
        --v24;
      }
      while ( v24 );
    }
    if ( (v2 & 1) == 0 )
    {
      FIELD_U8(a1, 23) = 1;
      FIELD_F32(a1, 24) = v6;
      FIELD_U32(a1, 28) = v5;
      FIELD_U32(a1, 32) = v3;
    }
  }
  else
  {
    FIELD_U32(a1, 44) = v37;
    FIELD_U32(a1, 48) = v36;
    FIELD_U32(a1, 52) = v35;
    FIELD_U32(a1, 56) = v34;
  }
  return sub_607FF880((float *)a1);
}
