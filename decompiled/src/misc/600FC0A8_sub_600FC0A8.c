/* sub_600FC0A8
 * address: 0x600FC0A8   size: 160   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_600FC0A8(int a1)
{
  char v1; // r12
  int v2; // r4

  v2 = FIELD_U32(a1, 7244);
  if ( ((unsigned int)&dword_60C8110C & ~(1611645124 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C8110C) )
  {
    dword_60C81108 = (int)&off_60BC2CD4;
    _cxa_guard_release(&dword_60C8110C);
  }
  if ( v2 )
  {
    if ( (**(int (__fastcall ***)(int, int *))v2)(v2, &dword_60C81108) == 1 )
      (*(void (__fastcall **)(int, void *))(*(_DWORD *)v2 + 192))(v2, &unk_60C85D74);
  }
}
