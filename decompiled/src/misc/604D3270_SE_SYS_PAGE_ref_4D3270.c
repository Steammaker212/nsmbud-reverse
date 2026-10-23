/* SE_SYS_PAGE_ref_4D3270
 * address: 0x604D3270   size: 764   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_SYS_PAGE_ref_4D3270(int a1, int a2)
{
  int v4; // r0
  int v5; // r0
  int v6; // r1
  int v7; // r0
  int v8; // r3
  _DWORD *v9; // r1
  _DWORD *v11; // r4
  int v12; // t1
  int v13; // r0
  int v14; // r2
  int v15; // r0
  int v16; // r3
  unsigned int v17; // r0
  int v18; // r6
  int *v19; // r1
  unsigned int v20; // r0
  int v21; // r6

  v4 = FIELD_U32(a1, 20256) | FIELD_U32(a1, 20248);
  if ( (v4 & 0x100) != 0 )
  {
    if ( !FIELD_U8(a1, 615721) )
    {
      v13 = FIELD_U32(a1, 615688);
      v14 = FIELD_U32(a1, 615708);
      if ( v14 != 1 )
      {
        v15 = 1;
        if ( v14 == 2 )
          v15 = 2;
        v13 = *(_DWORD *)(a1 + 4 * v15 + 615688);
      }
      if ( v13 >= 1 )
      {
        while ( v13 >= 1 )
        {
          v16 = --v13;
          if ( (unsigned int)v13 >= 0xA )
            v16 = 0;
          if ( *(_BYTE *)(a1 + 52644 * v16 + 89292) )
          {
            FIELD_U32(a1, 615716) = -1;
            sub_60807EF0(SoundSystem_instance, "SE_SYS_PAGE", 0, 1);
            if ( a2 == 1 )
            {
              sub_60502548(a1 + 3800);
              FIELD_U16(a1, 4852) = 0;
              sub_6047EABC((_DWORD *)(a1 + 3840));
              v17 = FIELD_U32(a1, 615700);
              if ( v17 >= 0xA )
                v17 = 0;
              v18 = a1 + 52644 * v17;
              sub_60502548(v18 + 93148);
              FIELD_U16(v18, 94200) = 0;
              sub_6047EABC((_DWORD *)(v18 + 93188));
            }
            v19 = &dword_60CA3538;
            goto LABEL_32;
          }
        }
      }
    }
    v12 = FIELD_U32(a1, 615716);
    v11 = (_DWORD *)(a1 + 615716);
    if ( v12 != 64 )
      *v11 = 64;
    return 0;
  }
  if ( (v4 & 0x10000) == 0 )
    return 0;
  if ( FIELD_U8(a1, 615721) )
    goto LABEL_11;
  v5 = FIELD_U32(a1, 615696);
  v6 = FIELD_U32(a1, 615708);
  if ( v6 != 2 )
    v5 = *(_DWORD *)(a1 + 4 * (v6 != 1) + 615688);
  v7 = v5 + 1;
  if ( v7 > 9 )
  {
LABEL_11:
    v9 = (_DWORD *)(a1 + 615716);
    goto LABEL_12;
  }
  while ( 1 )
  {
    v8 = v7;
    if ( (unsigned int)v7 >= 0xA )
      v8 = 0;
    if ( *(_BYTE *)(a1 + 52644 * v8 + 89292) )
      break;
    if ( ++v7 >= 10 )
      goto LABEL_11;
  }
  v9 = (_DWORD *)(a1 + 615716);
  if ( v7 < 0 )
  {
LABEL_12:
    if ( *v9 != 128 )
    {
      *v9 = 128;
      return 0;
    }
    return 0;
  }
  *v9 = -1;
  sub_60807EF0(SoundSystem_instance, "SE_SYS_PAGE", 0, 1);
  if ( a2 == 1 )
  {
    sub_60502548(a1 + 3800);
    FIELD_U16(a1, 4852) = 0;
    sub_6047EABC((_DWORD *)(a1 + 3840));
    v20 = FIELD_U32(a1, 615700);
    if ( v20 >= 0xA )
      v20 = 0;
    v21 = a1 + 52644 * v20;
    sub_60502548(v21 + 93148);
    FIELD_U16(v21, 94200) = 0;
    sub_6047EABC((_DWORD *)(v21 + 93188));
  }
  v19 = &dword_60CA3598;
LABEL_32:
  StateMgr__changeState((StateMgr *)(a1 + 24), (StateBase *)v19);
  return 1;
}
