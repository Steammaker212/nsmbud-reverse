/* sub_6008EE3C
 * address: 0x6008EE3C   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_6008EE3C(int a1)
{
  j_ModelWrapper_updateAnims(FIELD_U32(a1, 6304));
  if ( !FIELD_U16(a1, 6276) )
    (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C821C0);
  JUMPOUT(0x60093838);
}
