/* sub_601AFCB4
 * address: 0x601AFCB4   size: 912   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601AFCB4(int a1)
{
  int v2; // r2
  const char *v3; // r1
  float v4; // s0
  float v5; // s2
  const char *v6; // r2
  int v7; // r0
  int v8; // lr
  int v9; // r1
  int v10; // r3
  _DWORD *v11; // r12
  int v12; // r0
  unsigned int v13; // r1
  _DWORD *v14; // r2
  int v15; // r2
  int v16; // r3
  _DWORD *v17; // r1
  int v18; // r0
  int *v19; // r1
  int (**a5)(); // [sp+4h] [bp-24h] BYREF
  const char *v22; // [sp+8h] [bp-20h]
  int v23; // [sp+Ch] [bp-1Ch]

  sub_601B0098();
  FIELD_U32(a1, 248) = FIELD_U32(a1, 308);
  FIELD_U32(a1, 488) = FIELD_U32(a1, 80);
  FIELD_U32(a1, 492) = FIELD_U32(a1, 84);
  FIELD_U32(a1, 496) = FIELD_U32(a1, 88);
  v2 = FIELD_U32(a1, 352);
  switch ( v2 )
  {
    case 2:
      FIELD_U32(a1, 552) = 3;
      a5 = &sead__SafeStringBase__vtable;
      v22 = "PEN005";
      sub_601A02B0(dword_60C89E00, (_DWORD *)(a1 + 500), 3, 0, (int)&a5);
      v4 = FIELD_F32(a1, 508);
      v5 = -20.0;
      v3 = "PEN007";
LABEL_7:
      FIELD_F32(a1, 508) = v4 + v5;
      goto LABEL_8;
    case 1:
      FIELD_U32(a1, 552) = 3;
      a5 = &sead__SafeStringBase__vtable;
      v22 = "PEN002";
      sub_601A02B0(dword_60C89E00, (_DWORD *)(a1 + 500), 3, 0, (int)&a5);
      v4 = FIELD_F32(a1, 508);
      v5 = -20.0;
      v3 = "PEN004";
      goto LABEL_7;
    case 0:
      FIELD_U32(a1, 552) = 0;
      a5 = &sead__SafeStringBase__vtable;
      v22 = "PEN001";
      sub_601A02B0(dword_60C89E00, (_DWORD *)(a1 + 500), 3, 0, (int)&a5);
      v3 = "PEN000";
      FIELD_F32(a1, 500) = FIELD_F32(a1, 500) + -20.0;
LABEL_8:
      a5 = &sead__SafeStringBase__vtable;
      v22 = v3;
      sub_601A02B0(dword_60C89E00, (_DWORD *)(a1 + 512), 3, 0, (int)&a5);
      goto LABEL_13;
  }
  FIELD_U32(a1, 552) = 3;
  a5 = &sead__SafeStringBase__vtable;
  if ( v2 == 3 )
    v6 = "PEN009";
  else
    v6 = "PEN008";
  v22 = v6;
  sub_601A02B0(dword_60C89E00, (_DWORD *)(a1 + 500), 3, 0, (int)&a5);
  FIELD_F32(a1, 508) = FIELD_F32(a1, 508) + -20.0;
LABEL_13:
  v7 = sub_608336A8(FIELD_U32(a1, 552));
  FIELD_U32(a1, 180) = v7;
  FIELD_U32(a1, 192) = v7;
  FIELD_U32(a1, 200) = 0;
  FIELD_U32(a1, 204) = 0;
  if ( FIELD_U32(a1, 580) )
  {
    if ( FIELD_U32(a1, 352) == 3 )
    {
      v8 = dword_60C8A8C0;
      v9 = FIELD_U32(dword_60C8A8C0, 176);
      if ( v9 < 0 )
      {
        v12 = a1 + 536;
        v11 = (_DWORD *)(dword_60C8A8C0 + 44);
      }
      else
      {
        v10 = v9 + 1;
        v11 = (_DWORD *)(dword_60C8A8C0 + 44);
        v12 = a1 + 536;
        v13 = 0;
        do
        {
          v14 = 0;
          if ( FIELD_U32(v8, 36) > v13 )
            v14 = *(_DWORD **)(*v11 + 4 * v13);
          if ( v14[24] == FIELD_U32(a1, 248) )
          {
            FIELD_U32(a1, 588) = v13;
            FIELD_U32(a1, 536) = v14[18];
            FIELD_U32(a1, 540) = v14[19];
            FIELD_U32(a1, 544) = v14[20];
          }
          ++v13;
        }
        while ( v10 != v13 );
        v9 = FIELD_U32(v8, 176);
      }
      v15 = FIELD_U32(a1, 588);
      v16 = 0;
      if ( v15 < v9 )
        v16 = v15 + 1;
      v17 = *(_DWORD **)(*v11 + 4 * v16);
      a5 = (int (**)())v17[18];
      v22 = (const char *)v17[19];
      v23 = v17[20];
      v18 = sub_608332B0(v12, &a5);
      FIELD_U32(a1, 548) = v18;
      FIELD_U32(a1, 192) = v18;
      FIELD_U32(a1, 180) = v18;
    }
  }
  else
  {
    FIELD_U32(a1, 80) = FIELD_U32(a1, 500);
    FIELD_U32(a1, 84) = FIELD_U32(a1, 504);
    FIELD_U32(a1, 88) = FIELD_U32(a1, 508);
  }
  FIELD_U32(a1, 212) = 1135542272;
  sub_6017793C((_DWORD *)(a1 + 324), a1, &dword_60C8A8AC);
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 148))(a1);
  if ( FIELD_U32(a1, 580) )
    v19 = &dword_60C8A72C;
  else
    v19 = &dword_60C8A6CC;
  StateMgr__changeState((StateMgr *)(a1 + 284), (StateBase *)v19);
  return 1;
}
