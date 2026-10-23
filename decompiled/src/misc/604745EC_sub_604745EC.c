/* sub_604745EC
 * address: 0x604745EC   size: 144   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604745EC(int result, unsigned int a2, int a3)
{
  unsigned int v3; // r2
  _DWORD *v4; // r0
  unsigned int v5; // r2
  _DWORD *v6; // r0
  unsigned int v7; // r2
  _DWORD *v8; // r0

  if ( a3 )
  {
    if ( a3 == 2 )
    {
      v7 = FIELD_U32(result, 3508);
      v8 = *(_DWORD **)(result + 3512);
      if ( v7 > a2 )
        v8 += 5 * a2;
      return (*(int (__fastcall **)(_DWORD, int))(*(_DWORD *)*v8 + 92))(*v8, 2);
    }
    else if ( a3 == 1 )
    {
      v3 = FIELD_U32(result, 3508);
      v4 = *(_DWORD **)(result + 3512);
      if ( v3 > a2 )
        v4 += 5 * a2;
      return (*(int (__fastcall **)(_DWORD, int))(*(_DWORD *)*v4 + 92))(*v4, 1);
    }
  }
  else
  {
    v5 = FIELD_U32(result, 3508);
    v6 = *(_DWORD **)(result + 3512);
    if ( v5 > a2 )
      v6 += 5 * a2;
    return (*(int (__fastcall **)(_DWORD, _DWORD))(*(_DWORD *)*v6 + 92))(*v6, 0);
  }
  return result;
}
