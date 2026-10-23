/* TrampolineCloud_vf8
 * address: 0x606EE364   size: 364   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall TrampolineCloud_vf8(int a1)
{
  int *i; // r5
  int v3; // r0
  bool v4; // zf
  __int64 v6; // [sp+8h] [bp-38h]
  __int64 v7; // [sp+18h] [bp-28h]
  __int64 v8; // [sp+28h] [bp-18h]

  for ( i = *(int **)(a1 + 6512); i; i = (int *)i[1] )
  {
    v3 = *i;
    v4 = *i == 0;
    if ( *i )
    {
      v3 = FIELD_U32(v3, 2196);
      v4 = v3 == 0;
    }
    if ( !v4 )
    {
      if ( FIELD_U8(v3, 533) )
      {
        if ( FIELD_U8(v3, 533) == 3 )
          goto LABEL_11;
      }
      else if ( Actor__getProfileId((Actor *)v3) == 565 )
      {
LABEL_11:
        sub_602A3EFC(a1 + 7008, 16, 0.02);
        break;
      }
    }
  }
  LODWORD(v6) = 0;
  LODWORD(v7) = 0;
  LODWORD(v8) = 1065353216;
  HIDWORD(v6) = FIELD_U32(a1, 108);
  HIDWORD(v7) = FIELD_U32(a1, 112);
  HIDWORD(v8) = FIELD_U32(a1, 116);
  FIELD_U64(a1, 6108) = 1065353216;
  FIELD_U64(a1, 6116) = v6;
  FIELD_U64(a1, 6124) = 0x3F80000000000000LL;
  FIELD_U64(a1, 6132) = v7;
  FIELD_U64(a1, 6140) = 0;
  FIELD_U64(a1, 6148) = v8;
  FIELD_U32(a1, 6156) = FIELD_U32(a1, 7012);
  FIELD_U32(a1, 6160) = FIELD_U32(a1, 7016);
  FIELD_U32(a1, 6164) = FIELD_U32(a1, 7020);
  skl_root_ref_6ED2F0((int **)(a1 + 6100));
  StateMgr__execute((StateMgr *)(a1 + 6084));
  SolidOnTopCollider_execute((ColliderBase *)(a1 + 6256));
  StageActor__cullCheck((StageActor *)a1, 0);
  return 1;
}
