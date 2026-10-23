/* sub_6030C208
 * address: 0x6030C208   size: 188   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_6030C208(int a1, int a2)
{
  int v2; // r4
  unsigned int result; // r0
  char v4; // r12
  bool v5; // zf

  v2 = FIELD_U32(a1, 144);
  result = (*(int (__fastcall **)(int, int, int))(*(_DWORD *)a2 + 32))(a2, a1, 3);
  v5 = v2 == 0;
  if ( v2 )
    v5 = result == 0;
  if ( !v5 )
  {
    result = (unsigned __int8)(FIELD_U8(result, 533) - 1);
    if ( result <= 1 )
    {
      if ( ((unsigned int)&dword_60C93144 & ~(1613808220 << v4) & 1) == 0 && _cxa_guard_acquire(&dword_60C93144) )
      {
        dword_60C93140 = (int)&off_60BC04AC;
        _cxa_guard_release(&dword_60C93144);
      }
      result = (**(int (__fastcall ***)(int, int *))v2)(v2, &dword_60C93140);
      if ( result == 1 )
      {
        FIELD_U8(v2, 7607) = 1;
        return 7607;
      }
    }
  }
  return result;
}
