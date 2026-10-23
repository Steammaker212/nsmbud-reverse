/* sub_6052BC7C
 * address: 0x6052BC7C   size: 572   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_6052BC7C(int a1, int a2, int a3, int *a4, _DWORD *a5)
{
  int v5; // r7
  int v6; // r6
  int v7; // r5
  unsigned int v8; // r7
  unsigned int v9; // r6
  int v10; // r7
  int v11; // r6
  int v12; // r5
  unsigned int v13; // lr
  unsigned int v14; // r2
  unsigned int v15; // r6
  int v16; // r2
  int v17; // r7
  int v18; // r6
  int v19; // r5
  unsigned int i; // r1
  unsigned int v21; // r7
  int v22; // r7
  unsigned int v23; // r6
  unsigned int v24; // r2

  FIELD_U32(a1, 3084) = a2;
  FIELD_U32(a1, 3088) = a3;
  v5 = *a4;
  v6 = a4[1];
  v7 = a4[2];
  FIELD_U32(a1, 3104) = a4[3];
  FIELD_U32(a1, 3100) = v7;
  FIELD_U32(a1, 3096) = v6;
  FIELD_U32(a1, 3092) = v5;
  FIELD_U8(a1, 3229) = 1;
  if ( a3 >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      v9 = 0;
      if ( v8 < 4 )
        v9 = v8;
      if ( *(_DWORD *)(a1 + 4 * v9 + 3092) )
        break;
      if ( (int)++v8 >= a3 )
        goto LABEL_9;
    }
    FIELD_U8(a1, 3229) = 0;
  }
LABEL_9:
  FIELD_U32(a1, 3124) = 0;
  FIELD_U32(a1, 3128) = 0;
  FIELD_U32(a1, 3132) = 0;
  FIELD_U32(a1, 3136) = 0;
  if ( a2 == 1 )
  {
    v10 = *a4;
    v11 = a4[1];
    v12 = a4[2];
    FIELD_U32(a1, 3120) = a4[3];
    FIELD_U32(a1, 3116) = v12;
    FIELD_U32(a1, 3112) = v11;
    FIELD_U32(a1, 3108) = v10;
    FIELD_U32(a1, 3140) = 1092616192;
    FIELD_U32(a1, 3144) = 1092616192;
    FIELD_U32(a1, 3148) = 1092616192;
    FIELD_U32(a1, 3152) = 1092616192;
  }
  else if ( a3 >= 1 )
  {
    v13 = 0;
    do
    {
      v14 = 0;
      if ( v13 < 4 )
        v14 = v13;
      v15 = a4[v14];
      if ( v15 >= 0xA )
      {
        if ( v15 > 0x31 )
        {
          if ( v15 > 0x63 )
            v15 /= 3u;
          else
            v15 = (23 * v15 - 230) / 0x5A + 10;
        }
        else
        {
          v15 = (15 * v15 - 150) / 0x28 + 10;
        }
      }
      v16 = a1 + 4 * v14;
      ++v13;
      FIELD_U32(v16, 3108) = v15;
      FIELD_F32(v16, 3140) = (float)FIELD_U32(v16, 3092) / (float)v15;
      a3 = FIELD_U32(a1, 3088);
    }
    while ( (int)v13 < a3 );
  }
  v17 = a5[1];
  v18 = a5[2];
  v19 = a5[3];
  FIELD_U32(a1, 3156) = *a5;
  FIELD_U32(a1, 3160) = v17;
  FIELD_U32(a1, 3164) = v18;
  FIELD_U32(a1, 3168) = v19;
  FIELD_U32(a1, 3172) = 0;
  FIELD_U32(a1, 3176) = 0;
  FIELD_U32(a1, 3180) = 0;
  FIELD_U32(a1, 3184) = 0;
  if ( !a2 && a3 >= 1 )
  {
    for ( i = 0; (int)i < a3; ++i )
    {
      v21 = 0;
      if ( i < 4 )
        v21 = i;
      v22 = a1 + 4 * v21;
      v23 = FIELD_U32(v22, 3108);
      if ( v23 )
      {
        v24 = 2;
        if ( v23 <= 0xB4 )
          v24 = 0xB4 / v23;
        FIELD_U32(v22, 3188) = v24;
        a3 = FIELD_U32(a1, 3088);
      }
    }
  }
  FIELD_U8(a1, 56) = 1;
  return StateMgr__changeState((StateMgr *)(a1 + 40), (StateBase *)&dword_60CAA474);
}
