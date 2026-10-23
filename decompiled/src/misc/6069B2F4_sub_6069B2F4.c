/* sub_6069B2F4
 * address: 0x6069B2F4   size: 184   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6069B2F4(int a1)
{
  int v2; // r0
  _WORD *v3; // r1
  int v5; // [sp+4h] [bp-54h] BYREF
  _BYTE v6[80]; // [sp+8h] [bp-50h] BYREF

  memset(v6, 0, 64);
  v5 = 0;
  v2 = sub_606BAB1C(v6, &v5, a1 + 752);
  if ( FIELD_U8(a1, 1186) )
  {
    v3 = (_WORD *)(a1 + 1184);
    if ( v2 != FIELD_U16(a1, 1184) )
      FIELD_U32(a1, 1136) = FIELD_U32(a1, 1164);
  }
  else
  {
    FIELD_U8(a1, 1186) = 1;
    v3 = (_WORD *)(a1 + 1184);
  }
  *v3 = v2;
  FIELD_U32(a1, 1172) = sub_608337E0(a1 + 1136);
  sub_6069C058(a1 + 648, a1);
  ((void (__fastcall *)(int, int, int))loc_6069BF80)(a1 + 648, a1 + 1172, a1 + 108);
  StageActor__cullCheck((StageActor *)a1, 16);
  return 1;
}
