/* BooCircle_onCreate
 * address: 0x603B2328   size: 704   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall BooCircle_onCreate(MultiStateActor *a1)
{
  unsigned int settings1; // r0
  int *v3; // r11
  int movementId; // r1
  int v5; // r0
  int v6; // r1
  int v7; // r5
  float v8; // s6
  int v9; // s0
  int v10; // r8
  unsigned int v11; // r6
  unsigned int v12; // r10
  int v13; // r0
  float y; // r1
  float z; // r2
  float *v16; // r0
  float v17; // s0
  float v18; // s6
  float v19; // s2
  float v20; // s0
  float v21; // s8
  float v22; // s2
  unsigned int v23; // r0
  int *v24; // r4
  float *v26; // [sp+Ch] [bp-44h]
  float x; // [sp+10h] [bp-40h] BYREF
  float v28; // [sp+14h] [bp-3Ch]
  float v29; // [sp+18h] [bp-38h]

  settings1 = FIELD_U32(a1, 0x0)._._.settings1;
  v3 = &a1[1]._._.aCollider.field_B0;
  a1[1]._._.aCollider.info.callback = (void *)(settings1 & 0xF);
  LODWORD(a1[1]._._.aCollider.trapezoidOffsetTopLeft) = (unsigned __int8)settings1 >> 4;
  LODWORD(a1[1]._._.aCollider.trapezoidOffsetTopRight) = (settings1 >> 8) & 0xF;
  LODWORD(a1[1]._._.aCollider.trapezoidOffsetBottomLeft) = 60 * ((unsigned __int16)settings1 >> 12);
  a1[1]._._.aCollider.field_B0 = (HIWORD(settings1) & 0xF) + 1;
  a1[1]._._.aCollider.lastCollisionOffsetX = (float)((HIWORD(settings1) & 0xF0) + 16);
  *(float *)&a1[1]._._.aCollider.field_C0 = (float)(((settings1 >> 20) & 0xF0) + 16);
  movementId = (unsigned __int8)FIELD_U32(a1, 0x0)._._.movementId;
  a1[1]._._.aCollider.field_CC = movementId;
  a1[1]._._.aCollider.field_C8 = settings1 >> 28;
  if ( movementId )
  {
    v5 = sub_603B27D8(a1);
    if ( v5 )
    {
      FIELD_U32(a1, 0x0)._.position.x = FIELD_F32(v5, 108) + 8.0;
      FIELD_U32(a1, 0x0)._.position.y = FIELD_F32(v5, 112) + -16.0;
    }
  }
  a1[1]._._.aCollider.field_C4 = LODWORD(a1[1]._._.aCollider.lastCollisionOffsetX);
  memset(&a1[1]._._.aCollider.node4.prev, 0, 96);
  v6 = *v3;
  v7 = *v3 + a1[1]._._.aCollider.field_C8;
  v8 = (float)(v7 + 1);
  v9 = (int)(float)((float)(2147500000.0 * (float)(360.0 / v8)) / 180.0);
  v26 = (float *)&a1[1]._._.aCollider.field_C4;
  a1[1]._._.aCollider.field_B4 = v9;
  if ( v7 + 1 >= 1 )
  {
    v10 = 0;
    v11 = 0;
    v12 = 0;
    v13 = (int)(float)((float)(2147500000.0 * (float)(360.0 / v8)) / 180.0);
    if ( v6 > 0 )
      goto LABEL_8;
    while ( v7 != v10 )
    {
      v6 = *v3;
      ++v10;
      v12 += v13;
      if ( (int)v11 < *v3 )
      {
LABEL_8:
        if ( v10 != v6 / 2 )
        {
          y = FIELD_U32(a1, 0x0)._.position.y;
          z = FIELD_U32(a1, 0x0)._.position.z;
          x = FIELD_U32(a1, 0x0)._.position.x;
          v28 = y;
          v29 = z;
          v29 = sub_60007178(dword_60C7B3F8);
          v16 = (float *)((char *)sinLutTable + ((v12 >> 20) & 0xFF0));
          v17 = (float)(v12 & 0xFFFFFF);
          v18 = *v26;
          v19 = v16[2] + (float)((float)(v17 * v16[3]) * 0.000000059605);
          v20 = v17 * v16[1];
          v21 = x + (float)(*v26 * v19);
          v22 = *v16;
          v23 = 0;
          if ( v11 < 0x10 )
            v23 = v11;
          x = v21;
          v28 = v28 + (float)(v18 * (float)(v22 + (float)(v20 * 0.000000059605)));
          v24 = &FIELD_U32(a1, 0x0)._._.vtable + v23;
          (*(void (__fastcall **)(MultiStateActor *, float *, unsigned int))(FIELD_U32(a1, 0x0)._._.vtable + 196))(a1, &x, v11++);
          v24[1626] = v12;
          v13 = a1[1]._._.aCollider.field_B4;
        }
      }
    }
  }
  (*(void (__fastcall **)(MultiStateActor *, int *, float))(FIELD_U32(a1, 0x0)._._.vtable + 192))(a1, &dword_60C97D38, *(float *)&v9);
  return 1;
}
