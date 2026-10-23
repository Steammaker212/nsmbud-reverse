/* sub_6049D444
 * address: 0x6049D444   size: 344   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_6049D444(int a1)
{
  StateMethodExecuter *result; // r0
  int v3; // r0
  int *v4; // r1
  int v5; // r1
  int v6; // r0
  unsigned int v7; // r9
  char *v8; // r5
  unsigned int v9; // r1
  int v10; // r0
  _DWORD *v11; // r1
  int v12; // r2
  int v13; // r3
  int v14; // r1
  int v15; // r0
  unsigned int v16; // r1
  _DWORD *v17; // r1
  _DWORD v18[3]; // [sp+4h] [bp-3Ch] BYREF
  _DWORD v19[12]; // [sp+10h] [bp-30h] BYREF

  result = (StateMethodExecuter *)FIELD_U8(a1, 22501);
  if ( !result )
  {
    v3 = FIELD_U32(a1, 22480);
    if ( v3 == 1 )
    {
      v4 = &dword_60CA0C8C;
      return StateMgr__changeState((StateMgr *)(a1 + 24), (StateBase *)v4);
    }
    if ( !v3 )
    {
      v4 = &dword_60CA0CAC;
      return StateMgr__changeState((StateMgr *)(a1 + 24), (StateBase *)v4);
    }
    v5 = FIELD_U32(a1, 22496);
    v6 = v5 - 2;
    if ( v5 - 2 > 2 )
      v6 = 0;
    if ( v5 < 2 )
      v6 = 0;
    if ( v5 >= 1 && v6 != 12 )
    {
      v7 = 0;
      v8 = (char *)&unk_60B02C18 + 16 * v6;
      do
      {
        v9 = *(_DWORD *)&v8[4 * v7];
        v10 = FIELD_U32(a1, 3632);
        if ( v9 >= 0xC )
          v9 = 0;
        if ( v10 )
        {
          v11 = *(_DWORD **)(a1 + 4 * v9 + 20204);
          v12 = v11[23];
          v13 = v11[27];
          v14 = v11[31];
          v19[0] = v12;
          v19[1] = v13;
          v19[2] = v14;
          sub_6090A384(v10, v18, v19);
          v15 = v18[0];
        }
        else
        {
          v15 = 0;
          memset(v18, 0, sizeof(v18));
        }
        v16 = 0;
        if ( v7 < 7 )
          v16 = v7;
        ++v7;
        v17 = (_DWORD *)(a1 + 12 * v16);
        v17[5599] = v15;
        v17[5600] = 0;
        v17[5601] = 0;
      }
      while ( (signed int)v7 < FIELD_U32(a1, 22496) );
    }
    return StateMgr__changeState((StateMgr *)(a1 + 24), (StateBase *)&dword_60CA0EEC);
  }
  return result;
}
