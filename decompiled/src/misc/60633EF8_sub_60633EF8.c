/* sub_60633EF8
 * address: 0x60633EF8   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_WORD *__fastcall sub_60633EF8(int a1)
{
  _WORD *result; // r0
  __int16 v3; // t1
  int v4; // [sp+0h] [bp-10h] BYREF
  int target; // [sp+4h] [bp-Ch] BYREF

  v3 = FIELD_U16(a1, 6800);
  result = (_WORD *)(a1 + 6800);
  *result = v3 - 1;
  if ( (__int16)(v3 - 1) <= 0 )
  {
    *result = 0;
    sub_600035C0(a1);
    CollisionActor__handleSpeed((CollisionActor *)a1);
    target = FIELD_U32(a1, 6804);
    v4 = 0x1000000;
    return (_WORD *)moveValueTo((int *)(a1 + 164), &target, &v4);
  }
  return result;
}
