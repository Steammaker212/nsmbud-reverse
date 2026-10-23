/* sub_602FD158
 * address: 0x602FD158   size: 200   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_602FD158(int a1, int a2, int a3)
{
  Actor *v3; // r4
  int v4; // r6
  char v5; // r12
  int v6; // r5

  v3 = *(Actor **)(a3 + 64);
  v4 = FIELD_U32(a2, 64);
  if ( Actor__getProfileId(v3) != 475 )
    return 1;
  if ( ((unsigned int)&dword_60C87FA4 & ~(1613746576 << v5) & 1) == 0 && _cxa_guard_acquire(&dword_60C87FA4) )
  {
    dword_60C87FA0 = (int)&off_60BC7C30;
    _cxa_guard_release(&dword_60C87FA4);
  }
  v6 = 0;
  if ( v3 && (*(int (__fastcall **)(Actor *, int *))FIELD_U32(v3, 0x0))(v3, &dword_60C87FA0) == 1 )
    return v3[84].settings1 != FIELD_U32(v4, 8);
  return v6;
}
