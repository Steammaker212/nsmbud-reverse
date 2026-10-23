/* sub_602C3620
 * address: 0x602C3620   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_602C3620(int a1)
{
  int v2; // r1
  int v3; // [sp+0h] [bp-18h] BYREF
  int v4; // [sp+4h] [bp-14h] BYREF

  v2 = dword_60C9151C;
  if ( FIELD_U32(a1, 6284) != 1 )
    v2 = -dword_60C9151C;
  v4 = v2;
  v3 = FIELD_U32(a1, 164);
  sub_608322C0(&v3, &v4, &dword_60C91520, &dword_60C91524);
  FIELD_U32(a1, 164) = v3;
  JUMPOUT(0x6000100C);
}
