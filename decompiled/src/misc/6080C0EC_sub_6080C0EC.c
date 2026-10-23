/* sub_6080C0EC
 * address: 0x6080C0EC   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6080C0EC(int a1, int a2, int a3, int a4)
{
  int v5; // r0

  FIELD_U32(a1, 124) = a4;
  v5 = FIELD_U32(a1, 128);
  FIELD_U32(a1, 132) = v5;
  if ( a4 <= 0 )
    v5 = 0;
  FIELD_U32(a1, 128) = a2;
  FIELD_U32(a1, 136) = a3;
  if ( a4 <= 0 )
    FIELD_U32(a1, 124) = v5;
  sub_60910068(&dword_60CC6B38, a3, 1.0);
  FIELD_U8(a1, 121) = 1;
  return 1;
}
