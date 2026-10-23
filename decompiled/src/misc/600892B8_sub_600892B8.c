/* sub_600892B8
 * address: 0x600892B8   size: 64   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_600892B8(BossBase *a1)
{
  _DWORD *id; // r1
  int *v2; // r2
  unsigned int v3; // r3
  unsigned int v4; // r1
  int v5; // r1

  id = (_DWORD *)a1[1]._._._._._.id;
  v2 = (int *)id[3];
  v3 = id[2];
  v4 = id[17];
  if ( v3 > v4 )
    v2 += v4;
  v5 = *v2;
  FIELD_F32(v5, 20) = *(float *)(*v2 + 20) - *(float *)(*v2 + 24);
  FIELD_U32(v5, 28) |= 2u;
  return BossBase__vfDC(a1);
}
