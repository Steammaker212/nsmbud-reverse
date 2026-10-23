/* sub_6013D370
 * address: 0x6013D370   size: 160   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6013D370(int a1, int a2)
{
  char v2; // r12
  _BYTE *v3; // r4
  int v4; // r5

  v3 = *(_BYTE **)(a2 + 64);
  if ( ((unsigned int)dword_60C87BD0 & ~(1611912072 << v2) & 1) == 0 && _cxa_guard_acquire(dword_60C87BD0) )
  {
    dword_60C87BCC = (int)&off_60BC04AC;
    _cxa_guard_release(dword_60C87BD0);
  }
  v4 = 0;
  if ( v3 && (**(int (__fastcall ***)(_BYTE *, int *))v3)(v3, &dword_60C87BCC) == 1 )
  {
    (*(void (__fastcall **)(_BYTE *))(*(_DWORD *)v3 + 104))(v3);
    v4 = 1;
    v3[19] = 1;
  }
  return v4;
}
