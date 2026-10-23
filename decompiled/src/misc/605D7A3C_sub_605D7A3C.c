/* sub_605D7A3C
 * address: 0x605D7A3C   size: 232   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605D7A3C(int a1)
{
  bool v2; // r1
  int v3; // r5
  int v4; // r0
  _DWORD *v5; // r6
  int v6; // r0
  int v7; // r1
  int v8; // r0
  _DWORD *v9; // r4
  int v10; // t1

  v2 = 0;
  v3 = 0;
  v5 = (_DWORD *)(a1 + 6264);
  v4 = FIELD_U32(a1, 6264);
  if ( (v4 & 0x20000000) == 0 )
    v2 = (v4 & 0x10000) == 0;
  FIELD_U8(a1, 534) = v2;
  if ( CollisionActor__beforeExecute((StageActor *)a1) == 1 )
  {
    FIELD_U32(a1, 6320) = FIELD_U32(a1, 120);
    FIELD_U32(a1, 6324) = FIELD_U32(a1, 124);
    FIELD_U32(a1, 6328) = FIELD_U32(a1, 128);
    FIELD_U32(a1, 6332) = FIELD_U32(a1, 80);
    sub_605DEAA0(a1);
    sub_605E3EFC(a1);
    *v5 &= ~0x80000000;
    v6 = FIELD_U32(a1, 6260);
    FIELD_U32(a1, 6260) = v6 & 0xDFFFFFFF;
    if ( (v6 & 0x40000000) != 0 )
    {
      v7 = FIELD_U32(a1, 6804);
      FIELD_U32(a1, 6804) = v7 | 9;
      if ( (FIELD_U8(a1, 6808) & 1) != 0 )
        FIELD_U32(a1, 6804) = v7 | 0xB;
    }
    v3 = 1;
    v10 = FIELD_U32(a1, 6848);
    v9 = (_DWORD *)(a1 + 6848);
    v8 = v10;
    if ( v10 )
      *v9 = v8 - 1;
  }
  return v3;
}
