/* sub_605EC52C
 * address: 0x605EC52C   size: 256   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_605EC52C(int a1, int a2)
{
  int v2; // r4
  int v3; // r5
  char v4; // r12
  int v5; // r1
  int v6; // r2

  v2 = FIELD_U32(a1, 144);
  v3 = (*(int (__fastcall **)(int, int, int))(*(_DWORD *)a2 + 32))(a2, a1, 3);
  if ( (unsigned __int8)(FIELD_U8(v3, 533) - 1) <= 1u )
  {
    if ( ((unsigned int)&dword_60CB1D4C & ~(1616823672 << v4) & 1) == 0 && _cxa_guard_acquire(&dword_60CB1D4C) )
    {
      dword_60CB1D48 = (int)&off_60BC00C8;
      _cxa_guard_release(&dword_60CB1D4C);
    }
    if ( v2 && (**(int (__fastcall ***)(int, int *))v2)(v2, &dword_60CB1D48) == 1 )
    {
      v5 = FIELD_S8(v3, 84);
      if ( (unsigned __int8)v5 == 255 )
      {
        if ( FIELD_U8(v3, 533) != 2 )
          return;
        FIELD_U8(v2, 6603) = 1;
      }
      else
      {
        v6 = v2;
        if ( (unsigned __int8)v5 < 4u )
          v6 = v2 + v5;
        FIELD_U8(v6, 6560) = v5;
      }
      FIELD_U32(v2, 6584) = 4;
    }
  }
}
