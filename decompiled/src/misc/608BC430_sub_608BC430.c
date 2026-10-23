/* sub_608BC430
 * address: 0x608BC430   size: 248   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608BC430(int a1)
{
  int result; // r0
  int v3; // r1
  int v4; // r1
  int v5; // r1
  int v6; // r1
  int v7; // r1
  int v8; // r1
  int v9; // r1

  sub_608B00E4((_DWORD *)a1);
  result = FIELD_U16(a1, 572);
  if ( (result & 1) != 0 )
  {
    v3 = FIELD_U32(a1, 456);
    if ( v3 < FIELD_U32(a1, 452) )
      FIELD_U32(a1, 456) = v3 + 1;
  }
  if ( (result & 2) != 0 )
  {
    v4 = FIELD_U32(a1, 472);
    if ( v4 < FIELD_U32(a1, 468) )
      FIELD_U32(a1, 472) = v4 + 1;
  }
  if ( (result & 4) != 0 )
  {
    v5 = FIELD_U32(a1, 488);
    if ( v5 < FIELD_U32(a1, 484) )
      FIELD_U32(a1, 488) = v5 + 1;
  }
  if ( (result & 8) != 0 )
  {
    v6 = FIELD_U32(a1, 504);
    if ( v6 < FIELD_U32(a1, 500) )
      FIELD_U32(a1, 504) = v6 + 1;
  }
  if ( (result & 0x10) != 0 )
  {
    v7 = FIELD_U32(a1, 520);
    if ( v7 < FIELD_U32(a1, 516) )
      FIELD_U32(a1, 520) = v7 + 1;
  }
  if ( (result & 0x20) != 0 )
  {
    v8 = FIELD_U32(a1, 536);
    if ( v8 < FIELD_U32(a1, 532) )
      FIELD_U32(a1, 536) = v8 + 1;
  }
  if ( (result & 0x40) != 0 )
  {
    v9 = FIELD_U32(a1, 552);
    if ( v9 < FIELD_U32(a1, 548) )
      FIELD_U32(a1, 552) = v9 + 1;
  }
  if ( (result & 0x80) != 0 )
  {
    result = FIELD_U32(a1, 568);
    if ( result < FIELD_U32(a1, 564) )
      FIELD_U32(a1, 568) = ++result;
  }
  return result;
}
