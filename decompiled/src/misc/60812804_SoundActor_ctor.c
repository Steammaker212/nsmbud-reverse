/* SoundActor_ctor
 * address: 0x60812804   size: 224   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

SoundActor *__fastcall SoundActor_ctor(SoundActor *a1, int a2, int (__fastcall ***a3)(_DWORD, int *))
{
  char v3; // r12
  int (__fastcall ***v7)(_DWORD, int *); // r1
  int v8; // r0

  if ( ((unsigned int)&dword_60CC64A4 & ~(1619077156 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60CC64A4) )
  {
    dword_60CC64A0 = (int)off_60C28008;
    _cxa_guard_release(&dword_60CC64A4);
  }
  v7 = 0;
  if ( a3 )
  {
    v7 = (int (__fastcall ***)(_DWORD, int *))(**a3)(a3, &dword_60CC64A0);
    if ( v7 )
      v7 = a3;
  }
  if ( v7 )
    v7 += 2;
  nn__atk__SoundActor__ctor(a1, (int)v7);
  *(_DWORD *)FIELD_U32(a1, 0x0).nn_atk_SoundActor_data = SoundActor_vtable;
  FIELD_U32(a1, 0x88) = a2;
  *(_DWORD *)&FIELD_U32(a1, 0x0).nn_atk_SoundActor_data[120] = 0;
  FIELD_U32(a1, 0x7C) = -1;
  FIELD_U32(a1, 0x80) = 1;
  operator_new(1u);
  nullsub_61();
  FIELD_U32(a1, 0x84) = v8;
  return a1;
}
