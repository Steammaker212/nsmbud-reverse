/* sub_6065C06C
 * address: 0x6065C06C   size: 224   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6065C06C(int a1)
{
  char v1; // r12
  int v3; // r6
  int v4; // r10
  int v5; // r11
  int v6; // r5
  int v7; // r0

  v3 = FIELD_U32(a1, 36);
  v4 = a1 + 32;
  if ( v3 != a1 + 32 )
  {
    v5 = FIELD_U32(a1, 44);
    v6 = v3 - v5;
    do
    {
      if ( ((unsigned int)&dword_60C7B36C & ~(1617281240 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B36C) )
      {
        Actor_RTTI = (int)&off_60BC00A4;
        _cxa_guard_release(&dword_60C7B36C);
      }
      v7 = (**(int (__fastcall ***)(int, int *))v6)(v6, &Actor_RTTI);
      if ( v6 && v7 == 1 )
        FIELD_U8(v6, 19) = 1;
      v3 = FIELD_U32(v3, 4);
      v6 = v3 - v5;
    }
    while ( v3 - v5 != v4 - FIELD_U32(a1, 44) );
  }
  return 1;
}
