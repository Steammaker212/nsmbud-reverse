/* sub_6066541C
 * address: 0x6066541C   size: 148   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6066541C(int a1, int a2)
{
  char v2; // r12
  int v3; // r4
  int v4; // r5

  v3 = FIELD_U32(a2, 64);
  if ( ((unsigned int)&dword_60CB6B7C & ~(1617318964 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CB6B7C) )
  {
    dword_60CB6B78 = (int)&off_60BCFCD8;
    _cxa_guard_release(&dword_60CB6B7C);
  }
  v4 = 0;
  if ( v3 && (**(int (__fastcall ***)(int, int *))v3)(v3, &dword_60CB6B78) == 1 )
  {
    v4 = 1;
    FIELD_U32(v3, 7272) = 30;
  }
  return v4;
}
