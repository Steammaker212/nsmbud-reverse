/* sub_608CB6D0
 * address: 0x608CB6D0   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608CB6D0(int a1, int a2)
{
  sub_608AED28((_DWORD *)a1);
  *(_DWORD *)a1 = off_60C5B3DC;
  FIELD_U32(a1, 428) = a1 + 428;
  FIELD_U32(a1, 432) = a1 + 428;
  FIELD_U32(a1, 440) = a2;
  FIELD_U8(a1, 449) = 0;
  FIELD_U8(a1, 450) = 0;
  FIELD_U32(a1, 452) = 0;
  sub_608CBEEC(a1 + 456);
  return a1;
}
