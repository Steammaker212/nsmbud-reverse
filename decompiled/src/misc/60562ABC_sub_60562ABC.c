/* sub_60562ABC
 * address: 0x60562ABC   size: 760   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_60562ABC(int a1)
{
  int v2; // r5
  unsigned int v3; // r0
  float *v4; // r5
  int v5; // r0
  float v6; // r0
  float v7; // s2
  float v8; // s4
  float v9; // s0
  _DWORD *v10; // r3
  float v11; // s4
  int v12; // r1
  int v13; // r0
  bool v14; // zf
  int v15; // r1
  int v16; // r0
  void (__fastcall *v17)(int, int *); // r2
  int *v18; // r1
  int v20[4]; // [sp+4h] [bp-44h] BYREF
  char v21; // [sp+14h] [bp-34h]
  int v22; // [sp+18h] [bp-30h]
  int v23; // [sp+1Ch] [bp-2Ch]
  int v24; // [sp+20h] [bp-28h]
  bool v25; // [sp+24h] [bp-24h]
  bool v26; // [sp+25h] [bp-23h]
  char v27; // [sp+26h] [bp-22h]
  int v28; // [sp+28h] [bp-20h]
  bool v29; // [sp+2Ch] [bp-1Ch]

  v2 = 0;
  if ( sub_605635AC(a1, 1, 0) == 1 )
  {
    if ( FIELD_U32(dword_60C99DD4, 764) == 4 && (FIELD_U8(a1, 25) & 0x10) != 0 )
      sub_60003D84((_DWORD *)a1);
    v3 = FIELD_U32(a1, 24);
    if ( (v3 & 0x10000) != 0 )
      FIELD_U32(a1, 116) = -985956352;
    if ( (v3 & 0x100000) != 0 )
      FIELD_U8(a1, 7384) = 0;
    FIELD_U8(a1, 7378) = 1;
    FIELD_U32(a1, 6872) = 2;
    FIELD_U32(a1, 572) = 0;
    FIELD_U32(a1, 576) = 1090519040;
    FIELD_U32(a1, 580) = 0;
    FIELD_U32(a1, 508) = 1107296256;
    FIELD_U32(a1, 512) = 1107296256;
    FIELD_U32(a1, 500) = 1145569280;
    FIELD_U32(a1, 504) = 1145569280;
    if ( (FIELD_U8(a1, 20) & 1) != 0 )
      FIELD_U8(a1, 7377) = 1;
    FIELD_U32(a1, 7300) = 1;
    FIELD_U32(a1, 7304) = FIELD_U8(a1, 28);
    FIELD_U32(a1, 6856) = sub_60563BB8(a1, HIBYTE(v3) & 0x10 | v3 & 0xF);
    v20[0] = FIELD_U32(a1, 108);
    v20[1] = FIELD_U32(a1, 112);
    v20[2] = FIELD_U32(a1, 116);
    v4 = (float *)(a1 + 6992);
    v20[3] = MovementHandler__getMaskForMovementType(a1 + 6992, FIELD_U32(a1, 7300));
    v21 = FIELD_U32(a1, 7304);
    v22 = 0;
    v23 = 0;
    v24 = 0;
    v5 = FIELD_U32(a1, 20);
    v25 = (v5 & 0x4000000) != 0;
    v26 = (v5 & 0x8000000) != 0;
    v27 = HIBYTE(v5) & 1;
    v28 = 0;
    v29 = (v5 & 0x2000000) != 0;
    MovementHandler_initFromStruct((MovementHandler *)(a1 + 6992), v20);
    MovementHandler__execute((MovementHandler *)(a1 + 6992));
    if ( FIELD_U32(a1, 7040) == 1 && FIELD_U32(a1, 7060) != 1 )
    {
      v6 = *v4;
      v7 = FIELD_F32(a1, 108);
      v8 = FIELD_F32(a1, 112);
      FIELD_F32(a1, 108) = *v4;
      v9 = FIELD_F32(a1, 6996);
      if ( !FIELD_U8(a1, 7377) )
        v9 = v9 + FIELD_F32(a1, 6796);
      FIELD_F32(a1, 112) = v9;
      v10 = (_DWORD *)(a1 + 7120);
      v11 = (float)((float)(v9 - v8) * (float)(v9 - v8)) + (float)((float)(v6 - v7) * (float)(v6 - v7));
      if ( (FIELD_U32(a1, 20) & 0x2000000) == 0 )
        v10 = (_DWORD *)(a1 + 7072);
      FIELD_U32(a1, 164) = *v10;
      if ( v11 > 65536.0 )
      {
        FIELD_F32(a1, 108) = v6;
        FIELD_F32(a1, 112) = v9;
        v12 = FIELD_U32(a1, 116);
        FIELD_F32(a1, 584) = v6;
        FIELD_F32(a1, 588) = v9;
        FIELD_U32(a1, 592) = v12;
        FIELD_F32(a1, 608) = v6;
        FIELD_F32(a1, 612) = v9;
        FIELD_U32(a1, 616) = v12;
        sub_60160948((_DWORD *)(a1 + 6120));
      }
    }
    v13 = FIELD_U32(a1, 20);
    if ( (v13 & 0x2000000) == 0 && (unsigned __int16)v13 >> 12 )
    {
      v14 = (v13 & 0x1000000) == 0;
      v15 = 11927552 * ((unsigned __int16)v13 >> 12);
      if ( (v13 & 0x1000000) == 0 )
        v13 = -11927552 * ((unsigned __int16)v13 >> 12);
      FIELD_U32(a1, 164) = v15;
      if ( v14 )
        FIELD_U32(a1, 164) = v13;
    }
    v16 = FIELD_U32(a1, 7368);
    if ( v16 == 1 )
    {
      v17 = *(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192);
      if ( FIELD_U32(a1, 6856) == 21 )
      {
        v18 = &dword_60CB111C;
LABEL_31:
        v17(a1, v18);
        return 1;
      }
    }
    else
    {
      v17 = *(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192);
      if ( v16 == 2 )
      {
        v18 = &dword_60CAE31C;
        goto LABEL_31;
      }
    }
    v18 = &dword_60CAE2F8;
    goto LABEL_31;
  }
  return v2;
}
