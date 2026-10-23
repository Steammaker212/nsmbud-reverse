/* sub_602918C0
 * address: 0x602918C0   size: 396   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602918C0(int a1)
{
  int v2; // r8
  int v3; // r4
  char v4; // r1
  __int16 v5; // r3
  int v6; // r0
  int v7; // r12
  int v8; // r5
  int v9; // r6
  int v10; // r7
  int v11; // r2
  int v12; // r5
  Vec2 v14; // [sp+0h] [bp-28h] BYREF

  if ( FIELD_U32(dword_60C99DD4, 764) != 2 )
    goto LABEL_29;
  v2 = 0;
  v3 = -1;
  v4 = 0;
  v5 = FIELD_U16(PlayerMgr_instance, 66);
  v6 = -1;
  if ( (v5 & 1) != 0 )
  {
    v3 = FIELD_U32(dword_60C99DD4, 344);
    v4 = 1;
    if ( v3 < 0 )
      v3 = -1;
  }
  if ( (v5 & 2) == 0 )
  {
LABEL_11:
    v8 = v3;
    v7 = 0;
    if ( (v5 & 4) == 0 )
      goto LABEL_17;
    goto LABEL_12;
  }
  v6 = FIELD_U32(dword_60C99DD4, 416);
  ++v4;
  v7 = 1;
  if ( v3 >= v6 )
  {
    v2 = v6 >= 0;
    if ( v6 < 0 )
      v6 = -1;
    goto LABEL_11;
  }
  v8 = FIELD_U32(dword_60C99DD4, 416);
  v6 = v3;
  if ( (v5 & 4) == 0 )
    goto LABEL_17;
LABEL_12:
  v9 = FIELD_U32(dword_60C99DD4, 488);
  ++v4;
  v10 = 2;
  if ( v8 >= v9 )
  {
    if ( v6 < v9 )
    {
      v2 = 2;
      v6 = FIELD_U32(dword_60C99DD4, 488);
    }
LABEL_17:
    v9 = v8;
    v10 = v7;
    if ( (v5 & 8) == 0 )
      goto LABEL_22;
    goto LABEL_18;
  }
  v6 = v8;
  v2 = v7;
  if ( (v5 & 8) == 0 )
    goto LABEL_22;
LABEL_18:
  v11 = FIELD_U32(dword_60C99DD4, 560);
  ++v4;
  v12 = 3;
  if ( v9 < v11 )
  {
    v6 = v9;
    v2 = v10;
    goto LABEL_23;
  }
  if ( v6 < v11 )
  {
    v2 = 3;
    v6 = FIELD_U32(dword_60C99DD4, 560);
  }
LABEL_22:
  v11 = v9;
  v12 = v10;
LABEL_23:
  if ( v4 == 1 )
    goto LABEL_30;
  if ( !v11 )
  {
LABEL_29:
    v12 = StageActor__distanceToPlayer((StateActor *)a1, &v14);
    goto LABEL_30;
  }
  if ( v6 && (unsigned int)((10 * (unsigned __int64)sead__Random__getU32((void *)(dword_60C9CF0C + 1340))) >> 32) > 5 )
    v12 = v2;
LABEL_30:
  FIELD_U32(a1, 7604) = v12;
  return 7604;
}
