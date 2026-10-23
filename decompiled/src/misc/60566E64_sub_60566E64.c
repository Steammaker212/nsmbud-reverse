/* sub_60566E64
 * address: 0x60566E64   size: 112   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_60566E64(int a1)
{
  int v2; // r1

  v2 = sub_605B9FEC(dword_60CB061C, a1 + 6980, FIELD_U8(LevelInfo_instance, 18));
  if ( (v2 | 2) != 3 )
    return v2 != 2;
  FIELD_U32(a1, 7368) = 2;
  FIELD_U32(a1, 7296) = 50;
  return 1;
}
