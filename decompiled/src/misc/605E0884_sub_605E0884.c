/* sub_605E0884
 * address: 0x605E0884   size: 668   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605E0884(int a1, _DWORD *a2, int a3, int a4, int a5, int a6)
{
  int v10; // r0
  _DWORD *v11; // r4
  _DWORD *v13; // r6
  float v14; // s0
  int v16; // r1
  int v17; // r3
  TileCheck_Result v18; // [sp+0h] [bp-50h] BYREF

  FIELD_U32(a1, 6756) = a3;
  v11 = (_DWORD *)(a1 + 6264);
  v10 = FIELD_U32(a1, 6264);
  v13 = v11 + 132;
  if ( (v10 & 0x20000000) != 0 && *v13 == 1 )
  {
    if ( (v10 & 0x40000000) != 0 )
      goto LABEL_9;
    if ( (FIELD_U8(a1, 6261) & 4) == 0 )
      goto LABEL_10;
    if ( !sub_605DBDAC(a1) )
    {
LABEL_9:
      a6 = 1;
    }
    else if ( (FIELD_U8(a1, 538) & 1) != 0 )
    {
      a6 = 1;
    }
  }
LABEL_10:
  *v11 &= 0x9FFFFFFF;
  sub_605E9384(dword_60CB1BE4, a1);
  if ( *v13 == 3 )
  {
    StageActor__updateZoneId((StageActor *)a1);
    FIELD_U8(a1, 6796) = FIELD_U8(LevelInfo_instance, 18);
    return sub_605E93C8(dword_60CB1BE4, a1);
  }
  else
  {
    if ( a6 == 1 )
    {
      sub_605D79D0(a1, (StateBase *)&unk_60CB1788, 0);
      *v13 = 2;
    }
    FIELD_U32(a1, 108) = *a2;
    FIELD_U32(a1, 112) = a2[1];
    FIELD_U32(a1, 116) = a2[2];
    FIELD_U32(a1, 584) = *a2;
    FIELD_U32(a1, 588) = a2[1];
    FIELD_U32(a1, 592) = a2[2];
    FIELD_U32(a1, 608) = *a2;
    FIELD_U32(a1, 612) = a2[1];
    FIELD_U32(a1, 616) = a2[2];
    sub_605D796C(a1, v14);
    StageActor__updateZoneId((StageActor *)a1);
    FIELD_U8(a1, 6796) = FIELD_U8(LevelInfo_instance, 18);
    FIELD_U32(a1, 80) = a4;
    sub_605E3BA4(a1);
    sub_605E398C(a1, &dword_60CB1AA4);
    (*(void (__fastcall **)(int, int))(*(_DWORD *)a1 + 428))(a1, a3);
    v18.field_C = 0;
    v18.field_10 = 0;
    if ( sub_605DB8E4(a1, (float *)(a1 + 108), &v18, 0, 3.0) == 1 )
    {
      v16 = FIELD_U32(a1, 6804);
      FIELD_U32(a1, 6804) = v16 | 1;
      v17 = FIELD_U32(a1, 6808);
      FIELD_U32(a1, 6808) = v17 | 1;
      if ( LOWORD(v18.field_18) == 0x10 && BYTE2(v18.field_18) <= 0x10u && ((1 << SBYTE2(v18.field_18)) & 0x10050) != 0 )
      {
        FIELD_U32(a1, 6804) = v16 | 0x21;
        FIELD_U32(a1, 6808) = v17 | 0x21;
      }
    }
    if ( a5 == 1 )
    {
      sub_605DAD24(a1, 1);
      sub_605E0BAC(a1, a3, 1);
      return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 200))(a1);
    }
    else
    {
      return sub_605E0BAC(a1, a3, 0);
    }
  }
}
