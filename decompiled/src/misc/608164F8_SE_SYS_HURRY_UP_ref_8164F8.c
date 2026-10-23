/* SE_SYS_HURRY_UP_ref_8164F8
 * address: 0x608164F8   size: 944   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_SYS_HURRY_UP_ref_8164F8(int a1, int a2)
{
  int SoundArchivePlayer; // r0
  float v5; // s16
  int v6; // r5
  int v7; // r8
  int v8; // r0
  unsigned int v9; // r6
  int v10; // r0
  int v11; // r0
  unsigned int v12; // r7
  int v13; // r0
  float v14; // s0
  int v15; // r1
  int v16; // r0
  unsigned int v17; // r7
  int v18; // r0
  int v19; // r0
  unsigned int v20; // r7
  int v21; // r0
  int v23; // r0
  unsigned int v24; // r7
  int v25; // r0

  FIELD_U32(a1, 48) = a2;
  FIELD_U8(a1, 44) |= 1u;
  SoundArchivePlayer = SoundSystem_getSoundArchivePlayer(SoundSystem_instance);
  v5 = 0.2;
  v6 = SoundArchivePlayer;
  v7 = 20;
  switch ( a2 )
  {
    case 1:
    case 9:
      v8 = FIELD_U32(SoundArchivePlayer, 40);
      if ( (unsigned int)(v8 + 0x4000000) >= 0x4000001 )
      {
        v9 = 0x4000000;
        do
        {
          if ( v9 - 67108865 > 0x15 || ((1 << (v9 - 1)) & 0x270001) == 0 )
          {
            v10 = sub_608AB144(v6 + 8, v9);
            sub_608AC9B4(v10, 1, 10);
            v8 = FIELD_U32(v6, 40);
          }
          ++v9;
        }
        while ( v9 < v8 + 0x4000000 );
      }
      v7 = 15;
      v5 = 0.3;
      if ( sub_60808E60(SoundSystem_instance, (int)"SE_SYS_HURRY_UP") )
        sub_6080A0AC(SoundSystem_instance, 30, 0.3);
      return sub_6080C38C(dword_60CC6B0C, v7, v5);
    case 2:
    case 7:
      v11 = FIELD_U32(SoundArchivePlayer, 40);
      if ( (unsigned int)(v11 + 0x4000000) >= 0x4000001 )
      {
        v12 = 0x4000000;
        do
        {
          if ( v12 - 67108865 > 0x15 || ((1 << (v12 - 1)) & 0x240001) == 0 )
          {
            v13 = sub_608AB144(v6 + 8, v12);
            sub_608AC9B4(v13, 1, 10);
            v11 = FIELD_U32(v6, 40);
          }
          ++v12;
        }
        while ( v12 < v11 + 0x4000000 );
      }
      v14 = 0.0;
      dword_60CC6B80 = 3;
      v15 = 15;
      goto LABEL_33;
    case 3:
      v16 = FIELD_U32(SoundArchivePlayer, 40);
      v7 = 30;
      if ( (unsigned int)(v16 + 0x4000000) >= 0x4000001 )
      {
        v17 = 0x4000000;
        do
        {
          if ( v17 - 67108865 > 0x15 || ((1 << (v17 - 1)) & 0x240001) == 0 )
          {
            v18 = sub_608AB144(v6 + 8, v17);
            sub_608AC9B4(v18, 1, 10);
            v16 = FIELD_U32(v6, 40);
          }
          ++v17;
        }
        while ( v17 < v16 + 0x4000000 );
      }
      return sub_6080C38C(dword_60CC6B0C, v7, v5);
    case 4:
      v5 = 0.3;
      v7 = 30;
      FIELD_U8(a1, 65) = 1;
      v19 = FIELD_U32(SoundArchivePlayer, 40);
      if ( (unsigned int)(v19 + 0x4000000) >= 0x4000001 )
      {
        v20 = 0x4000000;
        do
        {
          if ( v20 - 67108865 > 0x15 || ((1 << (v20 - 1)) & 0x2C0001) == 0 )
          {
            v21 = sub_608AB144(v6 + 8, v20);
            sub_608AC9B4(v21, 1, 10);
            v19 = FIELD_U32(v6, 40);
          }
          ++v20;
        }
        while ( v20 < v19 + 0x4000000 );
      }
      return sub_6080C38C(dword_60CC6B0C, v7, v5);
    case 5:
      v23 = FIELD_U32(SoundArchivePlayer, 40);
      if ( (unsigned int)(v23 + 0x4000000) >= 0x4000001 )
      {
        v24 = 0x4000000;
        do
        {
          if ( v24 - 67108865 >= 2 )
          {
            v25 = sub_608AB144(v6 + 8, v24);
            sub_608AC9B4(v25, 1, 10);
            v23 = FIELD_U32(v6, 40);
          }
          ++v24;
        }
        while ( v24 < v23 + 0x4000000 );
      }
      return sub_6080C38C(dword_60CC6B0C, v7, v5);
    case 6:
      v14 = 0.5;
      dword_60CC6B80 = 0;
      v15 = 30;
LABEL_33:
      sub_60910068(&dword_60CC6B98, v15, v14);
      v5 = 0.3;
      return sub_6080C38C(dword_60CC6B0C, v7, v5);
    case 8:
      v5 = 0.4;
      v7 = 30;
      return sub_6080C38C(dword_60CC6B0C, v7, v5);
    case 10:
    case 13:
      v7 = 30;
      dword_60CC6B80 = 3;
      sub_60910068(&dword_60CC6B98, 30, 0.0);
      v5 = 0.6;
      return sub_6080C38C(dword_60CC6B0C, v7, v5);
    case 11:
      dword_60CC6B80 = 1;
      return sub_60910068(&dword_60CC6B98, 30, 0.0);
    case 12:
      dword_60CC6B80 = 2;
      sub_60910068(&dword_60CC6B98, 30, 0.0);
      return sub_6080C38C(dword_60CC6B0C, v7, v5);
    default:
      return sub_6080C38C(dword_60CC6B0C, v7, v5);
  }
}
