/* sub_60904D08
 * address: 0x60904D08   size: 160   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60904D08(int a1)
{
  int v2; // r0
  bool v3; // zf
  _BYTE *v4; // r0

  *(_DWORD *)a1 = off_60C5CC98;
  sub_609056F0(a1);
  FIELD_U32(a1, 8) = 0;
  FIELD_U32(a1, 16) = off_60C5CC70;
  v2 = FIELD_U8(a1, 76);
  v3 = v2 == 0;
  if ( FIELD_U8(a1, 76) )
  {
    v2 = FIELD_U32(a1, 20);
    v3 = v2 == 0;
  }
  if ( !v3 )
    sub_608E7A54(v2);
  FIELD_U32(a1, 28) = &off_60BF9CF0;
  v4 = *(_BYTE **)(a1 + 36);
  if ( v4 )
    sub_608E6738(v4, a1 + 28);
  *(_DWORD *)a1 = &off_60C5CC60;
  if ( FIELD_U32(a1, 8) )
    sub_609056F0(a1);
  return a1;
}
