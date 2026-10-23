/* sub_6067B7A8
 * address: 0x6067B7A8   size: 252   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6067B7A8(int a1)
{
  unsigned __int16 *v2; // r6
  unsigned int v3; // r5
  int *v4; // r1
  int result; // r0
  int v6; // [sp+4h] [bp-24h] BYREF
  int v7; // [sp+8h] [bp-20h]
  _DWORD v8[2]; // [sp+Ch] [bp-1Ch] BYREF
  char v9; // [sp+14h] [bp-14h]

  v2 = (unsigned __int16 *)(a1 + 10184);
  v3 = sub_608FBB8C(FIELD_U16(PlayerMgr_instance, 66));
  if ( v3 && sub_606BAAFC(*v2) >= v3 )
  {
    if ( FIELD_U8(a1, 10188) )
      v4 = &dword_60CB7F70;
    else
      v4 = &dword_60CB7F50;
    StateMgr__changeState((StateMgr *)(a1 + 6084), (StateBase *)v4);
  }
  v8[0] = *v2;
  v8[1] = unk_60C26424;
  v9 = 0;
  SE_EMY_LIFT_LINE_MOVE_ref(a1 + 6100, v8);
  FIELD_U32(a1, 108) = FIELD_U32(a1, 6444);
  FIELD_U32(a1, 112) = FIELD_U32(a1, 6448);
  FIELD_U32(a1, 116) = FIELD_U32(a1, 6452);
  sub_6067F108(a1 + 6100, &v6);
  FIELD_U32(a1, 120) = v6;
  result = v7;
  FIELD_U32(a1, 124) = v7;
  return result;
}
