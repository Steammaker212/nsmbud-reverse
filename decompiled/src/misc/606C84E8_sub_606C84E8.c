/* sub_606C84E8
 * address: 0x606C84E8   size: 228   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_606C84E8(int a1, int a2)
{
  int v2; // r4
  int v3; // r5
  char v4; // r12

  v2 = FIELD_U32(a1, 144);
  v3 = (*(int (__fastcall **)(int, int, int))(*(_DWORD *)a2 + 32))(a2, a1, 3);
  if ( ((unsigned int)&dword_60C88A50 & ~(1617724704 << v4) & 1) == 0 && _cxa_guard_acquire(&dword_60C88A50) )
  {
    dword_60C88A4C = (int)&off_60BC00C8;
    _cxa_guard_release(&dword_60C88A50);
  }
  if ( v2 && (**(int (__fastcall ***)(int, int *))v2)(v2, &dword_60C88A4C) == 1 && (FIELD_U8(v2, 6252) & 1) != 0 )
  {
    if ( FIELD_U8(v2, 7097) )
    {
      FIELD_U8(v2, 7088) = FIELD_U8(v3, 84);
      FIELD_U32(v2, 7084) = FIELD_U8(v3, 533) == 2;
    }
  }
}
