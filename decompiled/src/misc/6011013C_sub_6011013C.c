/* sub_6011013C
 * address: 0x6011013C   size: 236   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6011013C(int a1)
{
  char v1; // r12
  int v3; // r5
  int v4; // r10
  int v5; // r11
  int (__fastcall ***v6)(_DWORD, int *); // r6
  int v7; // r0

  v3 = FIELD_U32(a1, 36);
  v4 = a1 + 32;
  if ( v3 != a1 + 32 )
  {
    v5 = FIELD_U32(a1, 44);
    v6 = (int (__fastcall ***)(_DWORD, int *))(v3 - v5);
    do
    {
      if ( ((unsigned int)&dword_60C868C4 & ~(1611727272 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C868C4) )
      {
        dword_60C868C0 = (int)&off_60BCFCD8;
        _cxa_guard_release(&dword_60C868C4);
      }
      v7 = (**v6)(v6, &dword_60C868C0);
      if ( v6 && v7 == 1 )
        sub_601118E8(v6);
      v3 = FIELD_U32(v3, 4);
      v6 = (int (__fastcall ***)(_DWORD, int *))(v3 - v5);
    }
    while ( v3 - v5 != v4 - FIELD_U32(a1, 44) );
  }
  FIELD_U8(a1, 720) = 0;
  FIELD_U32(a1, 712) = 0;
  return 0;
}
