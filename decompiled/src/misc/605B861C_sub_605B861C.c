/* sub_605B861C
 * address: 0x605B861C   size: 176   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605B861C(int a1, int a2)
{
  char v2; // r12
  int v3; // r4

  v3 = FIELD_U32(a2, 64);
  if ( ((unsigned int)&dword_60CB060C & ~(1616610868 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CB060C) )
  {
    dword_60CB0608 = (int)&off_60C0970C;
    _cxa_guard_release(&dword_60CB060C);
  }
  if ( v3 && (**(int (__fastcall ***)(int, int *))v3)(v3, &dword_60CB0608) == 1 && !FIELD_U8(v3, 6104) )
  {
    FIELD_U32(v3, 6840) = 1045220557;
    FIELD_U32(v3, 7228) = 60;
  }
  return 1;
}
