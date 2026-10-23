/* Resource_getModel2
 * address: 0x60430090   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Resource_getModel2(
        void *resource,
        sead__SafeString *identifier,
        int unk2,
        int unk3,
        int unk4,
        int unk5,
        int unk6,
        int unk7,
        int heap)
{
  return Resource_getModel(resource, identifier, 1, unk2, unk3, unk4, unk5, unk6, unk7, heap);
}
