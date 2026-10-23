/* PEN008_ref
 * address: 0x6020D878   size: 932   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall PEN008_ref(int a1)
{
  int v2; // r0
  int v3; // r1
  int v4; // r2
  int v5; // r2
  _DWORD *v6; // r12
  int v7; // r8
  unsigned int v8; // r3
  _DWORD *v9; // r7
  int v10; // r0
  int v11; // r1
  _DWORD *v12; // r0
  int v13; // r0
  int v14; // r11
  int v15; // r9
  int v16; // r0
  float v17; // s2
  float v18; // s6
  int v19; // r0
  int v20; // r1
  int v21; // r2
  _DWORD *v22; // r0
  StateMgr *v23; // r0
  StateBase *v24; // r1
  signed int v26; // [sp+8h] [bp-58h] BYREF
  signed int v27; // [sp+Ch] [bp-54h] BYREF
  int (**a5)(); // [sp+10h] [bp-50h] BYREF
  const char *v29; // [sp+14h] [bp-4Ch]
  int v30; // [sp+18h] [bp-48h]
  _DWORD v31[2]; // [sp+1Ch] [bp-44h] BYREF
  float v32; // [sp+24h] [bp-3Ch]

  FIELD_U8(a1, 454) = FIELD_U32(a1, 20) & 1;
  FIELD_U8(a1, 368) = 5;
  sub_6020DC50(a1, 5);
  FIELD_U32(a1, 248) = FIELD_U32(a1, 308);
  FIELD_U32(a1, 380) = FIELD_U32(a1, 80);
  FIELD_U32(a1, 384) = FIELD_U32(a1, 84);
  FIELD_U32(a1, 388) = FIELD_U32(a1, 88);
  FIELD_U32(a1, 436) = 3;
  a5 = &sead__SafeStringBase__vtable;
  v29 = "PEN008";
  sub_601A02B0(dword_60C89E00, v31, 3, 0, (int)&a5);
  v32 = v32 + -20.0;
  v2 = sub_608336A8(FIELD_U32(a1, 436));
  FIELD_U32(a1, 180) = v2;
  FIELD_U32(a1, 192) = v2;
  FIELD_U32(a1, 200) = 0;
  FIELD_U32(a1, 204) = 0;
  if ( FIELD_U8(a1, 454) )
  {
    v3 = dword_60C8A8C0;
    v4 = FIELD_U32(dword_60C8A8C0, 176);
    if ( v4 < 0 )
    {
      v7 = a1 + 392;
      v6 = (_DWORD *)(dword_60C8A8C0 + 44);
    }
    else
    {
      v5 = v4 + 1;
      v6 = (_DWORD *)(dword_60C8A8C0 + 44);
      v7 = a1 + 392;
      v8 = 0;
      do
      {
        v9 = 0;
        if ( FIELD_U32(v3, 36) > v8 )
          v9 = *(_DWORD **)(*v6 + 4 * v8);
        if ( v9[24] == FIELD_U32(a1, 248) )
        {
          FIELD_U32(a1, 444) = v8;
          FIELD_U32(a1, 392) = v9[18];
          FIELD_U32(a1, 396) = v9[19];
          FIELD_U32(a1, 400) = v9[20];
        }
        ++v8;
      }
      while ( v5 != v8 );
      v4 = FIELD_U32(v3, 176);
    }
    v10 = FIELD_U32(a1, 444);
    v11 = 0;
    if ( v10 < v4 )
      v11 = v10 + 1;
    v12 = *(_DWORD **)(*v6 + 4 * v11);
    a5 = (int (**)())v12[18];
    v29 = (const char *)v12[19];
    v30 = v12[20];
    v13 = sub_608332B0(v7, &a5);
    FIELD_U32(a1, 428) = v13;
    FIELD_U32(a1, 192) = v13;
    v14 = 17;
    v15 = 0;
    v16 = FIELD_U32(dword_60CC6D78, 32);
    FIELD_U32(a1, 200) = 1092616192;
    if ( v16 == 2 )
      v14 = 34;
    do
    {
      ((void (__fastcall *)(int))loc_60168DF8)(a1);
      v17 = FIELD_F32(a1, 84) - FIELD_F32(a1, 396);
      v18 = FIELD_F32(a1, 80) - FIELD_F32(a1, 392);
      if ( sqrtf(
             (float)((float)(v17 * v17) + (float)(v18 * v18))
           + (float)((float)(FIELD_F32(a1, 88) - FIELD_F32(a1, 400))
                   * (float)(FIELD_F32(a1, 88) - FIELD_F32(a1, 400)))) < 50.0 )
      {
        v19 = FIELD_U32(a1, 444);
        v20 = dword_60C8A8C0;
        FIELD_U32(a1, 248) = *(_DWORD *)(*(_DWORD *)(FIELD_U32(dword_60C8A8C0, 44) + 4 * v19) + 96);
        v21 = v19 + 1;
        FIELD_U32(a1, 444) = v19 + 1;
        if ( v19 >= FIELD_U32(v20, 176) )
          v21 = 0;
        FIELD_U32(a1, 444) = v21;
        v22 = *(_DWORD **)(FIELD_U32(v20, 44) + 4 * v21);
        FIELD_U32(a1, 392) = v22[18];
        FIELD_U32(a1, 396) = v22[19];
        FIELD_U32(a1, 400) = v22[20];
      }
      FIELD_U32(a1, 428) = sub_608332B0(a1 + 80, v7);
      v27 = 59652322;
      v26 = 47721857;
      sub_608322C0((int *)(a1 + 192), (int *)(a1 + 428), &v27, &v26);
      ++v15;
    }
    while ( v15 < v14 );
  }
  else
  {
    FIELD_U32(a1, 80) = v31[0];
    FIELD_U32(a1, 84) = v31[1];
    FIELD_F32(a1, 88) = v32;
  }
  FIELD_U32(a1, 212) = 1135542272;
  sub_6017793C((_DWORD *)(a1 + 324), a1, &dword_60C8CDA4);
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 148))(a1);
  if ( FIELD_U8(a1, 454) )
  {
    v23 = (StateMgr *)(a1 + 284);
    if ( FIELD_U32(dword_60CC6D78, 32) == 2 )
      v24 = (StateBase *)&unk_60C8CCCC;
    else
      v24 = (StateBase *)&unk_60C8CC8C;
  }
  else
  {
    v24 = (StateBase *)&dword_60C8CC4C;
    v23 = (StateMgr *)(a1 + 284);
  }
  StateMgr__changeState(v23, v24);
  return 1;
}
