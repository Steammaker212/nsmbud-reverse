/* sub_605105D8
 * address: 0x605105D8   size: 824   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605105D8(int a1)
{
  _DWORD *v2; // r6
  int result; // r0
  int *v4; // r5
  int v5; // r2
  unsigned int v6; // r3
  int v7; // r2
  int v8; // r5
  unsigned int v9; // r0
  int v10; // r8
  int v11; // r0
  int v12; // r1
  int i; // r3
  int v14; // r0
  int v15; // r0
  int v16; // r1

  FIELD_U32(a1, 9576) = 4;
  v2 = (_DWORD *)(a1 + 9576);
  if ( FIELD_U8(a1, 4746) )
  {
    *v2 = 0;
    return 0;
  }
  if ( FIELD_U8(a1, 4750) )
  {
    *v2 = 1;
    return 1;
  }
  if ( FIELD_U8(a1, 4747) && !FIELD_U8(a1, 4744) )
  {
    v6 = 0;
    v7 = a1 + 5788;
    v8 = FIELD_U32(a1, 4732);
    while ( 1 )
    {
      if ( v8 == *(_DWORD *)(a1 + 5784 + 4 * v6) )
      {
        v9 = v6;
LABEL_24:
        FIELD_U32(a1, 9556) = v9;
        if ( v9 > 0x1F )
          goto LABEL_29;
        goto LABEL_27;
      }
      v9 = v6 + 1;
      if ( (int)(v6 + 1) >= 35 )
        break;
      if ( v8 == *(_DWORD *)(v7 + 4 * v6) )
        goto LABEL_24;
      v6 += 2;
    }
    v9 = FIELD_U32(a1, 9556);
    if ( v9 > 0x1F )
      goto LABEL_29;
LABEL_27:
    if ( ((0xAA22226D >> v9) & 1) != 0 )
      FIELD_U32(a1, 11616) = dword_60B03790[v9];
LABEL_29:
    *v2 = 3;
    return (int)StateMgr__changeState((StateMgr *)(a1 + 36), (StateBase *)&dword_60CA82A0);
  }
  v4 = (int *)(a1 + 9580);
  if ( sub_6047F384(a1 + 9580, 0x4000) )
  {
    FIELD_U32(a1, 11616) = 1;
    *v2 = 2;
    return (int)StateMgr__changeState((StateMgr *)(a1 + 36), (StateBase *)&dword_60CA82A0);
  }
  result = a1 + 9560;
  if ( FIELD_S32(a1, 9560) >= 1 )
  {
    v5 = *v4;
    if ( (unsigned int)*v4 >= 5 )
      v5 = 0;
    if ( (*(_BYTE *)(a1 + 404 * v5 + 9856) & 0xF0) == 0 )
      *(_DWORD *)result = 0;
    return result;
  }
  if ( sub_6047F384(a1 + 9580, 0x2000) )
    return sub_60502694((int)(v2 - 1468));
  v10 = dword_60CA84C4;
  v11 = sub_6047482C(a1 + 56, 5u);
  if ( !v11 )
    goto LABEL_50;
  v12 = FIELD_U32(v11, 56);
  if ( v10 != v12 )
  {
    for ( i = 1; *(unsigned __int8 *)(v10 + i - 1) == *(unsigned __int8 *)(v12 + i - 1); i += 2 )
    {
      if ( !*(_BYTE *)(v10 + i - 1) )
        goto LABEL_40;
      if ( i > 0x80000 || *(unsigned __int8 *)(v10 + i) != *(unsigned __int8 *)(v12 + i) )
        break;
      if ( !*(_BYTE *)(v10 + i) )
        goto LABEL_40;
    }
    goto LABEL_50;
  }
LABEL_40:
  v14 = (int)FIELD_F32(v11, 16);
  if ( (unsigned int)(v14 - 2) < 2 )
  {
LABEL_43:
    v15 = FIELD_U32(a1, 4732);
    if ( v15 == 256 )
      goto LABEL_50;
    v16 = 5916;
    goto LABEL_47;
  }
  if ( v14 != 1 )
  {
    if ( v14 )
      goto LABEL_50;
    goto LABEL_43;
  }
  v15 = FIELD_U32(a1, 4732);
  if ( v15 == 256 )
    goto LABEL_50;
  v16 = 5920;
LABEL_47:
  if ( v15 == *(_DWORD *)(a1 + v16) )
  {
    result = sub_6047F384(a1 + 9580, 64);
    if ( result == 1 )
      return sub_605128A4(a1);
    return result;
  }
LABEL_50:
  if ( sub_6047F384(a1 + 9580, 128) )
    return sub_605129F4(a1);
  if ( sub_6047F384(a1 + 9580, 32) )
    return sub_6051256C(a1);
  result = sub_6047F384(a1 + 9580, 16);
  if ( result == 1 )
    return sub_60512B24(a1);
  return result;
}
