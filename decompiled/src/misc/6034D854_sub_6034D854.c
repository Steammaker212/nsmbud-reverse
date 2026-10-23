/* sub_6034D854
 * address: 0x6034D854   size: 276   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6034D854(StateActor *a1)
{
  char v1; // r12
  StageActor *owner; // r1

  if ( ((unsigned int)algn_60C94CEC & ~(1614076016 << v1) & 1) == 0 && _cxa_guard_acquire((__guard *)algn_60C94CEC) )
  {
    dword_60C94D38 = (int)&sead__SafeStringBase__vtable;
    dword_60C94D3C = (int)"walk";
    sub_60000288();
    _cxa_guard_release((__guard *)algn_60C94CEC);
  }
  *(_DWORD *)&a1[1]._.collisionMgr[88] = 0;
  sub_6040F4B8(*(_DWORD *)&a1[1]._.collisionMgr[76], &dword_60C94D38, 1);
  owner = a1[1]._._.aCollider.owner;
  if ( owner != (StageActor *)1 )
  {
    a1[1]._._.aCollider.field_44 = (int)owner;
    a1[1]._._.aCollider.owner = (StageActor *)1;
    (*(void (__fastcall **)(StateActor *))(FIELD_U32(a1, 0x0) + 696))(a1);
  }
  FIELD_F32(a1, 0x78) = 0.0;
  FIELD_F32(a1, 0x7C) = 2.5;
  FIELD_F32(a1, 0x80) = 0.0;
  FIELD_U32(a1, 0x50) = StageActor__directionToPlayerX(a1, &FIELD_U32(a1, 0x6C));
  a1[1]._._.aCollider.info.field_24 = 1;
  return 6440;
}
