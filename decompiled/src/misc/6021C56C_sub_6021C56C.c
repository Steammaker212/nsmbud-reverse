/* sub_6021C56C
 * address: 0x6021C56C   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6021C56C(int a1, int a2)
{
  FIELD_U8(dword_60C8C188, 3224) = a2;
  if ( a2 )
    FIELD_U32(a1, 856) = 0;
  FIELD_U8(a1, 1441) = 0;
  FIELD_U32(a1, 1252) = 0;
  FIELD_U32(a1, 1256) = 0;
  FIELD_U32(a1, 1260) = 0;
  return memset((void *)(a1 + 1180), 0, 68);
}
