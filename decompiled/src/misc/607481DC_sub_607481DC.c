/* sub_607481DC
 * address: 0x607481DC   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607481DC(int a1)
{
  int result; // r0

  FIELD_U8(a1, 535) = 0;
  if ( Actor__getProfileId((Actor *)a1) != 842 )
    FIELD_U8(a1, 534) = 0;
  result = ((180 * (unsigned __int64)sead__Random__getU32((void *)(dword_60C9CF0C + 1340))) >> 32) + 180;
  FIELD_U32(a1, 676) = result;
  return result;
}
