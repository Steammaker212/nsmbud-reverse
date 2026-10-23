/* sub_6029D804
 * address: 0x6029D804   size: 136   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

ModelWrapper *__fastcall sub_6029D804(int a1)
{
  _DWORD *v2; // r0
  int v3; // r1
  int v4; // t1
  int v5; // r1

  v4 = FIELD_U32(a1, 6312);
  v2 = (_DWORD *)(a1 + 6312);
  v3 = v4;
  if ( v4 )
  {
    v5 = v3 - 1;
    *v2 = v5;
    if ( v5 == 32 )
    {
      *(_DWORD *)(**(_DWORD **)(FIELD_U32(a1, 6300) + 36) + 24) = -1082130432;
      sub_6041838C((ModelAnimation *)(**(_DWORD **)(FIELD_U32(a1, 6300) + 36) + 4));
    }
  }
  else
  {
    (*(void (__fastcall **)(int, void *))(*(_DWORD *)a1 + 192))(a1, &unk_60C90148);
  }
  return ModelWrapper_updateAnims(*(ModelWrapper **)(a1 + 6300));
}
