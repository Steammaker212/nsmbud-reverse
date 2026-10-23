/* sub_6057093C
 * address: 0x6057093C   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

ModelWrapper *__fastcall sub_6057093C(int a1)
{
  FIELD_F32(a1, 112) = FIELD_F32(a1, 7400) + FIELD_F32(a1, 6796);
  if ( sub_60571130() == 1 )
  {
    sub_605715F0(a1);
    FIELD_U32(a1, 7420) = 30 * FIELD_U8(a1, 22);
    (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 428))(a1, &dword_60CAE8FC);
  }
  return ModelWrapper_updateAnims(*(ModelWrapper **)(a1 + 7388));
}
