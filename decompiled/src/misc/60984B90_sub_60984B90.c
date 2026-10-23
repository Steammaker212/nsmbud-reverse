/* sub_60984B90
 * address: 0x60984B90   size: 316   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60984B90(int a1, int a2)
{
  int (__fastcall ***v4)(_DWORD); // r6
  char v5; // r12
  char v6; // r12
  int *v7; // r0
  int result; // r0

  v4 = (int (__fastcall ***)(_DWORD))sub_6085E5DC(a1);
  if ( ((unsigned int)&dword_60CD0BE4 & ~(1620593588 << v5) & 1) == 0 && _cxa_guard_acquire(&dword_60CD0BE4) )
  {
    if ( ((unsigned int)&dword_60CC7F14 & ~(1620593628 << v6) & 1) == 0 && _cxa_guard_acquire(&dword_60CC7F14) )
    {
      dword_60CC7F10 = 0;
      _cxa_guard_release(&dword_60CC7F14);
    }
    dword_60CD0BE0 = (int)&dword_60CC7F10;
    _cxa_guard_release(&dword_60CD0BE4);
  }
  if ( v4 && (v7 = (int *)(**v4)(v4)) != 0 )
  {
    while ( v7 != &dword_60CD0BE0 )
    {
      v7 = (int *)*v7;
      if ( !v7 )
        goto LABEL_11;
    }
  }
  else
  {
LABEL_11:
    v4 = 0;
  }
  if ( sub_60987834(a2, FIELD_U32(a1, 172), FIELD_U16(a1, 214), v4) == 1 )
  {
    FIELD_U32(a1, 276) = 2;
    FIELD_U16(a1, 216) |= 4u;
    result = FIELD_U32(a2, 44);
    FIELD_U32(a1, 280) = result;
  }
  else
  {
    result = FIELD_U8(a2, 49);
    if ( !FIELD_U8(a2, 49) )
    {
      result = sub_60987E64(a2, a1);
      FIELD_U32(a1, 284) = result;
    }
  }
  return result;
}
