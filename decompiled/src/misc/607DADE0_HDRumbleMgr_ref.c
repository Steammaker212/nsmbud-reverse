/* HDRumbleMgr_ref
 * address: 0x607DADE0   size: 576   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall HDRumbleMgr_ref(int a1, int a2)
{
  int v3; // r1
  _DWORD *i; // r2

  CalculateTask2_ctor((sead_IDisposer *)a1, a2, (int)"HDRumbleMgr");
  *(_DWORD *)a1 = off_60C262E0;
  FIELD_U8(a1, 192) = 0;
  FIELD_U32(a1, 196) = 0;
  FIELD_U32(a1, 200) = a1 + 200;
  FIELD_U32(a1, 204) = a1 + 200;
  FIELD_U32(a1, 208) = 0;
  FIELD_U32(a1, 212) = a1 + 224;
  FIELD_U32(a1, 216) = 0;
  FIELD_U32(a1, 220) = 0;
  v3 = 126;
  for ( i = (_DWORD *)(a1 + 224); ; i += 54 )
  {
    *i = i + 27;
    if ( !v3 )
      break;
    v3 -= 2;
    i[27] = i + 54;
  }
  FIELD_U32(a1, 13940) = 0;
  FIELD_U32(a1, 216) = a1 + 224;
  FIELD_U32(a1, 220) = 128;
  sead__CriticalSection__ctor((sead_IDisposer *)(a1 + 14048));
  FIELD_U32(a1, 14084) = 0;
  sub_607DB038(a1 + 14088);
  sub_607DB0D4(a1 + 15024);
  sub_607DB214(a1 + 15888);
  FIELD_U32(a1, 16536) = 1;
  FIELD_U32(a1, 16564) = 0;
  FIELD_U32(a1, 16552) = 0;
  FIELD_U32(a1, 16548) = 0;
  FIELD_U32(a1, 16544) = 0;
  FIELD_U32(a1, 16540) = 0;
  FIELD_U32(a1, 16560) = a1 + 16556;
  FIELD_U32(a1, 16556) = a1 + 16556;
  FIELD_U32(a1, 16568) = -1;
  FIELD_U32(a1, 16572) = 1065353216;
  FIELD_U32(a1, 16612) = 1114636288;
  FIELD_U32(a1, 16616) = 1015580809;
  FIELD_U32(a1, 16620) = 0;
  sead_IDisposer_ctor((sead_IDisposer *)(a1 + 16624));
  FIELD_U32(a1, 16640) = &sead__SafeStringBase__vtable;
  FIELD_U32(a1, 16644) = &byte_60ABC94D;
  FIELD_U32(a1, 16624) = off_60C5E9A4;
  FIELD_U32(a1, 16648) = 0;
  FIELD_U32(a1, 16652) = 0;
  FIELD_U32(a1, 16656) = 1;
  FIELD_U32(a1, 16664) = 0;
  FIELD_U32(a1, 16668) = 0;
  FIELD_U32(a1, 16672) = 0;
  FIELD_U32(a1, 16660) = off_60BD8394;
  sead__CriticalSection__ctor((sead_IDisposer *)(a1 + 16692));
  FIELD_U8(a1, 16728) = 0;
  FIELD_U32(a1, 16576) = 1065353216;
  FIELD_U32(a1, 16580) = 1065353216;
  FIELD_U32(a1, 16584) = 1065353216;
  FIELD_U32(a1, 16588) = 1065353216;
  FIELD_U32(a1, 16592) = 1065353216;
  FIELD_U32(a1, 16596) = 1065353216;
  FIELD_U32(a1, 16600) = 1065353216;
  FIELD_U32(a1, 16604) = 1065353216;
  FIELD_U32(a1, 16608) = 1065353216;
  return a1;
}
