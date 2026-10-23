/* sub_604D51D8
 * address: 0x604D51D8   size: 900   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604D51D8(int a1)
{
  int v2; // r7

  *(_DWORD *)a1 = &off_60BFE734;
  FIELD_U32(a1, 4) = &off_60BFE744;
  FIELD_U32(a1, 8) = &off_60BFE768;
  FIELD_U32(a1, 12) = a1;
  FIELD_U32(a1, 16) = 0;
  StateMgr_ctor((StateMgr *)(a1 + 20), (StateExecuter *)(a1 + 4), (StateBase *)&dword_60CA3DB8);
  *(_DWORD *)a1 = &off_60BFE724;
  FIELD_U32(a1, 36) = 0;
  FIELD_U32(a1, 40) = 11;
  FIELD_U8(a1, 56) = 0;
  FIELD_U32(a1, 52) = 0;
  FIELD_U32(a1, 48) = 0;
  FIELD_U32(a1, 44) = 0;
  FIELD_U32(a1, 60) = &off_60BFD790;
  sub_60475900((sead_IDisposer *)(a1 + 60), a1 + 3588, 3);
  FIELD_U32(a1, 60) = &off_60BFD790;
  FIELD_U32(a1, 3588) = 0;
  FIELD_U32(a1, 3592) = &sead__SafeStringBase__vtable;
  FIELD_U32(a1, 3596) = &byte_60B3BA34;
  FIELD_U32(a1, 3600) = 0;
  FIELD_U8(a1, 3604) = 0;
  FIELD_U32(a1, 3608) = 0;
  FIELD_U32(a1, 3612) = &sead__SafeStringBase__vtable;
  FIELD_U32(a1, 3616) = &byte_60B3BA34;
  FIELD_U32(a1, 3620) = 0;
  FIELD_U8(a1, 3624) = 0;
  FIELD_U32(a1, 3628) = 0;
  FIELD_U32(a1, 3632) = &sead__SafeStringBase__vtable;
  FIELD_U32(a1, 3636) = &byte_60B3BA34;
  FIELD_U32(a1, 3640) = 0;
  FIELD_U8(a1, 3644) = 0;
  memset((void *)(a1 + 3648), 0, 252);
  SE_SYS_DECIDE_ref_50208C(a1 + 3900);
  v2 = a1 + 5980;
  memset((void *)(a1 + 5980), 0, 46020);
  do
  {
    *(_DWORD *)v2 = &off_60BFD7AC;
    sub_6047611C((sead_IDisposer *)v2, v2 + 3520, 1);
    *(_DWORD *)v2 = &off_60BFD7AC;
    FIELD_U32(v2, 3520) = 0;
    FIELD_U32(v2, 3524) = &sead__SafeStringBase__vtable;
    FIELD_U32(v2, 3528) = &byte_60B3BA34;
    FIELD_U32(v2, 3532) = 0;
    FIELD_U8(v2, 3536) = 0;
    v2 += 3540;
  }
  while ( v2 != a1 + 52000 );
  memset((void *)(a1 + 52000), 0, 196);
  FIELD_U32(a1, 52196) = -1;
  FIELD_U32(a1, 52200) = -1;
  sub_6045BF30();
  FIELD_U32(a1, 52608) = 0;
  FIELD_U32(a1, 52612) = 0;
  FIELD_U32(a1, 52616) = 0;
  FIELD_U32(a1, 52620) = -1;
  FIELD_U32(a1, 52624) = -1;
  FIELD_U32(a1, 52640) = 0;
  FIELD_U32(a1, 52064) = 0;
  FIELD_U32(a1, 52068) = 0;
  FIELD_U8(a1, 52072) = 0;
  FIELD_U32(a1, 52076) = 0;
  FIELD_U32(a1, 52080) = 0;
  FIELD_U8(a1, 52084) = 0;
  FIELD_U32(a1, 52088) = 0;
  FIELD_U32(a1, 52092) = 0;
  FIELD_U8(a1, 52096) = 0;
  FIELD_U32(a1, 52100) = 0;
  FIELD_U32(a1, 52104) = 0;
  FIELD_U8(a1, 52108) = 0;
  FIELD_U32(a1, 52112) = 0;
  FIELD_U32(a1, 52116) = 0;
  FIELD_U8(a1, 52120) = 0;
  FIELD_U32(a1, 52124) = 0;
  FIELD_U32(a1, 52128) = 0;
  FIELD_U8(a1, 52132) = 0;
  FIELD_U32(a1, 52136) = 0;
  FIELD_U32(a1, 52140) = 0;
  FIELD_U8(a1, 52144) = 0;
  FIELD_U32(a1, 52148) = 0;
  FIELD_U32(a1, 52152) = 0;
  FIELD_U8(a1, 52156) = 0;
  FIELD_U32(a1, 52160) = 0;
  FIELD_U32(a1, 52164) = 0;
  FIELD_U8(a1, 52168) = 0;
  FIELD_U32(a1, 52172) = 0;
  FIELD_U32(a1, 52176) = 0;
  FIELD_U8(a1, 52180) = 0;
  FIELD_U32(a1, 52184) = 0;
  FIELD_U32(a1, 52188) = 0;
  FIELD_U8(a1, 52192) = 0;
  FIELD_U8(a1, 54) = 0;
  FIELD_U8(a1, 50) = 0;
  FIELD_U8(a1, 48) = 0;
  FIELD_U8(a1, 47) = 0;
  FIELD_U8(a1, 46) = 0;
  FIELD_U8(a1, 45) = 0;
  FIELD_U8(a1, 53) = 0;
  FIELD_U8(a1, 56) = 0;
  FIELD_U8(a1, 55) = 0;
  FIELD_U8(a1, 49) = 0;
  FIELD_U8(a1, 52) = 0;
  FIELD_U8(a1, 51) = 0;
  memset((void *)(a1 + 3652), 0, 248);
  memset((void *)(a1 + 52000), 0, 61);
  FIELD_U16(a1, 52636) = 0;
  FIELD_U32(a1, 52632) = 0;
  FIELD_U32(a1, 52628) = 0;
  return a1;
}
