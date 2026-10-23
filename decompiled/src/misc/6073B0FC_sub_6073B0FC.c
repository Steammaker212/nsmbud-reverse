/* sub_6073B0FC
 * address: 0x6073B0FC   size: 1380   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6073B0FC(int a1)
{
  unsigned int v2; // r4
  unsigned int U32; // r0
  unsigned int v4; // r12
  unsigned int v5; // r0
  unsigned __int8 *v6; // r10
  _BYTE *v7; // r1
  int v8; // r1
  _BYTE *v9; // r1
  int v10; // r0
  int v11; // r1
  int v12; // r4
  _DWORD **v13; // r2
  _DWORD *v14; // r0
  _DWORD *v15; // r3
  _DWORD *v16; // r7
  _DWORD *v17; // r1
  _DWORD *v18; // r1
  _DWORD **v19; // r0
  int v20; // r4
  int v21; // r0
  int v22; // r4
  int v23; // r2
  float v24; // s18
  float v25; // s20
  int v26; // r8
  int v27; // r0
  int v28; // r9
  _DWORD *v30; // [sp+4h] [bp-74h]
  _DWORD v31[28]; // [sp+8h] [bp-70h] BYREF

  v2 = FIELD_U32(a1, 20);
  U32 = sead__Random__getU32((void *)(dword_60C9CF0C + 1340));
  v4 = v2 >> 4;
  v5 = U32 >> 31;
  switch ( v2 & 0xF )
  {
    case 0u:
      FIELD_U8(a1, 6108) = 3;
      v6 = (unsigned __int8 *)(a1 + 6108);
      FIELD_U8(a1, 6109) = 3;
      FIELD_U32(a1, 6104) = 1110704128;
      FIELD_U8(a1, 6138) = 0;
      FIELD_U8(a1, 6124) = 1;
      FIELD_U8(a1, 6126) = 4;
      FIELD_U64(a1, 6128) = 1106247680;
      goto LABEL_14;
    case 1u:
      FIELD_U8(a1, 6108) = 3;
      v6 = (unsigned __int8 *)(a1 + 6108);
      FIELD_U8(a1, 6109) = 4;
      FIELD_U32(a1, 6104) = 1108082688;
      FIELD_U8(a1, 6138) = 7;
      v7 = (_BYTE *)(a1 + 6124);
      if ( v5 )
      {
        *v7 = 0;
        v8 = 1090519040;
        goto LABEL_9;
      }
      *v7 = 1;
      FIELD_U8(a1, 6126) = 6;
      FIELD_U32(a1, 6128) = 1109917696;
      v11 = 1077936128;
      v10 = 6132;
      break;
    case 2u:
      FIELD_U8(a1, 6108) = 4;
      v6 = (unsigned __int8 *)(a1 + 6108);
      FIELD_U8(a1, 6109) = 5;
      FIELD_U32(a1, 6104) = 1109393408;
      FIELD_U8(a1, 6138) = 5;
      v9 = (_BYTE *)(a1 + 6124);
      if ( v5 )
      {
        *v9 = 0;
        v8 = 1082130432;
LABEL_9:
        FIELD_U32(a1, 6116) = v8;
        v10 = 6120;
        v11 = 0x40000000;
      }
      else
      {
        *v9 = 1;
        FIELD_U8(a1, 6126) = 6;
        FIELD_U32(a1, 6128) = 1108082688;
        v11 = 1082130432;
        v10 = 6132;
      }
      break;
    case 3u:
      FIELD_U8(a1, 6108) = 5;
      v6 = (unsigned __int8 *)(a1 + 6108);
      FIELD_U8(a1, 6109) = 2;
      FIELD_U32(a1, 6104) = 1108082688;
      FIELD_U8(a1, 6138) = 0;
      FIELD_U8(a1, 6124) = 1;
      FIELD_U8(a1, 6126) = 8;
      FIELD_U64(a1, 6128) = 0x40800000420C0000LL;
      goto LABEL_14;
    default:
      v6 = (unsigned __int8 *)(a1 + 6108);
      if ( !FIELD_U8(a1, 6108) )
        goto LABEL_22;
      goto LABEL_14;
  }
  *(_DWORD *)(a1 + v10) = v11;
LABEL_14:
  v12 = 0;
  v13 = (_DWORD **)(a1 + 6248);
  v14 = (_DWORD *)(a1 + 6244);
  v15 = (_DWORD *)(a1 + 6240);
  v16 = (_DWORD *)(a1 + 6236);
  do
  {
    if ( *v16 < *v15 )
    {
      v17 = *v13;
      if ( *v13 )
        *v13 = (_DWORD *)*v17;
      else
        v17 = 0;
      *v17 = 0;
      if ( *v16 < *v15 )
        *(_DWORD *)(*v14 + 4 * (*v16)++) = v17;
    }
    v18 = *(_DWORD **)(*v14 + 4 * v12++);
    *v18 = 24;
  }
  while ( v12 < *v6 );
LABEL_22:
  if ( (v4 & 0xF) >= 3 )
  {
    if ( (v4 & 0xF) == 3 )
    {
      ***(_DWORD ***)(a1 + 6244) = 8;
      **(_DWORD **)(FIELD_U32(a1, 6244) + 4) = 7;
    }
  }
  else
  {
    ***(_DWORD ***)(a1 + 6244) = 0;
    **(_DWORD **)(FIELD_U32(a1, 6244) + 4) = (((int)sead__Random__getU32((void *)(dword_60C9CF0C + 1340)) >> 31)
                                               & 0xFFFFFFFD)
                                              + 9;
  }
  if ( FIELD_U8(dword_60CC6D8C, 17) )
  {
    v20 = a1 + 6244;
    v19 = *(_DWORD ***)(a1 + 6244);
    if ( !**v19 )
    {
      ***(_DWORD ***)v20 = (sead__Random__getU32((void *)(dword_60C9CF0C + 1340)) >> 31) | 0xA;
      v19 = *(_DWORD ***)v20;
    }
    if ( !*v19[1] )
      **(_DWORD **)(*(_DWORD *)v20 + 4) = (sead__Random__getU32((void *)(dword_60C9CF0C + 1340)) >> 31) | 0xA;
  }
  sub_608DEBEC(a1 + 6236, dword_60C9CF0C + 1340);
  v21 = *v6;
  v22 = a1;
  v23 = dword_60CC6484;
  v24 = FIELD_F32(dword_60CC6484, 116) + (float)((float)((float)(v21 - 1) * -0.5) * 64.0);
  FIELD_F32(a1, 108) = v24;
  v25 = (float)(FIELD_F32(v23, 128) + -16.0) + 0.0;
  FIELD_F32(a1, 112) = v25;
  FIELD_U32(a1, 116) = 0;
  if ( v21 )
  {
    v26 = 0;
    v30 = (_DWORD *)(a1 + 6244);
    do
    {
      v27 = 0;
      if ( (unsigned int)v26 < 5 )
        v27 = v26;
      v28 = v22 + 12 * v27;
      FIELD_F32(v28, 6140) = v24;
      FIELD_F32(v28, 6144) = v25;
      FIELD_U32(v28, 6148) = 0;
      memset(v31, 0, 44);
      v31[0] = v26 | (16 * **(_DWORD **)(*v30 + 4 * v26));
      v31[2] = FIELD_U32(v22, 8);
      v31[3] = Profile__get(0x105u);
      v31[4] = FIELD_U32(v28, 6140);
      v31[5] = FIELD_U32(v28, 6144);
      v31[6] = FIELD_U32(v28, 6148);
      sub_600080BC((_DWORD *)ActorMgr__instance, v31);
      v24 = v24 + 64.0;
      ++v26;
    }
    while ( v26 < *v6 );
  }
  StateMgr__changeState((StateMgr *)(v22 + 6084), (StateBase *)&dword_60CBDF44);
  return 1;
}
