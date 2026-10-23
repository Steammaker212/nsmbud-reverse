/* sub_60571D10
 * address: 0x60571D10   size: 580   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_60571D10(int a1)
{
  _DWORD *v2; // r5
  int v3; // r0
  signed int v4; // r1
  signed int result; // r0
  int v6; // r0
  int v7; // r0
  int v8; // r0
  float v9; // s0
  int v10; // s0
  int *v11; // r1

  FIELD_U32(a1, 7368) = 1;
  v2 = (_DWORD *)(a1 + 7368);
  FIELD_U32(a1, 7296) = 48;
  FIELD_U8(a1, 7376) = 1;
  v3 = (FIELD_U32(a1, 20) >> 8) & 1;
  FIELD_U32(a1, 6852) = v3;
  FIELD_U8(a1, 87) = byte_60B0536C[v3];
  ColliderBase_setType((ColliderBase *)(a1 + 6120), 8);
  v4 = sub_605635AC(a1, 1, 1);
  result = 2;
  if ( v4 != 1 )
    return result;
  sub_60563AB8((ColliderBase *)a1);
  v6 = FIELD_U32(a1, 6856);
  if ( v6 == 21 )
  {
    FIELD_U8(a1, 6876) = 1;
    v7 = 7324;
    goto LABEL_6;
  }
  if ( v6 == 13 )
  {
    v7 = 6896;
LABEL_6:
    *(_DWORD *)(a1 + v7) = 1;
  }
  FIELD_U32(a1, 7300) = *(_DWORD *)((char *)&unk_60AF2188 + ((FIELD_U32(a1, 24) >> 2) & 4));
  FIELD_U32(a1, 7304) = FIELD_U8(a1, 28);
  BlockBase_setupMovement(a1);
  FIELD_U32(a1, 7288) = 1;
  v8 = FIELD_U32(a1, 7304);
  if ( v8 )
    FIELD_U8(a1, 6878) = 1;
  if ( FIELD_U32(a1, 7300) == 3 )
  {
    if ( v8 )
    {
      v9 = -32.0;
      FIELD_U32(a1, 7356) = -1040187392;
    }
    else
    {
      v9 = -18.0;
    }
    FIELD_F32(a1, 7364) = v9;
  }
  if ( Actor__getProfileId((Actor *)a1) == 293 )
  {
    v10 = 1133510656;
    FIELD_U32(a1, 500) = 1133510656;
  }
  else
  {
    v10 = 1149239296;
    FIELD_U32(a1, 500) = 1149239296;
    FIELD_U32(a1, 516) = 1140850688;
    FIELD_U32(a1, 520) = 1140850688;
    FIELD_U32(a1, 524) = 1149239296;
    FIELD_U32(a1, 528) = 1149239296;
  }
  FIELD_U32(a1, 504) = v10;
  FIELD_U32(a1, 508) = 1107296256;
  FIELD_U32(a1, 512) = 1107296256;
  FIELD_U32(a1, 7280) = 1115684864;
  FIELD_U32(a1, 7284) = 1115684864;
  sub_605D0024(a1);
  if ( FIELD_U32(a1, 7304) )
    FIELD_U32(a1, 7352) = 1096810496;
  if ( FIELD_U32(a1, 6856) == 21 )
  {
    (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60CB111C);
  }
  else
  {
    if ( *v2 == 2 )
      v11 = &dword_60CAE31C;
    else
      v11 = &dword_60CAE2F8;
    (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, v11);
  }
  return 1;
}
