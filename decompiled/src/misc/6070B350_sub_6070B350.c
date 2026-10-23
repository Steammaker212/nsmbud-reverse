/* sub_6070B350
 * address: 0x6070B350   size: 220   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6070B350(int a1)
{
  float v2; // s2

  sub_60007160(dword_60C7B3F8);
  FIELD_F32(a1, 6100) = sub_600071D8(dword_60C7B3F8);
  v2 = (float)((float)((unsigned __int16)FIELD_U32(a1, 20) >> 12) * 32.0) + 1024.0;
  FIELD_F32(a1, 6108) = v2;
  FIELD_U32(a1, 492) = 1098907648;
  FIELD_U32(a1, 496) = 0;
  FIELD_F32(a1, 500) = v2;
  FIELD_U32(a1, 504) = 1124073472;
  FIELD_U32(a1, 508) = 1115684864;
  FIELD_U32(a1, 512) = 1115684864;
  FIELD_U8(a1, 6112) = Actor__getProfileId((Actor *)a1) != 241;
  FIELD_U16(a1, 6114) = 10 * FIELD_U8(a1, 20) + 240;
  StateMgr__changeState((StateMgr *)(a1 + 6084), (StateBase *)&dword_60CBCA0C);
  return 1;
}
