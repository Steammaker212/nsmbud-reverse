/* WithMiiPackSelectScene_ref
 * address: 0x607F9380   size: 464   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall WithMiiPackSelectScene_ref(int a1, int a2)
{
  CalculateTask3_ctor((sead_IDisposer *)a1, a2, (int)"WithMiiPackSelectScene");
  *(_DWORD *)a1 = off_60C27C1C;
  sub_6090A654((_DWORD *)(a1 + 192));
  sub_6090C6DC(a1 + 280);
  FIELD_U32(a1, 456) = 1065353216;
  FIELD_U32(a1, 460) = 0;
  FIELD_U32(a1, 464) = 0;
  FIELD_U32(a1, 468) = 0;
  FIELD_U32(a1, 472) = 0;
  FIELD_U32(a1, 476) = 1065353216;
  FIELD_U32(a1, 480) = 0;
  FIELD_U32(a1, 484) = 0;
  FIELD_U32(a1, 488) = 0;
  FIELD_U32(a1, 492) = 0;
  FIELD_U32(a1, 496) = 1065353216;
  FIELD_U32(a1, 500) = 0;
  FIELD_U32(a1, 452) = off_60C5D014;
  FIELD_U32(a1, 536) = 0;
  FIELD_U32(a1, 504) = 0;
  FIELD_U32(a1, 508) = 0;
  FIELD_U32(a1, 512) = 1092616192;
  FIELD_U32(a1, 516) = 0;
  FIELD_U32(a1, 520) = 0;
  FIELD_U32(a1, 524) = 0;
  FIELD_U32(a1, 528) = 0;
  FIELD_U32(a1, 532) = 1065353216;
  sub_6090C214(a1 + 540);
  FIELD_U32(a1, 724) = &off_60C27CAC;
  FIELD_U32(a1, 728) = &off_60C27CBC;
  FIELD_U32(a1, 732) = &off_60C27CE0;
  FIELD_U32(a1, 736) = a1;
  FIELD_U32(a1, 740) = 0;
  StateMgr_ctor((StateMgr *)(a1 + 744), (StateExecuter *)(a1 + 728), (StateBase *)&dword_60CC63E0);
  FIELD_U32(a1, 724) = &off_60C27C9C;
  sead_IDisposer_ctor((sead_IDisposer *)(a1 + 760));
  FIELD_U32(a1, 776) = &sead__SafeStringBase__vtable;
  FIELD_U32(a1, 780) = &byte_60ABC94D;
  FIELD_U32(a1, 760) = off_60C5E9A4;
  FIELD_U32(a1, 784) = 0;
  FIELD_U32(a1, 788) = 0;
  FIELD_U32(a1, 792) = 1;
  FIELD_U32(a1, 800) = 0;
  FIELD_U32(a1, 804) = 0;
  FIELD_U32(a1, 808) = 0;
  FIELD_U32(a1, 796) = off_60BD8394;
  sead_IDisposer_ctor((sead_IDisposer *)(a1 + 828));
  FIELD_U32(a1, 844) = &sead__SafeStringBase__vtable;
  FIELD_U32(a1, 848) = &byte_60ABC94D;
  FIELD_U32(a1, 828) = off_60C5E9A4;
  FIELD_U32(a1, 852) = 0;
  FIELD_U32(a1, 856) = 0;
  FIELD_U32(a1, 860) = 1;
  FIELD_U32(a1, 868) = 0;
  FIELD_U32(a1, 872) = 0;
  FIELD_U32(a1, 876) = 0;
  FIELD_U32(a1, 864) = off_60BD8394;
  sub_6045BF30();
  sub_604BEE90(a1 + 1304);
  sub_60544C94(a1 + 51544);
  FIELD_U32(a1, 85060) = -1;
  FIELD_U32(a1, 85052) = 0;
  return a1;
}
