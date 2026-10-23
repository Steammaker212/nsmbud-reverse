/* sub_6029AE3C
 * address: 0x6029AE3C   size: 212   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_6029AE3C(int a1)
{
  char v1; // r12
  unsigned int result; // r0

  FIELD_U32(a1, 6664) = 1;
  FIELD_U32(a1, 156) = 0;
  FIELD_U32(a1, 160) = 0;
  FIELD_U32(a1, 164) = 0;
  FIELD_U32(a1, 144) = 0x40000000;
  FIELD_U32(a1, 148) = 0x40000000;
  FIELD_U32(a1, 152) = 0x40000000;
  FIELD_U32(a1, 620) = 0;
  FIELD_U32(a1, 6836) = 0;
  if ( ((unsigned int)&algn_60C8FFA3[1] & ~(1613344400 << v1) & 1) == 0
    && _cxa_guard_acquire((__guard *)&algn_60C8FFA3[1]) )
  {
    byte_60C8FFA0 = 1;
    byte_60C8FFA1 = 1;
    byte_60C8FFA2 = 5;
    _cxa_guard_release((__guard *)&algn_60C8FFA3[1]);
  }
  EnemyFreezeMgr_setFlags((EnemyFreezeMgr *)(a1 + 6152), (EnemyFreezeMgr_Flags *)&byte_60C8FFA0);
  FIELD_U32(a1, 6244) = 2;
  result = FIELD_U32(a1, 20) >> 28;
  if ( result <= 3 )
    __asm { ADD             PC, R0, R1 }
  return result;
}
