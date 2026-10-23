/* sub_60374514
 * address: 0x60374514   size: 976   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60374514(int a1)
{
  _BOOL4 v2; // r7
  int v3; // r3
  int v4; // r1
  int v5; // r4
  int v6; // r1
  int result; // r0
  __int16 v8; // r8
  int v9; // r9
  int v10; // r7
  int v11; // r5
  StageActor *v12; // r6
  int ProfileId; // r0
  int v14; // r11
  unsigned __int16 v15; // r0
  int v16; // r0
  int v17; // r4
  _BOOL4 v18; // r6
  bool v19; // zf
  int v20; // r6
  int v21; // r4
  int v22; // r9
  Actor *v23; // r5
  int v24; // r0
  int v25; // r0
  _BYTE *v26; // r0
  int v27; // [sp+0h] [bp-40h]
  int v28; // [sp+4h] [bp-3Ch]
  int v29; // [sp+8h] [bp-38h]
  int v30; // [sp+14h] [bp-2Ch]
  int v31; // [sp+18h] [bp-28h]

  v2 = 0;
  v3 = 0;
  if ( (FIELD_U8(a1, 21) & 1) != 0 )
  {
    v3 = FIELD_U8(dword_60CC6D8C, 17);
    if ( FIELD_U8(dword_60CC6D8C, 17) )
      v3 = 1;
  }
  v4 = FIELD_U8(a1, 96);
  if ( FIELD_F32(a1, 80) <= FIELD_F32(dword_60CC6484, 48) && FIELD_F32(dword_60CC6484, 40) <= FIELD_F32(a1, 88) )
    v2 = FIELD_F32(a1, 84) <= FIELD_F32(dword_60CC6484, 52)
      && FIELD_F32(dword_60CC6484, 44) <= FIELD_F32(a1, 92);
  FIELD_U8(a1, 96) = v2;
  if ( FIELD_U32(a1, 40) )
  {
    v5 = FIELD_U32(a1, 36);
    v6 = a1 + 32;
    result = 1;
    if ( v5 != a1 + 32 )
    {
      v29 = a1;
      v8 = 2;
      v9 = 0;
      v10 = FIELD_U32(a1, 44);
      if ( v3 )
        v8 = 6;
      v27 = a1 + 32;
      v28 = v3;
      v11 = v6 - v10;
      v12 = (StageActor *)(v5 - v10);
      v30 = 0;
      v31 = 0;
      do
      {
        if ( !FIELD_U32(v12, 0x0).isDeleted )
        {
          ProfileId = Actor__getProfileId(&FIELD_U32(v12, 0x0));
          if ( ProfileId == 531 || FIELD_U8(dword_60CC6D8C, 17) && ProfileId == 533 )
          {
            v14 = (unsigned __int8)FIELD_U8(v12, 0x218);
            v15 = v8;
            if ( FIELD_U8(v12, 0x218) )
              v15 = 0;
            StageActor__cullCheck(v12, v15);
            ++v9;
            if ( v16 == 1 )
            {
              v31 += v14;
              ++v30;
            }
          }
        }
        v5 = FIELD_U32(v5, 4);
        v12 = (StageActor *)(v5 - v10);
      }
      while ( v5 - v10 != v11 );
      if ( v9 )
      {
        result = 1;
        if ( v9 == v31 )
          return 0;
        if ( v9 == v30 )
        {
          v20 = FIELD_U32(v29, 36);
          if ( v20 != v27 )
          {
            v21 = FIELD_U32(v29, 44);
            v22 = v27 - v21;
            v23 = (Actor *)(v20 - v21);
            if ( v28 )
            {
              do
              {
                if ( !FIELD_U8(v23, 0x13) )
                {
                  v24 = Actor__getProfileId(v23);
                  if ( v24 == 531 )
                  {
                    FIELD_U8(v23, 0x13) = 1;
                  }
                  else if ( FIELD_U8(dword_60CC6D8C, 17) )
                  {
                    if ( v24 == 533 )
                      FIELD_U8(v23, 0x13) = 1;
                  }
                }
                v20 = FIELD_U32(v20, 4);
                v23 = (Actor *)(v20 - v21);
              }
              while ( v20 - v21 != v22 );
            }
            else
            {
              do
              {
                if ( !FIELD_U8(v23, 0x13) )
                {
                  v25 = Actor__getProfileId(v23);
                  if ( v25 == 531 || FIELD_U8(dword_60CC6D8C, 17) && v25 == 533 )
                  {
                    FIELD_U8(v23, 0x13) = 1;
                    v26 = (_BYTE *)v23[7].field_48;
                    if ( v26 )
                      *v26 &= ~1u;
                  }
                }
                v20 = FIELD_U32(v20, 4);
                v23 = (Actor *)(v20 - v21);
              }
              while ( v20 - v21 != v22 );
            }
          }
          result = 1;
          if ( v28 )
            return 0;
        }
      }
      else
      {
        return 1;
      }
    }
  }
  else if ( v3 != 1 || (result = 0, !FIELD_U8(a1, 97)) )
  {
    result = 1;
    if ( !v4 && v2 )
    {
      v17 = FIELD_U8(dword_60CC6D8C, 17);
      v18 = sub_60006098((int *)dword_60C7B3F8, 531, FIELD_U32(a1, 8), FIELD_U8(a1, 28));
      if ( v17 )
      {
        v19 = (v18 | sub_60006098((int *)dword_60C7B3F8, 533, FIELD_U32(a1, 8), FIELD_U8(a1, 28))) == 0;
        result = 0;
        if ( v19 )
          return result;
      }
      else
      {
        result = 0;
        if ( !v18 )
          return result;
      }
      FIELD_U8(a1, 97) = 1;
      return 1;
    }
  }
  return result;
}
