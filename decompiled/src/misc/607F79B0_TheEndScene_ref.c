/* TheEndScene_ref
 * address: 0x607F79B0   size: 752   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall TheEndScene_ref(int a1, int a2)
{
  CalculateTask3_ctor((sead_IDisposer *)a1, a2, (int)"TheEndScene");
  *(_DWORD *)a1 = off_60C279E4;
  FIELD_U8(a1, 192) = 0;
  FIELD_U32(a1, 196) = &off_60C27A74;
  FIELD_U32(a1, 200) = &off_60C27A84;
  FIELD_U32(a1, 204) = &off_60C27AA8;
  FIELD_U32(a1, 208) = a1;
  FIELD_U32(a1, 212) = 0;
  StateMgr_ctor((StateMgr *)(a1 + 216), (StateExecuter *)(a1 + 200), (StateBase *)&dword_60CC6354);
  FIELD_U32(a1, 196) = &off_60C27A64;
  sub_60558FBC(a1 + 232);
  sub_604B610C(a1 + 3828);
  sead_IDisposer_ctor((sead_IDisposer *)(a1 + 9652));
  FIELD_U32(a1, 9668) = &sead__SafeStringBase__vtable;
  FIELD_U32(a1, 9672) = &byte_60ABC94D;
  FIELD_U32(a1, 9652) = off_60C5E9A4;
  FIELD_U32(a1, 9676) = 0;
  FIELD_U32(a1, 9680) = 0;
  FIELD_U32(a1, 9684) = 1;
  FIELD_U32(a1, 9692) = 0;
  FIELD_U32(a1, 9696) = 0;
  FIELD_U32(a1, 9700) = 0;
  FIELD_U32(a1, 9688) = off_60BD8394;
  sead_IDisposer_ctor((sead_IDisposer *)(a1 + 9720));
  FIELD_U32(a1, 9736) = &sead__SafeStringBase__vtable;
  FIELD_U32(a1, 9740) = &byte_60ABC94D;
  FIELD_U32(a1, 9720) = off_60C5E9A4;
  FIELD_U32(a1, 9744) = 0;
  FIELD_U32(a1, 9748) = 0;
  FIELD_U32(a1, 9752) = 1;
  FIELD_U32(a1, 9760) = 0;
  FIELD_U32(a1, 9764) = 0;
  FIELD_U32(a1, 9768) = 0;
  FIELD_U32(a1, 9756) = off_60BD8394;
  sead_IDisposer_ctor((sead_IDisposer *)(a1 + 9788));
  FIELD_U32(a1, 9804) = &sead__SafeStringBase__vtable;
  FIELD_U32(a1, 9808) = &byte_60ABC94D;
  FIELD_U32(a1, 9788) = off_60C5E9A4;
  FIELD_U32(a1, 9812) = 0;
  FIELD_U32(a1, 9816) = 0;
  FIELD_U32(a1, 9820) = 1;
  FIELD_U32(a1, 9828) = 0;
  FIELD_U32(a1, 9832) = 0;
  FIELD_U32(a1, 9836) = 0;
  FIELD_U32(a1, 9824) = off_60BD8394;
  sead_IDisposer_ctor((sead_IDisposer *)(a1 + 9856));
  FIELD_U32(a1, 9872) = &sead__SafeStringBase__vtable;
  FIELD_U32(a1, 9876) = &byte_60ABC94D;
  FIELD_U32(a1, 9856) = off_60C5E9A4;
  FIELD_U32(a1, 9880) = 0;
  FIELD_U32(a1, 9884) = 0;
  FIELD_U32(a1, 9888) = 1;
  FIELD_U32(a1, 9896) = 0;
  FIELD_U32(a1, 9900) = 0;
  FIELD_U32(a1, 9904) = 0;
  FIELD_U32(a1, 9892) = off_60BD8394;
  FIELD_U32(a1, 9928) = 1065353216;
  FIELD_U32(a1, 9932) = 0;
  FIELD_U32(a1, 9936) = 0;
  FIELD_U32(a1, 9940) = 0;
  FIELD_U32(a1, 9944) = 0;
  FIELD_U32(a1, 9948) = 1065353216;
  FIELD_U32(a1, 9952) = 0;
  FIELD_U32(a1, 9956) = 0;
  FIELD_U32(a1, 9960) = 0;
  FIELD_U32(a1, 9964) = 0;
  FIELD_U32(a1, 9968) = 1065353216;
  FIELD_U32(a1, 9972) = 0;
  FIELD_U32(a1, 9924) = off_60C5D014;
  FIELD_U32(a1, 9976) = 0;
  FIELD_U32(a1, 9980) = 0;
  FIELD_U32(a1, 9984) = 1092616192;
  FIELD_U32(a1, 10000) = 0;
  FIELD_U32(a1, 9996) = 0;
  FIELD_U32(a1, 9992) = 0;
  FIELD_U32(a1, 9988) = 0;
  FIELD_U32(a1, 10004) = 1065353216;
  FIELD_U32(a1, 10008) = 0;
  sub_6090C214(a1 + 10012);
  sub_6090A654((_DWORD *)(a1 + 10196));
  sub_6090C6DC(a1 + 10284);
  FIELD_U8(a1, 10460) = 0;
  return a1;
}
