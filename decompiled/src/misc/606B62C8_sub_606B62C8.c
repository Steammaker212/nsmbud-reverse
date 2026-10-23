/* sub_606B62C8
 * address: 0x606B62C8   size: 296   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606B62C8(int a1)
{
  int v2; // r1
  int v3; // r1
  int v4; // r0
  bool v5; // zf
  int v6; // r0
  int v7; // r1

  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 196))(a1);
  v2 = FIELD_U32(a1, 6164);
  if ( v2 )
    FIELD_U32(a1, 6164) = v2 - 1;
  v3 = FIELD_U32(a1, 6172);
  if ( v3 )
    FIELD_U32(a1, 6172) = v3 - 1;
  v4 = FIELD_U32(a1, 80);
  v5 = v4 == 0;
  v6 = dword_60CBA498[v4];
  v7 = dword_60CBA474;
  if ( v5 )
    v7 = -dword_60CBA474;
  FIELD_U32(a1, 160) = v7 + v6;
  sub_606B6400(a1);
  StateMgr__execute((StateMgr *)(a1 + 6084));
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 200))(a1);
  ActorScaler_execute((ActorScaler *)(a1 + 6232));
  sub_606B65D8(a1);
  if ( FIELD_U8(dword_60C9A1F0, 6559) == 1
    && !FIELD_U8(a1, 6588)
    && (float)(FIELD_F32(dword_60CC6484, 112) - FIELD_F32(a1, 508)) >= FIELD_F32(a1, 108) )
  {
    if ( !FIELD_U8(a1, 6180) )
      sub_6040994C(dword_60C9A1F0);
    FIELD_U8(a1, 6588) = 1;
  }
  return 1;
}
