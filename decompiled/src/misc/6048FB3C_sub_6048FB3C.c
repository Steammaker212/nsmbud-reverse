/* sub_6048FB3C
 * address: 0x6048FB3C   size: 452   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6048FB3C(int a1)
{
  int v2; // r1
  int result; // r0
  unsigned int v4; // r0
  unsigned int *v5; // r5
  int v6; // r0
  int v7; // r2
  unsigned int v8; // r2
  _DWORD *v9; // r1
  unsigned int v10; // r0
  unsigned int v11; // r0
  unsigned int v12; // r2
  unsigned int v13; // r3
  unsigned int v14; // r1
  int v15; // r5
  int v16; // r3
  unsigned int v17; // r2

  v2 = FIELD_U32(a1, 13836) | FIELD_U32(a1, 13828);
  result = 0;
  if ( (v2 & 0x10) != 0 )
  {
    v5 = (unsigned int *)(a1 + 14228);
    v4 = FIELD_U32(a1, 14228);
    if ( v4 >= 4 )
      v4 = 0;
    v6 = *(_DWORD *)(a1 + 4 * v4 + 47800);
    FIELD_U8(v6, 64) = 0;
    FIELD_U8(v6, 65) = 0;
    v7 = FIELD_U32(v6, 52);
    FIELD_U32(v6, 52) = v7 - 1;
    if ( v7 <= 0 )
    {
      FIELD_U32(v6, 52) = 0;
      FIELD_U8(v6, 65) = 1;
    }
    else if ( v7 <= FIELD_U32(v6, 48) )
    {
      StateMgr__changeState((StateMgr *)(v6 + 20), (StateBase *)&unk_60C9F7C0);
    }
    v8 = *v5;
    v9 = (_DWORD *)(a1 + 47764);
    v10 = 0;
    if ( *v5 >= 4 )
      v8 = 0;
    if ( *(_BYTE *)(*(_DWORD *)(a1 + 4 * v8 + 47800) + 65) )
    {
      result = 1;
      if ( *v9 != 16 )
        *v9 = 16;
    }
    else
    {
      *v9 = -1;
      if ( *v5 < 4 )
        v10 = *v5;
      if ( *(_BYTE *)(*(_DWORD *)(a1 + 4 * v10 + 47800) + 64) )
      {
        sub_60502548(a1 + 3768);
        StateMgr__changeState((StateMgr *)(a1 + 20), (StateBase *)&unk_60C9F5C0);
      }
      else
      {
        v11 = *v5;
        v12 = *v5;
        v13 = *v5;
        v14 = 0;
        if ( *v5 >= 4 )
          v13 = 0;
        v16 = *(_DWORD *)(*(_DWORD *)(a1 + 4 * v13 + 47800) + 52) - *(_DWORD *)(*(_DWORD *)(a1 + 4 * v13 + 47800) + 44);
        v15 = v16;
        if ( v16 >= 5 )
          v16 = 5;
        if ( v15 < 0 )
          v16 = 0;
        if ( (unsigned int)v16 >= 6 )
          v16 = 0;
        if ( v12 >= 4 )
          v12 = 0;
        v17 = dword_60C9FF70[6 * v12 + v16];
        if ( v17 >= 0x18 )
          v17 = 0;
        if ( v11 < 4 )
          v14 = v11;
        FIELD_U32(a1, 4796) = *(_DWORD *)(a1 + 96 * v14 + 4 * v17 + 5876);
      }
      return 1;
    }
  }
  return result;
}
