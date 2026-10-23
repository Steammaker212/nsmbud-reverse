/* ModelWrapper_updateModel
 * address: 0x6040F48C   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall ModelWrapper_updateModel(ModelWrapper *a1)
{
  (*(void (__fastcall **)(void *))(*(_DWORD *)FIELD_U32(a1, 0x0) + 0x34))(FIELD_U32(a1, 0x0));
  return (*(int (__fastcall **)(void *))(*(_DWORD *)FIELD_U32(a1, 0x0) + 0x38))(FIELD_U32(a1, 0x0));
}
