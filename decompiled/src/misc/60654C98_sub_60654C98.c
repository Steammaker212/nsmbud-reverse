/* sub_60654C98
 * address: 0x60654C98   size: 164   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60654C98(int a1, int a2, _DWORD *a3)
{
  char v3; // r12
  int v4; // r4
  int v6; // r6

  v4 = FIELD_U32(a2, 64);
  if ( ((unsigned int)&dword_60CB6380 & ~(1617251508 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60CB6380) )
  {
    dword_60CB637C = (int)&off_60C14188;
    _cxa_guard_release(&dword_60CB6380);
  }
  v6 = 0;
  if ( v4 && (**(int (__fastcall ***)(int, int *))v4)(v4, &dword_60CB637C) == 1 )
  {
    v6 = 1;
    FIELD_U32(v4, 6876) = *a3;
    FIELD_U8(v4, 6880) = 1;
  }
  return v6;
}
