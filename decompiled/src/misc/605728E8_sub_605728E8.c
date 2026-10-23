/* sub_605728E8
 * address: 0x605728E8   size: 492   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_605728E8(int a1)
{
  _DWORD *v2; // r6
  int v3; // r0
  int v4; // r5
  int v5; // r0
  int v6; // r0
  int v7; // r0
  int *v9; // r1

  FIELD_U32(a1, 7368) = 1;
  v2 = (_DWORD *)(a1 + 7368);
  FIELD_U32(a1, 7296) = 48;
  FIELD_U8(a1, 7376) = 1;
  FIELD_U8(a1, 6878) = 1;
  v3 = (FIELD_U32(a1, 20) >> 8) & 1;
  FIELD_U32(a1, 6852) = v3;
  FIELD_U8(a1, 87) = byte_60B0536C[v3];
  ColliderBase_setType((ColliderBase *)(a1 + 6120), 8);
  v4 = 2;
  if ( sub_605635AC(a1, 1, 1) != 1 )
    return v4;
  sub_60563AB8((ColliderBase *)a1);
  v5 = FIELD_U32(a1, 6856);
  if ( v5 == 21 )
  {
    FIELD_U8(a1, 6876) = 1;
    v6 = 7324;
    goto LABEL_6;
  }
  if ( v5 == 13 )
  {
    v6 = 6896;
LABEL_6:
    *(_DWORD *)(a1 + v6) = 1;
  }
  FIELD_U32(a1, 7300) = 0;
  FIELD_U32(a1, 7304) = 0;
  BlockBase_setupMovement(a1);
  FIELD_U32(a1, 7288) = 1;
  FIELD_U32(a1, 7364) = -1040187392;
  FIELD_U32(a1, 500) = 1149239296;
  FIELD_U32(a1, 504) = 1149239296;
  FIELD_U32(a1, 508) = 1107296256;
  FIELD_U32(a1, 512) = 1107296256;
  FIELD_U32(a1, 516) = 1140850688;
  FIELD_U32(a1, 520) = 1140850688;
  FIELD_U32(a1, 524) = 1149239296;
  FIELD_U32(a1, 528) = 1149239296;
  FIELD_U32(a1, 7280) = 1115684864;
  FIELD_U32(a1, 7284) = 1115684864;
  sub_605D0024(a1);
  v7 = dword_60CC6484;
  FIELD_F32(a1, 7388) = FIELD_F32(a1, 108) - FIELD_F32(dword_60CC6484, 112);
  FIELD_F32(a1, 7392) = FIELD_F32(a1, 112) - FIELD_F32(v7, 124);
  if ( FIELD_U32(a1, 6856) == 21 )
  {
    (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60CB111C);
    return 1;
  }
  if ( *v2 == 2 )
    v9 = &dword_60CAE31C;
  else
    v9 = &dword_60CAE2F8;
  (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, v9);
  return 1;
}
