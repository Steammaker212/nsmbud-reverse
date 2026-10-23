/* sub_6067B8BC
 * address: 0x6067B8BC   size: 220   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6067B8BC(int a1)
{
  int v2; // r0
  int result; // r0
  int v4; // [sp+4h] [bp-24h] BYREF
  int v5; // [sp+8h] [bp-20h]
  _DWORD v6[2]; // [sp+Ch] [bp-1Ch] BYREF
  char v7; // [sp+14h] [bp-14h]

  v2 = (*(int (__fastcall **)(int, _DWORD))(*(_DWORD *)a1 + 208))(a1, FIELD_U8(a1, 10194));
  if ( v2 )
  {
    FIELD_U32(a1, 10180) = FIELD_U32(v2, 8);
    StateMgr__changeState((StateMgr *)(a1 + 6084), (StateBase *)&dword_60CB7F2C);
  }
  v6[0] = FIELD_U16(a1, 10184);
  v6[1] = unk_60C26424;
  v7 = 0;
  SE_EMY_LIFT_LINE_MOVE_ref(a1 + 6100, v6);
  FIELD_U32(a1, 108) = FIELD_U32(a1, 6444);
  FIELD_U32(a1, 112) = FIELD_U32(a1, 6448);
  FIELD_U32(a1, 116) = FIELD_U32(a1, 6452);
  sub_6067F108(a1 + 6100, &v4);
  FIELD_U32(a1, 120) = v4;
  result = v5;
  FIELD_U32(a1, 124) = v5;
  return result;
}
