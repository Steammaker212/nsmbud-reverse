/* sub_608335C8
 * address: 0x608335C8   size: 32   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_608335C8(_BYTE *a1)
{
  return (unsigned __int8)(a1[4]
                         ^ *a1
                         ^ ((unsigned __int16)(*((_WORD *)a1 + 2) ^ *(_WORD *)a1) >> 8)
                         ^ ((unsigned int)(*((_DWORD *)a1 + 1) ^ *(_DWORD *)a1) >> 16))
       ^ ((unsigned int)(*((_DWORD *)a1 + 1) ^ *(_DWORD *)a1) >> 24);
}
