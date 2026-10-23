/* sub_60576060
 * address: 0x60576060   size: 504   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_60576060(int a1)
{
  int v2; // r6
  _DWORD *v3; // r7
  int v4; // r5
  float v5; // s2
  int v6; // r1
  int *v7; // r1
  _BYTE v9[4]; // [sp+4h] [bp-2Ch] BYREF
  _DWORD v10[3]; // [sp+8h] [bp-28h] BYREF
  int v11; // [sp+14h] [bp-1Ch] BYREF

  v2 = 2;
  FIELD_U32(a1, 7368) = 0;
  v3 = (_DWORD *)(a1 + 7368);
  FIELD_U32(a1, 7296) = 49;
  FIELD_U32(a1, 7352) = 1098907648;
  FIELD_U32(a1, 7356) = -1050673152;
  FIELD_U32(a1, 7360) = 1098907648;
  FIELD_U32(a1, 7364) = -1050673152;
  FIELD_U32(a1, 6872) = 2;
  v4 = a1 + 6120;
  ColliderBase_setType((ColliderBase *)(a1 + 6120), 7);
  if ( sub_605635AC(a1, 0, 0) == 1 )
  {
    FIELD_U32(a1, 6776) = -1052770304;
    FIELD_U32(a1, 6780) = 1101004800;
    FIELD_U32(a1, 6784) = 1094713344;
    FIELD_U32(a1, 6788) = -1065353216;
    sub_60165340(v4, (_DWORD *)(a1 + 6776), (_DWORD *)(a1 + 6784));
    FIELD_U32(a1, 144) = 1069547520;
    FIELD_U32(a1, 148) = 1069547520;
    FIELD_U32(a1, 152) = 1069547520;
    FIELD_U32(a1, 6800) = 1069547520;
    FIELD_U32(a1, 6808) = 1071225242;
    FIELD_U32(a1, 500) = 1140850688;
    FIELD_U32(a1, 504) = 1140850688;
    FIELD_U32(a1, 508) = 1107296256;
    FIELD_U32(a1, 512) = 1107296256;
    FIELD_U32(a1, 7280) = 1115684864;
    FIELD_U32(a1, 7284) = 1115684864;
    sub_605D0024(a1);
    v11 = 0;
    v5 = FIELD_F32(a1, 112);
    v6 = FIELD_U32(a1, 116);
    v10[0] = FIELD_U32(a1, 108);
    *(float *)&v10[1] = v5 + -32.0;
    v10[2] = v6;
    ((void (__fastcall *)(_BYTE *, int *, _DWORD *, _DWORD))checkLiquidCollisions)(
      v9,
      &v11,
      v10,
      FIELD_U8(a1, 86));
    sub_606DF470(a1 + 7388, FIELD_U32(EnemyCounterMaybe_instance, 28));
    FIELD_U32(a1, 164) = FIELD_U32(a1, 7408);
    FIELD_U32(a1, 112) = FIELD_U32(a1, 7424);
    if ( *v3 == 2 )
      v7 = &dword_60CAE31C;
    else
      v7 = &dword_60CAE2F8;
    (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, v7);
    return 1;
  }
  return v2;
}
