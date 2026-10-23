/* penguin_glasses_ref
 * address: 0x6036B894   size: 328   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall penguin_glasses_ref(CooliganSunglasses *this)
{
  char v1; // r12
  Actor *parent; // r5
  int ret; // r6
  void *resource; // r0
  sead__SafeString identifier; // [sp+18h] [bp-18h] BYREF

  parent = FIELD_U32(this, 0x38);
  if ( ((unsigned int)&dword_60C95E08 & ~(1614198964 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C95E08) )
  {
    dword_60C95E04 = (int)&off_60BC04AC;
    _cxa_guard_release(&dword_60C95E08);
  }
  ret = 2;
  if ( parent && (*(int (__fastcall **)(Actor *, int *))FIELD_U32(parent, 0x0))(parent, &dword_60C95E04) == 1 )
  {
    resource = (void *)Profile__getResArchiveById(FIELD_U32(this, 0xC), 0);
    identifier.vtable = &sead__SafeStringBase__vtable;
    identifier.cstr = "penguin_glasses";
    FIELD_U32(this, 0x284) = (void *)Resource_getModel2(resource, &identifier, 0, 0, 0, 0, 0, 0, 0);
    FIELD_F32(this, 0x1F4) = 16.0;
    FIELD_F32(this, 0x1F8) = 16.0;
    sub_6036A318((int)parent, (int)&FIELD_U32(this, 0x28C));
    (*(void (__fastcall **)(void *, int *))(*(_DWORD *)FIELD_U32(this, 0x284) + 0x3C))(FIELD_U32(this, 0x284), &FIELD_U32(this, 0x28C));
    (*(void (__fastcall **)(void *))(*(_DWORD *)FIELD_U32(this, 0x284) + 0x38))(FIELD_U32(this, 0x284));
    ret = 1;
    LODWORD(FIELD_F32(this, 0x6C)) = FIELD_U32(this, 0x298);
    LODWORD(FIELD_F32(this, 0x70)) = FIELD_U32(this, 0x2A8);
    LODWORD(FIELD_F32(this, 0x74)) = FIELD_U32(this, 0x2B8);
  }
  return ret;
}
