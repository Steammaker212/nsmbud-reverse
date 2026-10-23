/* sub_6076EAB8
 * address: 0x6076EAB8   size: 116   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

ModelAnimation *__fastcall sub_6076EAB8(int a1)
{
  ModelAnimation *result; // r0
  unsigned int v3; // r5
  int v4; // r0

  result = *(ModelAnimation **)(a1 + 10016);
  if ( result != (ModelAnimation *)2 )
  {
    sub_602360C0(a1 + 10560);
    v3 = FIELD_S8(a1, 84);
    v4 = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 1224))(a1);
    sub_60236E40(v3, v4, (Vec3 *)(a1 + 10624), 0, 0);
    return sub_607505EC((int *)(a1 + 10636), (int *)(a1 + 10624));
  }
  return result;
}
