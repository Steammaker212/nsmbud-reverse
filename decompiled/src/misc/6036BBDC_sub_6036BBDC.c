/* sub_6036BBDC
 * address: 0x6036BBDC   size: 160   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_6036BBDC(CooliganSunglasses *this)
{
  char v1; // r12
  Actor *parent; // r5

  parent = FIELD_U32(this, 0x38);
  if ( ((unsigned int)&dword_60C7B364 & ~(1614199800 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
  {
    StageActor_RTTI = (int)&off_60BC0098;
    _cxa_guard_release(&dword_60C7B364);
  }
  if ( parent && (*(int (__fastcall **)(Actor *, int *))FIELD_U32(parent, 0x0))(parent, &StageActor_RTTI) == 1 )
    FIELD_U8(this, 0x217) = HIBYTE(parent[6].field_34) != 0;
  return StageActor__befreDraw(&FIELD_U32(this, 0x0));
}
