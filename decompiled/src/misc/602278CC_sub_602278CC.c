/* sub_602278CC
 * address: 0x602278CC   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_602278CC(_DWORD *result)
{
  _DWORD *v1; // r1
  _DWORD v2[14]; // [sp+0h] [bp-38h] BYREF

  v1 = (_DWORD *)result[3];
  if ( v1 )
  {
    v2[0] = 1065353216;
    v2[1] = 0;
    v2[2] = 0;
    v2[4] = 0;
    v2[5] = 1065353216;
    v2[6] = 0;
    v2[8] = 0;
    v2[9] = 0;
    v2[10] = 1065353216;
    v2[3] = result[4];
    v2[7] = result[5];
    v2[11] = result[6];
    return (_DWORD *)(*(int (__fastcall **)(_DWORD, _DWORD *))(*(_DWORD *)*v1 + 60))(*v1, v2);
  }
  return result;
}
