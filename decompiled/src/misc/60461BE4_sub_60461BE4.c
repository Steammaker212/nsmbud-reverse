/* sub_60461BE4
 * address: 0x60461BE4   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60461BE4(int a1)
{
  if ( (FIELD_U32(a1, 20) & 0x1F000000) == 0x9000000 )
    return sub_603FD6E0(
             dword_60C99DF4,
             FIELD_U8(LevelInfo_instance, 18),
             FIELD_F32(a1, 6112),
             FIELD_F32(a1, 6116));
  else
    return 0;
}
