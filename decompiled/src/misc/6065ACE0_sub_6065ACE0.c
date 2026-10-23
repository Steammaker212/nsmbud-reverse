/* sub_6065ACE0
 * address: 0x6065ACE0   size: 236   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6065ACE0(int a1)
{
  char v1; // r12
  int result; // r0
  int v4; // r5
  int v5; // r11
  int (__fastcall ***v6)(_DWORD, int *); // r6
  int v7; // r0

  result = 6168;
  FIELD_U8(a1, 6168) = 16;
  v4 = FIELD_U32(a1, 36);
  if ( v4 != a1 + 32 )
  {
    v5 = FIELD_U32(a1, 44);
    v6 = (int (__fastcall ***)(_DWORD, int *))(v4 - v5);
    do
    {
      if ( ((unsigned int)&dword_60CB676C & ~(1617276248 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60CB676C) )
      {
        dword_60CB6768 = (int)&off_60BC00C8;
        _cxa_guard_release(&dword_60CB676C);
      }
      v7 = (**v6)(v6, &dword_60CB6768);
      if ( v6 )
      {
        if ( v7 == 1 )
          sub_6065E0E0(v6);
      }
      v4 = FIELD_U32(v4, 4);
      v6 = (int (__fastcall ***)(_DWORD, int *))(v4 - v5);
      result = a1 + 32 - FIELD_U32(a1, 44);
    }
    while ( v4 - v5 != result );
  }
  return result;
}
