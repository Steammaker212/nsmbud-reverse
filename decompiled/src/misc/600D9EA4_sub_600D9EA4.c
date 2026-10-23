/* sub_600D9EA4
 * address: 0x600D9EA4   size: 144   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600D9EA4(float *a1)
{
  int result; // r0

  KoopalingBase__vf5AC((int)a1);
  *((_BYTE *)a1 + 8184) = 0;
  if ( (*(int (__fastcall **)(float *))(*(_DWORD *)a1 + 724))(a1) == 1 && *((_DWORD *)a1 + 1795) == 1 )
    result = (*(int (__fastcall **)(float *))(*(_DWORD *)a1 + 1080))(a1);
  else
    result = (int)(float)((float)(*(int (__fastcall **)(float *))(*(_DWORD *)a1 + 1076))(a1) / a1[1940]);
  *((_DWORD *)a1 + 1782) = result;
  return result;
}
