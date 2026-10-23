/* sub_6052F98C
 * address: 0x6052F98C   size: 620   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6052F98C(int a1)
{
  int v1; // r8
  int v3; // r7
  int v4; // r10
  int v5; // r9
  int v6; // r0
  int v7; // r0
  int v8; // r0
  int v9; // r0
  int v10; // r0
  _DWORD *v11; // r5
  int v12; // r1
  int v13; // r0
  int v14; // r0
  char v15; // r1
  _DWORD *v16; // r6
  int v17; // r7
  char v18; // r1
  int v19; // r0
  unsigned int i; // r5
  unsigned int v21; // r0
  _DWORD v23[13]; // [sp+4h] [bp-34h]

  v3 = 0;
  v4 = 0;
  v5 = dword_60C99DD4;
  v6 = FIELD_U32(dword_60C99DD4, 740);
  if ( v6 != 15 )
  {
    v4 = 1;
    v1 = dword_60B039AC[v6];
    v23[0] = v1;
    v7 = FIELD_U32(dword_60C99DD4, 744);
    if ( v7 != 15 )
    {
      v4 = 2;
      v23[1] = dword_60B039AC[v7];
      v8 = FIELD_U32(dword_60C99DD4, 748);
      if ( v8 != 15 )
      {
        v4 = 3;
        v23[2] = dword_60B039AC[v8];
        v9 = FIELD_U32(dword_60C99DD4, 752);
        if ( v9 != 15 )
        {
          v4 = 4;
          v23[3] = dword_60B039AC[v9];
          v10 = FIELD_U32(dword_60C99DD4, 756);
          if ( v10 != 15 )
          {
            v4 = 5;
            v23[4] = dword_60B039AC[v10];
          }
        }
      }
    }
  }
  do
  {
    v11 = *(_DWORD **)(a1 + 3628 + 4 * v3);
    v12 = *v11;
    v13 = *(_DWORD *)(*v11 + 12);
    if ( v13 )
    {
      sub_60858A34(v13);
      v12 = *v11;
    }
    ++v3;
    FIELD_U8(v12, 64) &= ~1u;
    *(_BYTE *)(v11[1] + 64) &= ~1u;
    *(_BYTE *)(v11[2] + 64) &= ~1u;
    *(_BYTE *)(v11[3] + 64) &= ~1u;
    *(_BYTE *)(v11[4] + 64) &= ~1u;
    *(_BYTE *)(v11[5] + 64) &= ~1u;
  }
  while ( v3 != 6 );
  v14 = FIELD_U32(a1, 3656);
  v15 = FIELD_U8(v14, 64);
  if ( FIELD_U32(v5, 760) )
  {
    v16 = (_DWORD *)(a1 + 40);
    FIELD_U8(v14, 64) = v15 | 1;
    v17 = FIELD_U32(v5, 760);
    sub_6047DEC8((_DWORD *)(a1 + 40), FIELD_U32(a1, 3664), 1, v17);
    sub_6047DEC8((_DWORD *)(a1 + 40), FIELD_U32(a1, 3668), 1, v17);
    sub_6052FC14(FIELD_U32(a1, 3648), v4 - 1, v1);
    v18 = 0;
    FIELD_U8(a1, 10978) = 0;
    v19 = 10979;
  }
  else
  {
    FIELD_U8(v14, 64) = v15 & 0xFE;
    if ( v4 )
    {
      sub_6052FC14(FIELD_U32(a1, 3628), v4 - 1, v1);
      if ( v4 != 1 )
      {
        for ( i = 1; i != v4; ++i )
        {
          v21 = i;
          if ( i >= 6 )
            v21 = 0;
          sub_6052FC14(*(_DWORD *)(a1 + 4 * v21 + 3628), v4 - 1, v23[i]);
        }
      }
    }
    v19 = 10978;
    v18 = 1;
    v16 = (_DWORD *)(a1 + 40);
  }
  *(_BYTE *)(a1 + v19) = v18;
  FIELD_U16(a1, 10976) = 257;
  FIELD_U8(a1, 10980) = 0;
  StateMgr__changeState((StateMgr *)(a1 + 24), (StateBase *)&dword_60CAA820);
  return sub_60473B58(v16, 0xEu, 0);
}
