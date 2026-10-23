/* sub_6061B14C
 * address: 0x6061B14C   size: 180   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6061B14C(int a1, int a2)
{
  char v2; // r12
  int v3; // r4
  int v4; // r5

  v3 = FIELD_U32(a2, 144);
  if ( ((unsigned int)&dword_60CB34B4 & ~(1617015140 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CB34B4) )
  {
    dword_60CB34B0 = (int)&off_60BC00C8;
    _cxa_guard_release(&dword_60CB34B4);
  }
  v4 = 0;
  if ( v3 )
  {
    if ( (**(int (__fastcall ***)(int, int *))v3)(v3, &dword_60CB34B0) == 1 )
    {
      v4 = 1;
      if ( !FIELD_U8(v3, 6856) )
      {
        v4 = 1;
        FIELD_U8(v3, 6856) = 1;
        FIELD_U32(v3, 6848) = 32;
      }
    }
  }
  return v4;
}
