/* sub_6003B5E0
 * address: 0x6003B5E0   size: 344   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6003B5E0(int a1)
{
  int v2; // r1
  float v3; // s0
  char v4; // r12
  int v5; // r2
  int v6; // r1

  v2 = 2;
  if ( FIELD_U8(a1, 11676) )
    v2 = 1;
  FIELD_U32(a1, 11492) = v2;
  ColliderMgr_add(ColliderMgr_instance, (ColliderBase *)(a1 + 10032));
  ColliderMgr_add(ColliderMgr_instance, (ColliderBase *)(a1 + 10432));
  v3 = FIELD_F32(a1, 11144);
  FIELD_U32(a1, 11464) = v3 >= 0.0;
  FIELD_U32(a1, 80) = v3 < 0.0;
  if ( ((unsigned int)dword_60C80440 & ~(1610856052 << v4) & 1) == 0 && _cxa_guard_acquire(dword_60C80440) )
  {
    dword_60C80448 = FIELD_U32(a1, 11592);
    dword_60C8044C = FIELD_U32(a1, 11588);
    _cxa_guard_release(dword_60C80440);
  }
  v5 = FIELD_U32(a1, 116);
  v6 = FIELD_U32(a1, 112);
  FIELD_U32(a1, 11084) = dword_60C80430[FIELD_U32(a1, 11464) + 6];
  FIELD_U32(a1, 11088) = v6;
  FIELD_U32(a1, 11092) = v5;
  FIELD_U32(a1, 11644) = 0;
  FIELD_U32(a1, 11060) = FIELD_U32(a1, 108);
  FIELD_U32(a1, 11064) = v6;
  FIELD_U32(a1, 11068) = v5;
  FIELD_U32(a1, 132) = 0;
  FIELD_U32(a1, 104) = 1036831949;
  FIELD_U8(a1, 11677) = 1;
  FIELD_U8(a1, 11691) = 0;
  return 11691;
}
