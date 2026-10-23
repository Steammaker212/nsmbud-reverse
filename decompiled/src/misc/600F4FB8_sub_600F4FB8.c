/* sub_600F4FB8
 * address: 0x600F4FB8   size: 212   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600F4FB8(int a1, int a2)
{
  char v2; // r12
  int v3; // r4
  int v4; // r5

  v3 = FIELD_U32(a2, 64);
  if ( ((unsigned int)&dword_60C856D0 & ~(1611616208 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C856D0) )
  {
    dword_60C856CC = (int)&off_60BC04AC;
    _cxa_guard_release(&dword_60C856D0);
  }
  v4 = 0;
  if ( v3 && (**(int (__fastcall ***)(int, int *))v3)(v3, &dword_60C856CC) == 1 )
  {
    if ( (FIELD_U8(v3, 6392) & 0x20) != 0 || FIELD_F32(v3, 6384) == 0.0 )
    {
      sub_6041838C((ModelAnimation *)(v3 + 6368));
      FIELD_U32(v3, 6388) = 1065353216;
    }
    SE_EMY_DOWN_ref_F50A4(v3);
    return 1;
  }
  return v4;
}
