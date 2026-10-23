/* sub_6049FAC8
 * address: 0x6049FAC8   size: 528   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6049FAC8(int a1)
{
  int v2; // r0
  int v3; // r5

  *(_DWORD *)a1 = off_60BFDC70;
  FIELD_U32(a1, 4) = &off_60BFDCA4;
  FIELD_U32(a1, 8) = &off_60BFDCB4;
  FIELD_U32(a1, 12) = &off_60BFDCD8;
  FIELD_U32(a1, 16) = a1;
  FIELD_U32(a1, 20) = 0;
  StateMgr_ctor((StateMgr *)(a1 + 24), (StateExecuter *)(a1 + 8), (StateBase *)&dword_60CA0BAC);
  FIELD_U32(a1, 4) = &off_60BFDC94;
  FIELD_U32(a1, 44) = &off_60BFD790;
  sub_60475900((sead_IDisposer *)(a1 + 44), a1 + 3572, 3);
  FIELD_U32(a1, 44) = &off_60BFD790;
  FIELD_U32(a1, 3572) = 0;
  FIELD_U32(a1, 3576) = &sead__SafeStringBase__vtable;
  FIELD_U32(a1, 3580) = &byte_60B3BA34;
  FIELD_U32(a1, 3584) = 0;
  FIELD_U8(a1, 3588) = 0;
  FIELD_U32(a1, 3592) = 0;
  FIELD_U32(a1, 3596) = &sead__SafeStringBase__vtable;
  FIELD_U32(a1, 3600) = &byte_60B3BA34;
  FIELD_U32(a1, 3604) = 0;
  FIELD_U8(a1, 3608) = 0;
  FIELD_U32(a1, 3612) = 0;
  FIELD_U32(a1, 3616) = &sead__SafeStringBase__vtable;
  FIELD_U32(a1, 3620) = &byte_60B3BA34;
  FIELD_U32(a1, 3624) = 0;
  FIELD_U8(a1, 3628) = 0;
  FIELD_U32(a1, 3632) = 0;
  SE_SYS_DECIDE_ref_50208C(a1 + 3636);
  sub_6050B4E4(a1 + 5716);
  sub_60557FE4(a1 + 9296);
  sub_6050A308(a1 + 12988);
  sub_6045BF30();
  sub_6045BF30();
  sub_6045BF30();
  sub_6045BF30();
  sub_6045BF30();
  FIELD_U32(a1, 22480) = 3;
  FIELD_U32(a1, 22484) = 0;
  FIELD_U16(a1, 22504) = 0;
  FIELD_U32(a1, 22500) = 0;
  v2 = a1 + 22508;
  v3 = 182268;
  do
  {
    v3 -= 2988;
    v2 = sub_604024E0(v2) + 2988;
  }
  while ( v3 );
  FIELD_U8(a1, 20308) = 0;
  FIELD_U8(a1, 20309) = 0;
  FIELD_U8(a1, 20310) = 0;
  memset((void *)(a1 + 20204), 0, 88);
  FIELD_U32(a1, 22356) = 0;
  FIELD_U32(a1, 22352) = 0;
  FIELD_U32(a1, 22348) = 0;
  FIELD_U32(a1, 22344) = 0;
  FIELD_U32(a1, 22340) = 0;
  FIELD_U32(a1, 22336) = 0;
  FIELD_U32(a1, 22332) = 0;
  return a1;
}
