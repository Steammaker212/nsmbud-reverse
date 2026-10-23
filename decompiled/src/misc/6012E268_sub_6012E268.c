/* sub_6012E268
 * address: 0x6012E268   size: 164   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6012E268(int a1, int a2)
{
  char v2; // r12
  int v3; // r4
  int v4; // r5

  v3 = FIELD_U32(a2, 64);
  if ( ((unsigned int)&dword_60C87138 & ~(1611850368 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C87138) )
  {
    dword_60C87134 = (int)&off_60BC00E0;
    _cxa_guard_release(&dword_60C87138);
  }
  v4 = 0;
  if ( v3 && (**(int (__fastcall ***)(int, int *))v3)(v3, &dword_60C87134) == 1 )
  {
    v4 = 1;
    FIELD_F32(v3, 120) = -FIELD_F32(v3, 120);
    FIELD_F32(v3, 124) = -FIELD_F32(v3, 124);
  }
  return v4;
}
