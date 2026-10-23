/* sub_602A51C8
 * address: 0x602A51C8   size: 204   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602A51C8(int a1)
{
  int v2; // r1
  int result; // r0

  v2 = damage_ref_2A52A0();
  result = 2;
  if ( v2 == 1 )
  {
    FIELD_U32(a1, 116) = 1158455296;
    FIELD_U32(a1, 144) = 1065353216;
    FIELD_U32(a1, 148) = 1065353216;
    FIELD_U32(a1, 152) = 1065353216;
    FIELD_F32(a1, 108) = FIELD_F32(a1, 108) + -14.0;
    FIELD_U32(a1, 160) = 0x20000000;
    FIELD_U32(dword_60C96478, 104) = a1;
    StateMgr__changeState((StateMgr *)(a1 + 6084), (StateBase *)&unk_60C905DC);
    sub_602A546C(a1);
    FIELD_U32(a1, 6144) = FIELD_U32(a1, 6168);
    FIELD_U32(a1, 6148) = FIELD_U32(a1, 6172);
    FIELD_U32(a1, 6152) = 2;
    FIELD_U32(a1, 6156) = 0;
    return 1;
  }
  return result;
}
