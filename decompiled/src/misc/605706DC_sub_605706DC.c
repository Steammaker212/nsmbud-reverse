/* sub_605706DC
 * address: 0x605706DC   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

ModelWrapper *__fastcall sub_605706DC(int a1)
{
  _DWORD *v2; // r0
  int v3; // r1
  int v4; // t1
  int v5; // r1

  v4 = FIELD_U32(a1, 7420);
  v2 = (_DWORD *)(a1 + 7420);
  v3 = v4;
  if ( !v4 || (v5 = v3 - 1, (*v2 = v5) == 0) )
    (*(void (__fastcall **)(int, void *))(*(_DWORD *)a1 + 428))(a1, &unk_60CAE91C);
  return ModelWrapper_updateAnims(*(ModelWrapper **)(a1 + 7388));
}
