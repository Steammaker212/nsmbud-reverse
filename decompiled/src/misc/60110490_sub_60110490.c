/* sub_60110490
 * address: 0x60110490   size: 224   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60110490(int result)
{
  char v1; // r12
  int v2; // r4
  int v3; // r6
  int v4; // r10
  int v5; // r11
  int v6; // r5
  int v7; // r0

  v2 = result;
  v3 = FIELD_U32(result, 36);
  v4 = result + 32;
  if ( v3 != result + 32 )
  {
    v5 = FIELD_U32(result, 44);
    v6 = v3 - v5;
    do
    {
      if ( ((unsigned int)&dword_60C868C4 & ~(1611728124 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C868C4) )
      {
        dword_60C868C0 = (int)&off_60BCFCD8;
        _cxa_guard_release(&dword_60C868C4);
      }
      v7 = (**(int (__fastcall ***)(int, int *))v6)(v6, &dword_60C868C0);
      if ( v6 )
      {
        if ( v7 == 1 )
          FIELD_U8(v6, 6592) = 1;
      }
      v3 = FIELD_U32(v3, 4);
      v6 = v3 - v5;
      result = v4 - FIELD_U32(v2, 44);
    }
    while ( v3 - v5 != result );
  }
  return result;
}
