/* sub_6090CE08
 * address: 0x6090CE08   size: 148   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6090CE08(int a1)
{
  *(_DWORD *)a1 = off_60C5D10C;
  FIELD_U16(a1, 4) = 257;
  FIELD_U32(a1, 136) = dword_60CCF45C;
  FIELD_U32(a1, 140) = dword_60C5D088;
  FIELD_U32(a1, 144) = dword_60CCF460;
  *(_DWORD *)a1 = off_60C5D20C;
  FIELD_U32(a1, 212) = 0;
  FIELD_U32(a1, 216) = 0;
  FIELD_U32(a1, 220) = 0;
  FIELD_U32(a1, 224) = 0;
  FIELD_U32(a1, 228) = 0;
  FIELD_U32(a1, 232) = 0;
  FIELD_U8(a1, 236) = 1;
  sub_6090CEB0(a1);
  return a1;
}
