/* sub_605F5DCC
 * address: 0x605F5DCC   size: 872   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605F5DCC(int a1)
{
  signed int v2; // r1
  int result; // r0
  float v4; // s0
  unsigned int v5; // r1
  float v6; // s0
  char *v7; // r6
  MovementHandler *v8; // r5
  int v9; // r0
  int v10; // r0
  int MaskForMovementType; // r0
  int v12; // r0
  int ProfileId; // r0
  bool v14; // zf
  _DWORD v15[11]; // [sp+14h] [bp-2Ch] BYREF

  if ( Actor__getProfileId((Actor *)a1) == 429 )
  {
    FIELD_U32(a1, 6120) = 2;
    FIELD_U8(a1, 6444) = FIELD_U8(a1, 28);
  }
  else
  {
    FIELD_U32(a1, 6120) = *(_DWORD *)((char *)&unk_60AF2A54 + ((FIELD_U32(a1, 24) >> 2) & 0xC));
    FIELD_U8(a1, 6444) = FIELD_U8(a1, 28);
    FIELD_U32(a1, 508) = 1115684864;
    FIELD_U32(a1, 512) = 1115684864;
    if ( Actor__getProfileId((Actor *)a1) == 432 )
      FIELD_U32(a1, 500) = 1166016512;
    else
      FIELD_U32(a1, 500) = 1157234688;
    FIELD_U32(a1, 504) = 1157234688;
  }
  FIELD_U32(a1, 6148) = 1;
  v2 = sub_605F43EC(a1, 0);
  result = 2;
  if ( v2 == 1 )
  {
    v4 = FIELD_F32(a1, 112) + -3.0;
    FIELD_F32(a1, 112) = v4;
    v5 = FIELD_U32(a1, 6120);
    if ( v5 != 1 )
    {
      v6 = v4 + -16.0;
      FIELD_F32(a1, 108) = FIELD_F32(a1, 108) + 16.0;
      FIELD_F32(a1, 112) = v6;
      if ( !v5 )
        goto LABEL_34;
      if ( v5 == 2 )
        FIELD_F32(a1, 112) = v6 + 6.0;
    }
    v7 = (char *)(a1 + 6444);
    if ( FIELD_U8(a1, 6444) )
    {
      switch ( v5 )
      {
        case 8u:
          FIELD_U32(a1, 6340) = FIELD_U32(a1, 24) & 0xF;
          break;
        case 2u:
          v8 = (MovementHandler *)(a1 + 6188);
          MaskForMovementType = MovementHandler__getMaskForMovementType(a1 + 6188, 2u);
          MovementHandler_init2(
            (MovementHandler *)(a1 + 6188),
            (Vec3 *)(a1 + 108),
            MaskForMovementType,
            *v7,
            FIELD_U16(a1, 22) & 0xF,
            FIELD_U16(a1, 26) & 7);
LABEL_20:
          MovementHandler__execute(v8);
          if ( FIELD_U32(a1, 6236) == 1 && FIELD_U32(a1, 6256) != 1 )
          {
            FIELD_F32(a1, 108) = FIELD_U32(v8, 0x0).x;
            FIELD_U32(a1, 112) = FIELD_U32(a1, 6192);
            if ( Actor__getProfileId((Actor *)a1) == 431 && (FIELD_U8(a1, 26) & 1) != 0 )
              v12 = 6316;
            else
              v12 = 6268;
            FIELD_U32(a1, 164) = *(_DWORD *)(a1 + v12);
          }
          if ( FIELD_U8(dword_60CC6D8C, 17) )
          {
            ProfileId = Actor__getProfileId((Actor *)a1);
            v14 = ProfileId == 430;
            if ( ProfileId == 430 )
              v14 = FIELD_U32(a1, 6120) == 3;
            if ( v14 && (FIELD_U8(a1, 27) & 1) != 0 )
              FIELD_U32(a1, 6156) = 1;
          }
          goto LABEL_34;
        case 1u:
          memset(v15, 0, 12);
          v8 = (MovementHandler *)(a1 + 6188);
          v9 = MovementHandler__getMaskForMovementType(a1 + 6188, 1u);
          MovementHandler_init3(
            (MovementHandler *)(a1 + 6188),
            (int *)(a1 + 108),
            v9,
            *v7,
            v15,
            (FIELD_U32(a1, 24) >> 2) & 0x13,
            (FIELD_U32(a1, 24) & 8) != 0,
            FIELD_U32(a1, 24) & 3,
            1);
          goto LABEL_20;
      }
      v8 = (MovementHandler *)(a1 + 6188);
      v10 = MovementHandler__getMaskForMovementType(a1 + 6188, v5);
      MovementHandler__link((MovementHandler *)(a1 + 6188), (Vec3 *)(a1 + 108), v10, *v7);
      goto LABEL_20;
    }
LABEL_34:
    FIELD_U32(a1, 6436) = FIELD_U32(a1, 108);
    FIELD_U32(a1, 6440) = FIELD_U32(a1, 112);
    StarCoinBase_updateModel((ModelWrapper **)a1);
    (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60CB21E0);
    return 1;
  }
  return result;
}
