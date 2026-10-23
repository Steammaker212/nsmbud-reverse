/* sub_603F32D4
 * address: 0x603F32D4   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603F32D4(int a1, int *a2)
{
  int result; // r0
  _DWORD *v3; // r0
  int v4; // r2
  int v5; // r2
  bool v6; // zf

  result = *a2;
  if ( *a2 == 5 )
  {
    result = dword_60C9CF0C;
    if ( FIELD_U32(dword_60C99DD4, 764) == 3 && dword_60CBC000 && !FIELD_U8(dword_60CBC000, 2715) )
    {
      result = dword_60C9CF0C + 1444;
      v4 = FIELD_U32(dword_60CD0B40, 36);
      if ( FIELD_U32(dword_60CD0B40, 32) > 9u )
        v4 += 36;
      v5 = *(_DWORD *)(*(_DWORD *)v4 + 72);
      v6 = v5 == 0;
      if ( v5 )
        v6 = FIELD_U8(dword_60C9CF0C, 5108) == 0;
      if ( !v6 )
        return sub_60473B88(dword_60C9CF0C + 1480);
    }
  }
  else if ( result == 3 )
  {
    v3 = *(_DWORD **)(dword_60CD0B40 + 36);
    if ( FIELD_U32(dword_60CD0B40, 32) > 9u )
      v3 += 9;
    sub_604431BC(DrawMgr_instance, *v3, 0);
    return sub_60443298(DrawMgr_instance);
  }
  return result;
}
