/* sub_6091A624
 * address: 0x6091A624   size: 288   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_6091A624(int a1, int (__fastcall ***a2)(_DWORD, int *), unsigned int a3, int a4, float a5, int a6)
{
  char v6; // r12
  int v12; // r6
  bool v13; // zf
  int v14; // r3

  if ( ((unsigned int)&dword_60CCFC7C & ~(1620158032 << v6) & 1) == 0 && _cxa_guard_acquire(&dword_60CCFC7C) )
  {
    dword_60CCFC78 = (int)&off_60C5D4D8;
    _cxa_guard_release(&dword_60CCFC7C);
  }
  if ( !a2 )
  {
    v12 = 0;
    if ( !a3 )
      return;
    goto LABEL_10;
  }
  v12 = (**a2)(a2, &dword_60CCFC78);
  if ( v12 )
    v12 = (int)a2;
  if ( a3 )
  {
LABEL_10:
    if ( (a3 & 1) != 0 )
      dword_60CC7894(FIELD_U32(v12, 192), 0, a4, 15);
    v13 = (a3 & 6) == 0;
    if ( (a3 & 6) != 0 )
      v13 = FIELD_U32(a1, 60) == 0;
    if ( !v13 )
    {
      v14 = a3 & 4;
      if ( (a3 & 4) != 0 )
        v14 = 255;
      dword_60CC78A0(FIELD_U32(v12, 192), (a3 >> 1) & 1, a6, v14, a5);
    }
  }
}
