/* sub_60828180
 * address: 0x60828180   size: 832   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60828180(int a1, int a2)
{
  int v2; // r5
  int v3; // r4
  _BYTE *v4; // r5
  _BYTE *v5; // r1
  int v6; // r6
  void *v7; // r4
  int v8; // r8
  int v9; // r11
  int v10; // r10
  char v11; // r7
  int v12; // r6
  int v13; // r1
  unsigned int v14; // r0
  unsigned int v15; // r3
  int v16; // r5
  int v17; // r2
  int v18; // lr
  unsigned int v19; // r12
  int v20; // r6
  bool v21; // r6
  int v22; // r0
  int v23; // r0
  int v24; // r1
  _DWORD *v26; // [sp+Ch] [bp-2CCh]
  _WORD *v27; // [sp+10h] [bp-2C8h]
  _DWORD *v28; // [sp+14h] [bp-2C4h]
  _BYTE *v29; // [sp+18h] [bp-2C0h]
  void *v30; // [sp+1Ch] [bp-2BCh]
  _BYTE *v31; // [sp+20h] [bp-2B8h]
  int v32; // [sp+28h] [bp-2B0h]
  char v33; // [sp+2Dh] [bp-2ABh]
  char v34; // [sp+2Eh] [bp-2AAh]
  char v35; // [sp+2Fh] [bp-2A9h]
  _DWORD v36[170]; // [sp+30h] [bp-2A8h] BYREF

  v2 = FIELD_U32(a1, 40) + 520 * a2;
  v3 = FIELD_U8(v2, 3136);
  sub_6040D2C0(LevelInfo_instance);
  v4 = (_BYTE *)(v2 + 3136);
  v5 = v4;
  if ( !v3 )
    v5 = v4 - 3120;
  v6 = dword_60C99DEC;
  v7 = (void *)(dword_60C99DEC + 16);
  if ( *v5 )
  {
    v31 = v5;
    sub_608284CC();
    sub_603FC8C4((int)v36);
    qmemcpy(v7, v36, 0x280u);
    sub_603FD238((int)v7);
    v8 = (int)v31;
    v9 = 0;
    v10 = 0;
    v11 = 0;
    v32 = v6;
    v30 = (void *)(v6 + 427);
    v29 = (_BYTE *)(v6 + 397);
    v28 = (_DWORD *)(v6 + 460);
    v27 = (_WORD *)(v6 + 424);
    v26 = (_DWORD *)(v6 + 412);
    do
    {
      v12 = v6 + v9;
      v13 = *(unsigned __int8 *)(v8 + v10 + 17);
      memset(v36, 0, 29);
      v14 = *(unsigned __int8 *)(v8 + v10 + 12);
      v15 = *(unsigned __int8 *)(v8 + v10 + 22);
      v16 = *(unsigned __int8 *)(v8 + v10 + 27);
      FIELD_U8(v12, 36) = 0;
      v17 = v13;
      v18 = v15 & 0x7F;
      v19 = v15 >> 7;
      if ( v14 >= 0x63 )
        v14 = 99;
      if ( v13 == 5 )
        v17 = 0;
      FIELD_U32(v12, 40) = v14;
      FIELD_U32(v12, 44) = v18;
      if ( (v11 & 1) == 0 )
        v17 = v13;
      FIELD_U32(v12, 48) = v17;
      FIELD_U32(v12, 52) = 0;
      FIELD_U32(v12, 56) = 0;
      FIELD_U32(v12, 60) = 100663296;
      FIELD_U16(v12, 64) = 0;
      FIELD_U8(v12, 66) = v19;
      FIELD_U8(v12, 91) = 0;
      v20 = v12 + 91;
      *(_BYTE *)(v20 - 4) = 0;
      v20 -= 4;
      *(_BYTE *)(v20 - 4) = 0;
      v20 -= 4;
      *(_BYTE *)(v20 - 4) = 0;
      v20 -= 4;
      *(_BYTE *)(v20 - 4) = 0;
      v20 -= 4;
      *(_BYTE *)(v20 - 4) = 0;
      v20 -= 4;
      *(_BYTE *)(v20 - 4) = 0;
      v20 -= 4;
      FIELD_U8(v20, 27) = 0;
      FIELD_U8(v20, 26) = 0;
      FIELD_U8(v20, 25) = 0;
      FIELD_U8(v20, 23) = 0;
      FIELD_U8(v20, 22) = 0;
      FIELD_U8(v20, 21) = 0;
      FIELD_U8(v20, 19) = 0;
      FIELD_U8(v20, 18) = 0;
      FIELD_U8(v20, 17) = 0;
      FIELD_U8(v20, 15) = 0;
      FIELD_U8(v20, 14) = 0;
      FIELD_U8(v20, 13) = 0;
      FIELD_U8(v20, 11) = 0;
      FIELD_U8(v20, 10) = 0;
      FIELD_U8(v20, 9) = 0;
      FIELD_U8(v20, 7) = 0;
      FIELD_U8(v20, 6) = 0;
      FIELD_U8(v20, 5) = 0;
      FIELD_U8(v20, 3) = 0;
      FIELD_U8(v20, 2) = 0;
      FIELD_U8(v20, 1) = 0;
      FIELD_U8(v20, 28) = 0;
      FIELD_U32(v20, 29) = v16;
      FIELD_U32(v20, 33) = 0;
      FIELD_U32(v20, 37) = 0;
      v21 = v13 == 5;
      if ( (v17 | 1) == 3 )
      {
        FIELD_U8(v32, 396) = 0;
        v29[1] = v34;
        *v29 = v33;
        v29[2] = v35;
        FIELD_U32(v32, 400) = v14;
        v22 = 2;
        FIELD_U32(v32, 404) = v18;
        if ( v17 == 2 )
          v22 = 3;
        FIELD_U32(v32, 408) = v22;
        *v26 = 0;
        v26[1] = 0;
        FIELD_U32(v32, 420) = 100663296;
        *v27 = 0;
        FIELD_U8(v32, 426) = v19;
        qmemcpy(v30, v36, 0x1Du);
        FIELD_U32(v32, 456) = v16;
        v8 = (int)v31;
        *v28 = 0;
        v28[1] = 0;
      }
      v11 |= v21;
      v6 = v32;
      v9 += 72;
      ++v10;
    }
    while ( v9 != 360 );
    FIELD_U32(v32, 516) = FIELD_U8(v8, 82);
    sub_603FD36C((int)v7, FIELD_U8(v8, 2));
    v23 = FIELD_U32(v8, 52);
    v24 = 999999999;
    if ( v23 < 999999999 )
      v24 = FIELD_U32(v8, 52);
    if ( v23 < 0 )
      v24 = 0;
    FIELD_U32(v32, 472) = v24;
    return sub_608203FC(v8);
  }
  else
  {
    sub_603FC8C4((int)v36);
    qmemcpy(v7, v36, 0x280u);
    if ( FIELD_U8(dword_60CC6D8C, 17) )
      sub_603FCCC0((int)v7, 1, 2, 4, 5);
    sub_603FD238((int)v7);
    return sub_608200A4();
  }
}
