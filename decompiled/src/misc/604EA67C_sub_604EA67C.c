/* sub_604EA67C
 * address: 0x604EA67C   size: 1036   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604EA67C(int a1)
{
  _BYTE *v2; // r5
  _DWORD *v3; // r0
  _DWORD *v4; // r8
  StateMgr *v5; // r0
  int *v6; // r1
  int result; // r0
  char v8; // r1

  *(_BYTE *)(**(_DWORD **)(a1 + 8) + 64) &= ~1u;
  *(_BYTE *)(*(_DWORD *)(FIELD_U32(a1, 8) + 4) + 64) &= ~1u;
  *(_BYTE *)(*(_DWORD *)(FIELD_U32(a1, 8) + 8) + 64) &= ~1u;
  *(_BYTE *)(*(_DWORD *)(FIELD_U32(a1, 8) + 12) + 64) &= ~1u;
  *(_BYTE *)(*(_DWORD *)(FIELD_U32(a1, 8) + 16) + 64) &= ~1u;
  v2 = (_BYTE *)dword_60C9A1F0;
  v3 = sub_603FD91C((_DWORD *)(dword_60C9A1F0 + 16), FIELD_U8(dword_60C9A1F0, 6558));
  v4 = (_DWORD *)(a1 + 4576);
  FIELD_U32(a1, 4576) = v3[14];
  FIELD_U32(a1, 4580) = v3[21];
  FIELD_U32(a1, 4584) = v3[22];
  FIELD_U32(a1, 4588) = v3[23];
  switch ( v3[5] )
  {
    case 0:
      *(_BYTE *)(**(_DWORD **)(a1 + 8) + 64) |= 1u;
      FIELD_U32(a1, 552) = 0;
      SE_SYS_CH_TARGET_MEDAL_ref(a1, 0);
      sub_6047DEC8(*(_DWORD **)(a1 + 4), **(_DWORD **)(a1 + 12), 2);
      if ( *v4 > FIELD_U32(a1, 4580) )
        *v4 = FIELD_U32(a1, 4580);
      v5 = (StateMgr *)(a1 + 4536);
      v6 = &dword_60CA5D44;
      goto LABEL_10;
    case 1:
      *(_BYTE *)(*(_DWORD *)(FIELD_U32(a1, 8) + 4) + 64) |= 1u;
      FIELD_U32(a1, 544) = 0;
      SE_SYS_CH_TARGET_MEDAL_ref(a1, 0);
      v5 = (StateMgr *)(a1 + 4536);
      v6 = &dword_60CA5D84;
      goto LABEL_10;
    case 2:
      *(_BYTE *)(*(_DWORD *)(FIELD_U32(a1, 8) + 8) + 64) |= 1u;
      FIELD_U32(a1, 544) = 0;
      FIELD_U32(a1, 4556) = sub_6040894C((int)v2);
      FIELD_U8(a1, 4569) = 0;
      FIELD_U8(a1, 4568) = 0;
      FIELD_U8(a1, 4565) = 0;
      FIELD_U8(a1, 4561) = 0;
      FIELD_U8(a1, 4564) = 0;
      FIELD_U8(a1, 4567) = 0;
      FIELD_U8(a1, 4566) = 0;
      FIELD_U8(a1, 4560) = 0;
      FIELD_U8(a1, 4563) = 0;
      FIELD_U8(a1, 4562) = 0;
      SE_SYS_CH_TARGET_MEDAL_ref(a1, FIELD_U32(a1, 544));
      v5 = (StateMgr *)(a1 + 4536);
      v6 = &dword_60CA5DC4;
      goto LABEL_10;
    case 3:
      *(_BYTE *)(*(_DWORD *)(FIELD_U32(a1, 8) + 12) + 64) |= 1u;
      FIELD_U32(a1, 4552) = 0;
      SE_SYS_CH_TARGET_MEDAL_ref(a1, 0);
      v5 = (StateMgr *)(a1 + 4536);
      v6 = &dword_60CA5E04;
      goto LABEL_10;
    case 4:
      *(_BYTE *)(*(_DWORD *)(FIELD_U32(a1, 8) + 16) + 64) |= 1u;
      FIELD_U32(a1, 4552) = 0;
      FIELD_U32(a1, 4556) = sub_60408984(v2);
      FIELD_U8(a1, 4569) = 0;
      FIELD_U8(a1, 4568) = 0;
      FIELD_U8(a1, 4565) = 0;
      FIELD_U8(a1, 4561) = 0;
      FIELD_U8(a1, 4564) = 0;
      FIELD_U8(a1, 4567) = 0;
      FIELD_U8(a1, 4566) = 0;
      FIELD_U8(a1, 4560) = 0;
      FIELD_U8(a1, 4563) = 0;
      FIELD_U8(a1, 4562) = 0;
      SE_SYS_CH_TARGET_MEDAL_ref(a1, FIELD_U32(a1, 4552));
      v5 = (StateMgr *)(a1 + 4536);
      v6 = &dword_60CA5E44;
      goto LABEL_10;
    case 0xA:
      *(_BYTE *)(**(_DWORD **)(a1 + 8) + 64) |= 1u;
      FIELD_U32(a1, 552) = 0;
      SE_SYS_CH_TARGET_MEDAL_ref(a1, 0);
      sub_6047DEC8(*(_DWORD **)(a1 + 4), **(_DWORD **)(a1 + 12), 2);
      v5 = (StateMgr *)(a1 + 4536);
      v6 = &dword_60CA5D64;
LABEL_10:
      StateMgr__changeState(v5, (StateBase *)v6);
      break;
    default:
      break;
  }
  result = *(_DWORD *)(FIELD_U32(a1, 8) + 20);
  v8 = FIELD_U8(result, 64);
  if ( *v4 )
  {
    FIELD_U8(result, 64) = v8 | 1;
    sub_6047DEC8(*(_DWORD **)(a1 + 4), *(_DWORD *)(FIELD_U32(a1, 12) + 16), 1, *v4);
    FIELD_U32(a1, 4572) = 0;
    return 4572;
  }
  else
  {
    FIELD_U8(result, 64) = v8 & 0xFE;
  }
  return result;
}
