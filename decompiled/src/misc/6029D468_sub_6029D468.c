/* sub_6029D468
 * address: 0x6029D468   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

ModelWrapper *__fastcall sub_6029D468(ModelWrapper **a1)
{
  ModelWrapper *v1; // r1
  ModelWrapper **v2; // r4

  v2 = a1 + 1575;
  v1 = a1[1575];
  if ( (*((_BYTE *)*FIELD_U32(v1, 0x20).animations + 28) & 0x20) != 0 )
  {
    ((void (__fastcall *)(ModelWrapper **, int *))(*a1)[4].model)(a1, &dword_60C90108);
    v1 = *v2;
  }
  return ModelWrapper_updateAnims(v1);
}
