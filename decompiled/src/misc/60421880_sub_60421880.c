/* sub_60421880
 * address: 0x60421880   size: 96   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60421880(ModelWrapper *a1)
{
  void *model; // r5

  if ( LOBYTE(FIELD_U32(a1 + (1) * 48, 0x10)) )
  {
    ((void (__fastcall *)(ModelWrapper *))loc_60421C50)(&a1[1]);
    model = FIELD_U32(a1, 0x0);
    (*(void (__fastcall **)(void *, void **, float))(*(_DWORD *)FIELD_U32(a1, 0x0) + 164))(
      FIELD_U32(a1, 0x0),
      FIELD_U32(a1 + (1) * 48, 0x14),
      *(float *)&FIELD_U32(a1 + (1) * 48, 0x4));
    (*(void (__fastcall **)(void *, int, float))(*(_DWORD *)model + 164))(
      model,
      (int)FIELD_U32(a1 + (1) * 48, 0x14) ^ 1,
      *(float *)&FIELD_U32(a1 + (1) * 48, 0x0));
  }
  return ModelWrapper_updateModel(a1);
}
