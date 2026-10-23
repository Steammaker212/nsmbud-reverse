/* sub_605B06FC
 * address: 0x605B06FC   size: 248   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605B06FC(int a1)
{
  int v2; // r0
  int v3; // r1

  FIELD_U32(a1, 6180) = FIELD_U32(a1, 20) & 0xF;
  v2 = FIELD_U32(a1, 108);
  FIELD_U32(a1, 6120) = v2;
  v3 = FIELD_U32(a1, 112);
  FIELD_U32(a1, 6124) = v3;
  FIELD_U32(a1, 6144) = v2;
  FIELD_U32(a1, 6148) = v3;
  FIELD_U32(a1, 6168) = v2;
  FIELD_U32(a1, 6172) = v3;
  FIELD_U32(a1, 6176) = 1082130432;
  FIELD_U32(a1, 6128) = -988004352;
  FIELD_U32(a1, 6152) = 1090519040;
  FIELD_U32(a1, 116) = 0;
  big_shell_A_ref(a1);
  FIELD_U32(a1, 156) = 0;
  FIELD_U32(a1, 160) = -1073741824;
  FIELD_U32(a1, 164) = 0;
  FIELD_U32(a1, 6132) = 0;
  FIELD_U32(a1, 6136) = -1073741824;
  FIELD_U32(a1, 6140) = 0;
  FIELD_U32(a1, 6156) = 0;
  FIELD_U32(a1, 6160) = -1073741824;
  FIELD_U32(a1, 6164) = 0;
  FIELD_U32(a1, 144) = 1065353216;
  FIELD_U32(a1, 148) = 1065353216;
  FIELD_U32(a1, 152) = 1065353216;
  StateMgr__changeState((StateMgr *)(a1 + 6084), (StateBase *)&dword_60CB0350);
  return 1;
}
