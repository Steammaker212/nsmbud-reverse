/* sub_60577F48
 * address: 0x60577F48   size: 696   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60577F48(int a1)
{
  int v2; // r5
  float v3; // s0
  float v4; // s2
  unsigned int v5; // r1
  int v6; // r0
  int v7; // r2
  int v8; // r0
  _DWORD *v9; // r2
  int v10; // r0
  int v11; // r3
  __int64 v12; // r0
  int v14[4]; // [sp+4h] [bp-44h] BYREF
  char v15; // [sp+14h] [bp-34h]
  int v16; // [sp+18h] [bp-30h]
  int v17; // [sp+1Ch] [bp-2Ch]
  int v18; // [sp+20h] [bp-28h]
  bool v19; // [sp+24h] [bp-24h]
  bool v20; // [sp+25h] [bp-23h]
  char v21; // [sp+26h] [bp-22h]
  int v22; // [sp+28h] [bp-20h]
  bool v23; // [sp+2Ch] [bp-1Ch]

  v2 = 2;
  FIELD_U32(a1, 7388) = 2;
  FIELD_U32(a1, 7288) = 0;
  FIELD_U8(a1, 7400) = 1;
  FIELD_U8(a1, 7339) = 1;
  FIELD_U8(a1, 6876) = 1;
  FIELD_U32(a1, 7392) = (FIELD_U32(a1, 20) >> 8) & 0xF;
  sub_60579AE4(a1);
  if ( !sub_605D00B8(a1) )
  {
    sub_6057A244(a1, 0);
    FIELD_U32(a1, 572) = 0;
    FIELD_U32(a1, 576) = 0;
    FIELD_U32(a1, 580) = 0;
    v3 = FIELD_F32(a1, 108) + 8.0;
    FIELD_F32(a1, 108) = v3;
    v4 = FIELD_F32(a1, 112) + -8.0;
    FIELD_F32(a1, 112) = v4;
    FIELD_U32(a1, 7300) = 1;
    FIELD_U32(a1, 7304) = FIELD_U8(a1, 28);
    FIELD_U32(a1, 7308) = FIELD_U8(a1, 29);
    if ( FIELD_U32(dword_60C99DD4, 764) == 4 )
    {
      sub_60003D84((_DWORD *)a1);
      v5 = FIELD_U32(a1, 7300);
      v6 = FIELD_U32(a1, 108);
      v7 = FIELD_U32(a1, 112);
    }
    else
    {
      v6 = LODWORD(v3);
      v7 = LODWORD(v4);
      v5 = 1;
    }
    v14[0] = v6;
    v14[1] = v7;
    v14[2] = FIELD_U32(a1, 116);
    v14[3] = MovementHandler__getMaskForMovementType(a1 + 6992, v5);
    v15 = FIELD_U32(a1, 7304);
    v16 = 0;
    v17 = 0;
    v18 = 0;
    v8 = FIELD_U32(a1, 20);
    v19 = (v8 & 0x4000000) != 0;
    v20 = (v8 & 0x8000000) != 0;
    v21 = HIBYTE(v8) & 1;
    v22 = 1;
    v23 = (v8 & 0x2000000) != 0;
    MovementHandler_initFromStruct((MovementHandler *)(a1 + 6992), v14);
    MovementHandler__execute((MovementHandler *)(a1 + 6992));
    FIELD_U8(a1, 7488) = 0;
    if ( FIELD_U32(a1, 7040) == 1 && FIELD_U32(a1, 7060) != 1 )
    {
      v9 = (_DWORD *)(a1 + 7120);
      FIELD_U32(a1, 108) = FIELD_U32(a1, 6992);
      FIELD_U32(a1, 112) = FIELD_U32(a1, 6996);
      if ( (FIELD_U32(a1, 20) & 0x2000000) == 0 )
        v9 = (_DWORD *)(a1 + 7072);
      FIELD_U32(a1, 164) = *v9;
      if ( FIELD_U8(a1, 7128) )
        FIELD_U8(a1, 7488) = 1;
    }
    FIELD_U32(a1, 508) = 1107296256;
    FIELD_U32(a1, 512) = 1107296256;
    FIELD_U16(a1, 7376) = 0;
    v10 = FIELD_U8(a1, 539);
    if ( !FIELD_U8(a1, 539) )
      goto LABEL_15;
    v11 = v10 - 33;
    HIDWORD(v12) = 1u >> (33 - v10);
    LODWORD(v12) = 1 << (v10 - 1);
    if ( v11 >= 0 )
    {
      HIDWORD(v12) = 1 << v11;
      LODWORD(v12) = 0;
    }
    if ( (FIELD_U64(EventMgr__instance, 16) & v12) == 0 )
    {
      FIELD_U8(a1, 535) = 0;
      (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60CAEC7C);
    }
    else
    {
LABEL_15:
      ColliderMgr_add(ColliderMgr_instance, (ColliderBase *)(a1 + 6120));
      (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60CB10FC);
    }
    return 1;
  }
  return v2;
}
