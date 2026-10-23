/* sub_60117ABC
 * address: 0x60117ABC   size: 264   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_60117ABC(_DWORD *a1)
{
  int v2; // r5
  char v3; // r12

  v2 = (*(int (__fastcall **)(_DWORD *))(*a1 + 628))(a1);
  if ( ((unsigned int)&dword_60C86B28 & ~(1611758312 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C86B28) )
  {
    dword_60C86B24 = (int)&off_60BC2CB4;
    _cxa_guard_release(&dword_60C86B28);
  }
  if ( v2 && (**(int (__fastcall ***)(int, int *))v2)(v2, &dword_60C86B24) == 1 && FIELD_U8(v2, 7644) )
  {
    *((_BYTE *)a1 + 9316) = 0;
    (*(void (__fastcall **)(_DWORD *, int *))(*a1 + 192))(a1, &dword_60C86C04);
  }
  if ( sub_60418548(**(_DWORD **)(a1[1576] + 12) + 4) )
    (*(void (__fastcall **)(_DWORD *, int))(*a1 + 780))(a1, 1);
  JUMPOUT(0x6011B35C);
}
