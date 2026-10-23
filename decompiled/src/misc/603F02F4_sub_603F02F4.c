/* sub_603F02F4
 * address: 0x603F02F4   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_603F02F4(int a1, unsigned int a2, unsigned int a3)
{
  bool v3; // cc
  int v4; // r0

  if ( a3 == 8 )
    a2 = 0;
  v3 = a3 > 0x1F;
  if ( a3 <= 0x1F )
    v3 = a2 > 3;
  if ( !v3 )
  {
    v4 = dword_60C99DD4 + 72 * a2 + 4 * (a3 >> 5);
    FIELD_U32(v4, 324) |= 1 << (a3 & 0x1F);
  }
}
