/* sub_6048FD0C
 * address: 0x6048FD0C   size: 464   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6048FD0C(int a1)
{
  int v2; // r1
  int result; // r0
  unsigned int v4; // r0
  unsigned int *v5; // r5
  int v6; // r0
  int v7; // r1
  int v8; // r2
  unsigned int v9; // r2
  _DWORD *v10; // r1
  unsigned int v11; // r0
  unsigned int v12; // r0
  unsigned int v13; // r2
  unsigned int v14; // r3
  unsigned int v15; // r1
  int v16; // r5
  int v17; // r3
  unsigned int v18; // r2

  v2 = FIELD_U32(a1, 13836) | FIELD_U32(a1, 13828);
  result = 0;
  if ( (v2 & 0x20) != 0 )
  {
    v5 = (unsigned int *)(a1 + 14228);
    v4 = FIELD_U32(a1, 14228);
    if ( v4 >= 4 )
      v4 = 0;
    v6 = *(_DWORD *)(a1 + 4 * v4 + 47800);
    FIELD_U8(v6, 64) = 0;
    FIELD_U8(v6, 65) = 0;
    v7 = FIELD_U32(v6, 52);
    FIELD_U32(v6, 52) = v7 + 1;
    v8 = FIELD_U32(v6, 56);
    if ( v7 + 1 >= v8 )
    {
      FIELD_U32(v6, 52) = v8 - 1;
      FIELD_U8(v6, 65) = 1;
    }
    else if ( v7 >= FIELD_U32(v6, 48) + 3 )
    {
      StateMgr__changeState((StateMgr *)(v6 + 20), (StateBase *)&unk_60C9F7A0);
    }
    v9 = *v5;
    v10 = (_DWORD *)(a1 + 47764);
    v11 = 0;
    if ( *v5 >= 4 )
      v9 = 0;
    if ( *(_BYTE *)(*(_DWORD *)(a1 + 4 * v9 + 47800) + 65) )
    {
      result = 1;
      if ( *v10 != 32 )
        *v10 = 32;
    }
    else
    {
      *v10 = -1;
      if ( *v5 < 4 )
        v11 = *v5;
      if ( *(_BYTE *)(*(_DWORD *)(a1 + 4 * v11 + 47800) + 64) )
      {
        sub_60502548(a1 + 3768);
        StateMgr__changeState((StateMgr *)(a1 + 20), (StateBase *)&unk_60C9F5C0);
      }
      else
      {
        v12 = *v5;
        v13 = *v5;
        v14 = *v5;
        v15 = 0;
        if ( *v5 >= 4 )
          v14 = 0;
        v17 = *(_DWORD *)(*(_DWORD *)(a1 + 4 * v14 + 47800) + 52) - *(_DWORD *)(*(_DWORD *)(a1 + 4 * v14 + 47800) + 44);
        v16 = v17;
        if ( v17 >= 5 )
          v17 = 5;
        if ( v16 < 0 )
          v17 = 0;
        if ( (unsigned int)v17 >= 6 )
          v17 = 0;
        if ( v13 >= 4 )
          v13 = 0;
        v18 = dword_60C9FF70[6 * v13 + v17];
        if ( v18 >= 0x18 )
          v18 = 0;
        if ( v12 < 4 )
          v15 = v12;
        FIELD_U32(a1, 4796) = *(_DWORD *)(a1 + 96 * v15 + 4 * v18 + 5876);
      }
      return 1;
    }
  }
  return result;
}
