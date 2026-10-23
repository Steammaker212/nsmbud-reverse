/* sub_608E14B0
 * address: 0x608E14B0   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608E14B0(int a1, int a2, char a3)
{
  FIELD_U32(a1, 4) = 0;
  FIELD_U32(a1, 8) = 0;
  FIELD_U32(a1, 16) = a2;
  *(_DWORD *)a1 = off_60C5BE74;
  FIELD_U32(a1, 1176) = 0;
  FIELD_U32(a1, 1180) = 0;
  FIELD_U32(a1, 1184) = 0;
  FIELD_U8(a1, 1188) = a3;
  FIELD_U8(a1, 1189) = 0;
  FIELD_U8(a1, 1190) = 0;
  FIELD_U8(a1, 1191) = 5;
  FIELD_U32(a1, 12) = 3;
  memset((void *)(a1 + 20), 0, 0x480u);
  return a1;
}
