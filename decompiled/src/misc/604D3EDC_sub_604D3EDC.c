/* sub_604D3EDC
 * address: 0x604D3EDC   size: 856   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604D3EDC(int a1)
{
  int v2; // r5
  int *v4; // r1
  int v5; // r0
  int v6; // r1
  int v7; // r1
  _DWORD *v8; // r4
  int v9; // t1
  int v10; // r0
  int v11; // r1
  int v12; // r0
  int v13; // r3
  _DWORD *v14; // r1
  int v15; // r0
  int v16; // r2
  int v17; // r0
  int v18; // r3

  v2 = 1;
  if ( SE_SYS_PAGE_ref_4D3270(a1, 0) )
    return v2;
  if ( sub_6045C130(a1 + 20244) )
  {
    FIELD_U8(a1, 615720) = 0;
    v4 = &dword_60CA33D8;
LABEL_14:
    StateMgr__changeState((StateMgr *)(a1 + 24), (StateBase *)v4);
    return 1;
  }
  v5 = FIELD_U32(a1, 20248);
  if ( (v5 & 0x20) != 0 )
    goto LABEL_13;
  v6 = FIELD_U32(a1, 20256) | v5;
  if ( (v6 & 0x40) == 0 )
  {
    if ( (v6 & 0x80) != 0 )
    {
      if ( FIELD_U8(a1, 615721) )
        goto LABEL_26;
      v10 = FIELD_U32(a1, 615696);
      v11 = FIELD_U32(a1, 615708);
      if ( v11 != 2 )
        v10 = *(_DWORD *)(a1 + 4 * (v11 != 1) + 615688);
      v12 = v10 + 1;
      if ( v12 > 9 )
      {
LABEL_26:
        v14 = (_DWORD *)(a1 + 615716);
      }
      else
      {
        while ( 1 )
        {
          v13 = v12;
          if ( (unsigned int)v12 >= 0xA )
            v13 = 0;
          if ( *(_BYTE *)(a1 + 52644 * v13 + 89292) )
            break;
          if ( ++v12 >= 10 )
            goto LABEL_26;
        }
        v14 = (_DWORD *)(a1 + 615716);
        if ( v12 >= 0 )
        {
          *v14 = -1;
          sub_60807EF0(SoundSystem_instance, "SE_SYS_PAGE", 0, 1);
          v4 = &dword_60CA3598;
          goto LABEL_14;
        }
      }
      v2 = 0;
      if ( *v14 != 128 )
      {
        *v14 = 128;
        return 0;
      }
      return v2;
    }
    if ( (v5 & 0x2000) == 0 )
    {
      v7 = FIELD_U32(a1, 615716);
      if ( v7 == 128 )
      {
        v2 = 0;
        if ( (FIELD_U8(a1, 20516) & 0x80) == 0 )
        {
LABEL_41:
          FIELD_U32(a1, 615716) = -1;
          return 0;
        }
      }
      else
      {
        if ( v7 != 64 )
          goto LABEL_41;
        v2 = 0;
        if ( (FIELD_U8(a1, 20516) & 0x40) == 0 )
          goto LABEL_41;
      }
      return v2;
    }
LABEL_13:
    sub_60807EF0(SoundSystem_instance, "SE_SYS_CURSOR", 0, 1);
    v4 = &dword_60CA3258;
    goto LABEL_14;
  }
  if ( !FIELD_U8(a1, 615721) )
  {
    v15 = FIELD_U32(a1, 615688);
    v16 = FIELD_U32(a1, 615708);
    if ( v16 != 1 )
    {
      v17 = 1;
      if ( v16 == 2 )
        v17 = 2;
      v15 = *(_DWORD *)(a1 + 4 * v17 + 615688);
    }
    if ( v15 >= 1 )
    {
      while ( v15 >= 1 )
      {
        v18 = --v15;
        if ( (unsigned int)v15 >= 0xA )
          v18 = 0;
        if ( *(_BYTE *)(a1 + 52644 * v18 + 89292) )
        {
          FIELD_U32(a1, 615716) = -1;
          sub_60807EF0(SoundSystem_instance, "SE_SYS_PAGE", 0, 1);
          v4 = &dword_60CA3538;
          goto LABEL_14;
        }
      }
    }
  }
  v2 = 0;
  v9 = FIELD_U32(a1, 615716);
  v8 = (_DWORD *)(a1 + 615716);
  if ( v9 == 64 )
    return v2;
  *v8 = 64;
  return 0;
}
