/* sub_60022CC0
 * address: 0x60022CC0   size: 244   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60022CC0(int a1, int *a2, int a3)
{
  bool v6; // zf
  int result; // r0
  int v8; // r1

  if ( a3 )
  {
    if ( *a2 != 2 || (sead_IDisposer *(__fastcall *)(int))a2[1] != AreaTask_create )
    {
      FIELD_U8(a1, 19) = 0;
      sub_60815900(dword_60CC6B68, a3);
      FIELD_U32(a1, 40) = a3;
    }
  }
  else
  {
    FIELD_U8(a1, 19) = 0;
  }
  v6 = dword_60C9A230 == 0;
  if ( dword_60C9A230 )
    v6 = FIELD_U8(dword_60C9A230, 2084) == 0;
  if ( v6
    && FIELD_U32(a1, 32) == 2
    && *(sead_IDisposer *(__fastcall **)(int))(a1 + 36) == AreaTask_create
    && *a2 == 2
    && (sead_IDisposer *(__fastcall *)(int))a2[1] == AreaTask_create
    && FIELD_U32(dword_60C99DD4, 764) != 3 )
  {
    sub_60024074(*(_DWORD *)a1, FIELD_U8(a1, 4));
  }
  result = *a2;
  v8 = a2[1];
  FIELD_U32(a1, 32) = *a2;
  FIELD_U32(a1, 36) = v8;
  return result;
}
