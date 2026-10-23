/* sub_608F5830
 * address: 0x608F5830   size: 216   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_608F5830(int *a1, int a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60CCEE20 & ~(1620006988 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CCEE20) )
  {
    dword_60CCEE24 = -1090519040;
    dword_60CCEE28 = 0;
    dword_60CCEE2C = 0;
    dword_60CCEE30 = 0;
    dword_60CCEE34 = 1056964608;
    dword_60CCEE44 = 0;
    dword_60CCEE40 = 0;
    dword_60CCEE3C = 0;
    dword_60CCEE38 = 0;
    dword_60CCEE48 = 1056964608;
    dword_60CCEE4C = 0;
    dword_60CCEE50 = 0;
    dword_60CCEE54 = 1065353216;
    dword_60CCEE58 = 1056964608;
    dword_60CCEE5C = 1065353216;
    dword_60CCEE60 = 0;
    dword_60CCEE64 = 0;
    dword_60CCEE68 = 0;
    _cxa_guard_release(&dword_60CCEE20);
  }
  if ( a1 )
    qmemcpy(a1, &dword_60CCEE24, 0x48u);
  if ( a2 )
  {
    FIELD_U16(a2, 2) = 1;
    FIELD_U8(a2, 1) = 0;
    *(_BYTE *)a2 = 0;
  }
}
