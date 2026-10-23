/* IceBro_vf183
 * address: 0x602F21C4   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall IceBro_vf183(int a1)
{
  int result; // r0

  result = ((50 * (unsigned __int64)sead__Random__getU32((void *)(dword_60C9CF0C + 1340))) >> 32) + 50;
  FIELD_U32(a1, 6544) = result;
  return result;
}
