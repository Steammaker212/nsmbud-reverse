/* sub_601A85F0
 * address: 0x601A85F0   size: 1056   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601A85F0(int a1)
{
  int v2; // r0
  int result; // r0
  int v4; // r0
  _DWORD *v5; // r9
  int v6; // r4
  float v7; // s0
  float v8; // s2
  float v9; // s0
  int v10; // r0
  int v11; // r5
  int *v12; // r11
  __guard *v13; // r8
  __guard *v14; // r5
  int *v15; // r8
  int *v16; // r10
  int *v17; // t1
  signed int v18; // r5
  int v19; // r0
  bool v20; // cc
  int v21; // r0
  float v22; // s0
  float *v23; // r0
  int (**v24)(); // [sp+8h] [bp-40h] BYREF
  int *v25; // [sp+Ch] [bp-3Ch]
  int v26; // [sp+10h] [bp-38h]
  int v27; // [sp+14h] [bp-34h] BYREF
  signed int v28; // [sp+1Ch] [bp-2Ch] BYREF
  signed int v29; // [sp+20h] [bp-28h] BYREF

  v2 = FIELD_U32(a1, 484);
  if ( v2 )
  {
    result = v2 - 1;
    FIELD_U32(a1, 484) = result;
    if ( !result )
    {
      FIELD_U32(a1, 128) = 0x40000000;
      FIELD_U32(a1, 132) = 0x40000000;
      FIELD_U32(a1, 136) = 0x40000000;
      v6 = a1 + 80;
      sub_601E4C88(dword_60C8B13C, 146, v6, 1);
      return sub_601E4C88(dword_60C8B13C, 168, v6, 1);
    }
    return result;
  }
  v4 = FIELD_U32(a1, 180);
  if ( v4 != FIELD_U32(a1, 472) )
  {
    v24 = *(int (***)())(a1 + 472);
    v29 = 18874368;
    v28 = 0x200000;
    sub_608322C0((int *)(a1 + 180), (int *)&v24, &v29, &v28);
    v4 = FIELD_U32(a1, 180);
  }
  FIELD_U32(a1, 192) = v4;
  v5 = (_DWORD *)(a1 + 80);
  if ( FIELD_S32(a1, 500) < 0 )
    FIELD_U32(a1, 500) = sub_601E4EA4(dword_60C8B13C, 146, 0, a1 + 80, 1);
  ((void (__fastcall *)(int))loc_60168DF8)(a1);
  v7 = (float)(FIELD_F32(a1, 84) - FIELD_F32(a1, 444))
     / (float)(sqrtf(
                 (float)((float)(FIELD_F32(a1, 88) - FIELD_F32(a1, 448))
                       * (float)(FIELD_F32(a1, 88) - FIELD_F32(a1, 448)))
               + (float)((float)(FIELD_F32(a1, 80) - FIELD_F32(a1, 440))
                       * (float)(FIELD_F32(a1, 80) - FIELD_F32(a1, 440))))
             / FIELD_F32(a1, 200));
  FIELD_F32(a1, 476) = v7;
  ((void (__fastcall *)(int, float, float, float, float))loc_60832560)(a1 + 120, -v7, 0.1, 2.0, 0.05);
  if ( FIELD_S32(a1, 488) > 1 )
  {
    v8 = 0.07;
    v9 = 14.0;
  }
  else
  {
    v8 = 0.08;
    v9 = 2.0;
  }
  ((void (__fastcall *)(int, float, float, float, float))loc_60832560)(a1 + 200, v9, 0.1, v8, 0.01);
  if ( sub_601687F4((float *)a1, (float *)(a1 + 428), (float *)(a1 + 440)) == 1 )
  {
    FIELD_U32(a1, 428) = *v5;
    FIELD_U32(a1, 432) = FIELD_U32(a1, 84);
    FIELD_U32(a1, 436) = FIELD_U32(a1, 88);
    v10 = FIELD_U32(a1, 488);
    if ( v10 > 2 )
    {
      if ( (FIELD_U8(a1, 216) & 8) != 0 )
      {
        if ( FIELD_S32(a1, 500) >= 0 )
        {
          sub_601E4F60(dword_60C8B13C);
          FIELD_U32(a1, 500) = -1;
        }
        FIELD_U8(a1, 19) = 1;
      }
      goto LABEL_42;
    }
    v11 = v10 + 1;
    FIELD_U32(a1, 488) = v10 + 1;
    v25 = &v27;
    v24 = &BufferedSafeStringBase_char_vtable_probably;
    v26 = 8;
    sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&v24);
    v24 = &off_60BD58EC;
    v12 = v25;
    v13 = &dword_60C8A350[2 * v11];
    v14 = v13 + 9;
    (*(void (__fastcall **)(__guard *))(v13[9] + 12))(v13 + 9);
    v17 = (int *)v13[10];
    v15 = v13 + 10;
    v16 = v17;
    if ( v12 != v17 )
    {
      (*(void (__fastcall **)(__guard *))(*v14 + 12))(v14);
      v18 = 0;
      v19 = *v15;
      while ( *(_BYTE *)(v19 + v18) )
      {
        if ( !*(_BYTE *)(v19 + v18 + 1) )
        {
          ++v18;
          break;
        }
        if ( !*(_BYTE *)(v19 + v18 + 2) )
        {
          v18 += 2;
          break;
        }
        v20 = v18 + 2 < 0x80000;
        v18 += 3;
        if ( !v20 )
        {
          v18 = 0;
          break;
        }
      }
      if ( v18 >= v26 )
        v18 = v26 - 1;
      qmemcpy(v12, v16, v18);
      *((_BYTE *)v12 + v18) = 0;
    }
    v24 = &off_60BD4B8C;
    sub_601A02B0(dword_60C89E00, (_DWORD *)(a1 + 440), 0, 0, (int)&v24);
    v21 = FIELD_U32(a1, 488);
    if ( v21 == 2 )
    {
      v23 = (float *)(a1 + 460);
      v22 = 3000.0;
      FIELD_F32(a1, 448) = FIELD_F32(a1, 424) + -300.0;
    }
    else
    {
      if ( v21 != 1 )
      {
LABEL_41:
        FIELD_U32(a1, 444) = FIELD_U32(a1, 432);
LABEL_42:
        result = sub_608332B0(v5, a1 + 440);
        FIELD_U32(a1, 472) = result;
        return result;
      }
      v22 = -400.0;
      v23 = (float *)(a1 + 448);
      FIELD_F32(a1, 440) = FIELD_F32(a1, 440) + 100.0;
    }
    *v23 = v22 + *v23;
    goto LABEL_41;
  }
  result = FIELD_U32(a1, 488);
  if ( result >= 3 )
  {
    result = FIELD_U8(a1, 216);
    if ( (result & 8) != 0 )
    {
      if ( FIELD_S32(a1, 500) >= 0 )
      {
        sub_601E4F60(dword_60C8B13C);
        FIELD_U32(a1, 500) = -1;
      }
      FIELD_U8(a1, 19) = 1;
      return 1;
    }
  }
  return result;
}
