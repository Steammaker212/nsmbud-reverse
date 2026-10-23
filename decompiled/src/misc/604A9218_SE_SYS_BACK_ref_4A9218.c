/* SE_SYS_BACK_ref_4A9218
 * address: 0x604A9218   size: 1052   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_SYS_BACK_ref_4A9218(int a1)
{
  int result; // r0
  int v3; // r2
  unsigned int v4; // r6
  char v5; // r1
  unsigned int v6; // r7
  int v7; // r7
  StateBase *v8; // r1
  int v9; // r2
  unsigned int v10; // r6
  char v11; // r1
  unsigned int v12; // r7
  int v13; // r7
  int v14; // r6
  int v15; // r0
  int v16; // r1
  int i; // r3
  unsigned int v18; // r2
  unsigned int v19; // r7
  int v20; // r6
  int v21; // r0
  int v22; // r1
  int j; // r3
  unsigned int v24; // r2
  unsigned int v25; // r7

  SE_SYS_MII_CAP_O_ref();
  result = FIELD_U8(a1, 86998);
  if ( FIELD_U8(a1, 86998) )
    return result;
  result = FIELD_U8(a1, 87002);
  if ( FIELD_U8(a1, 87002) )
    return result;
  if ( FIELD_U8(a1, 86999) )
    goto LABEL_7;
  if ( sub_6047F384(a1 + 277668, 0x2000) )
  {
    sub_60502694(a1 + 85956);
LABEL_7:
    result = FIELD_U32(a1, 86984);
    switch ( result )
    {
      case 0:
      case 2:
        v3 = FIELD_U32(a1, 279736);
        if ( v3 < 1 )
          goto LABEL_43;
        v4 = 0;
        v5 = 0;
        break;
      case 1:
      case 3:
        FIELD_U8(a1, 56) = 1;
        v8 = (StateBase *)&unk_60CA1610;
        return (int)StateMgr__changeState((StateMgr *)(a1 + 40), v8);
      default:
        return result;
    }
    do
    {
      v6 = 0;
      if ( v4 < 6 )
        v6 = v4;
      v7 = *(_DWORD *)(dword_60C99DEC + 72 * v6 + 48);
      if ( v7 == 2 )
        break;
      if ( v7 == 3 )
      {
        v5 = 1;
        break;
      }
      ++v4;
    }
    while ( (int)v4 < v3 );
    v18 = 0;
    do
    {
      v19 = 0;
      if ( v18 < 4 )
        v19 = v18;
      ++v18;
      *(_BYTE *)(a1 + 20556 * v19 + 24284) = v5;
    }
    while ( (signed int)v18 < FIELD_U32(a1, 279736) );
LABEL_43:
    FIELD_U8(a1, 56) = 1;
    v8 = (StateBase *)&unk_60CA15F0;
    return (int)StateMgr__changeState((StateMgr *)(a1 + 40), v8);
  }
  if ( sub_6047F384(a1 + 277668, 0x4000) )
  {
    v9 = FIELD_U32(a1, 279736);
    if ( v9 >= 1 )
    {
      v10 = 0;
      v11 = 0;
      do
      {
        v12 = 0;
        if ( v10 < 6 )
          v12 = v10;
        v13 = *(_DWORD *)(dword_60C99DEC + 72 * v12 + 48);
        if ( v13 == 2 )
          break;
        if ( v13 == 3 )
        {
          v11 = 1;
          break;
        }
        ++v10;
      }
      while ( (int)v10 < v9 );
      v24 = 0;
      do
      {
        v25 = 0;
        if ( v24 < 4 )
          v25 = v24;
        ++v24;
        *(_BYTE *)(a1 + 20556 * v25 + 24284) = v11;
      }
      while ( (signed int)v24 < FIELD_U32(a1, 279736) );
    }
    sub_60478680((int)"SE_SYS_BACK", 15);
    sub_60502548(a1 + 85956);
    FIELD_U16(a1, 87008) = 0;
    sub_6047EABC((_DWORD *)(a1 + 85996));
    FIELD_U8(a1, 56) = 1;
    v8 = (StateBase *)&unk_60CA15F0;
    return (int)StateMgr__changeState((StateMgr *)(a1 + 40), v8);
  }
  if ( sub_6047F384(a1 + 277668, 64) )
  {
    v14 = dword_60CA17A4;
    v15 = sub_6047482C(a1 + 64, 6u);
    if ( v15 )
    {
      v16 = FIELD_U32(v15, 56);
      if ( v14 == v16 )
      {
LABEL_36:
        if ( (int)FIELD_F32(v15, 16) )
        {
          FIELD_U32(a1, 86984) = 2;
          return 86984;
        }
      }
      else
      {
        for ( i = 1; *(unsigned __int8 *)(v14 + i - 1) == *(unsigned __int8 *)(v16 + i - 1); i += 2 )
        {
          if ( !*(_BYTE *)(v14 + i - 1) )
            goto LABEL_36;
          if ( i >= 524289 || *(unsigned __int8 *)(v14 + i) != *(unsigned __int8 *)(v16 + i) )
            break;
          if ( !*(_BYTE *)(v14 + i) )
            goto LABEL_36;
        }
      }
    }
    FIELD_U32(a1, 86984) = 0;
    return 86984;
  }
  else
  {
    result = sub_6047F384(a1 + 277668, 128);
    if ( result != 1 )
      return result;
    v20 = dword_60CA17A4;
    v21 = sub_6047482C(a1 + 64, 6u);
    if ( v21 )
    {
      v22 = FIELD_U32(v21, 56);
      if ( v20 == v22 )
      {
LABEL_54:
        if ( (int)FIELD_F32(v21, 16) )
        {
          FIELD_U32(a1, 86984) = 3;
          return 86984;
        }
      }
      else
      {
        for ( j = 1; *(unsigned __int8 *)(v20 + j - 1) == *(unsigned __int8 *)(v22 + j - 1); j += 2 )
        {
          if ( !*(_BYTE *)(v20 + j - 1) )
            goto LABEL_54;
          if ( j >= 524289 || *(unsigned __int8 *)(v20 + j) != *(unsigned __int8 *)(v22 + j) )
            break;
          if ( !*(_BYTE *)(v20 + j) )
            goto LABEL_54;
        }
      }
    }
    FIELD_U32(a1, 86984) = 1;
    return 86984;
  }
}
