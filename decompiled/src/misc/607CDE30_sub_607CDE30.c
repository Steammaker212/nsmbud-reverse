/* sub_607CDE30
 * address: 0x607CDE30   size: 244   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_607CDE30(int a1, int a2)
{
  char v2; // r12
  int v5; // r5
  int v6; // r0

  v5 = FIELD_U32(a1, 64);
  if ( ((unsigned int)&dword_60C7B408 & ~(1618796112 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B408) )
  {
    dword_60C7B404 = (int)&off_60BC00B0;
    _cxa_guard_release(&dword_60C7B408);
  }
  if ( v5
    && (**(int (__fastcall ***)(int, int *))v5)(v5, &dword_60C7B404) == 1
    && FIELD_U32(v5, 11360)
    && !sub_60766708(v5) )
  {
    v6 = FIELD_U32(a1, 140);
    if ( v6 == 15 )
    {
      if ( sub_607D1A3C(v5, a2) == 1 )
      {
LABEL_13:
        FIELD_U8(a2, 110) |= 2u;
        return;
      }
      v6 = FIELD_U32(a1, 140);
    }
    if ( v6 == 16 && sub_607D2194(v5, FIELD_U32(a2, 64)) == 1 )
      goto LABEL_13;
  }
}
