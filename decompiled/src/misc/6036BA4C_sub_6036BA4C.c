/* sub_6036BA4C
 * address: 0x6036BA4C   size: 356   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_6036BA4C(CooliganSunglasses *this)
{
  char v1; // r12
  Actor *parent; // r5

  if ( FIELD_U8(this, 0x288) )
    JUMPOUT(0x6000100C);
  parent = FIELD_U32(this, 0x38);
  if ( ((unsigned int)&dword_60C95E08 & ~(1614199588 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C95E08) )
  {
    dword_60C95E04 = (int)&off_60BC04AC;
    _cxa_guard_release(&dword_60C95E08);
  }
  if ( parent )
  {
    if ( (*(int (__fastcall **)(Actor *, int *))FIELD_U32(parent, 0x0))(parent, &dword_60C95E04) == 1 )
    {
      sub_6036A318((int)parent, (int)&FIELD_U32(this, 0x28C));
      LODWORD(FIELD_F32(this, 0x6C)) = FIELD_U32(this, 0x298);
      LODWORD(FIELD_F32(this, 0x70)) = FIELD_U32(this, 0x2A8);
      LODWORD(FIELD_F32(this, 0x74)) = FIELD_U32(this, 0x2B8);
    }
  }
}
