/* sub_606819D4
 * address: 0x606819D4   size: 508   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606819D4(int a1)
{
  _DWORD *v2; // r0
  int v3; // r1
  int v4; // t1
  int v5; // r1
  int v6; // r1
  int v7; // r1
  int v8; // r1
  int v9; // r1
  int v10; // r1
  int v11; // r1
  int v12; // r1
  int v13; // r0
  float v14; // s0
  float v15; // s1
  float v16; // s2
  int v17; // r0

  v4 = FIELD_U32(a1, 7564);
  v2 = (_DWORD *)(a1 + 7564);
  v3 = v4;
  if ( v4 )
    *v2 = v3 - 1;
  v5 = FIELD_U32(a1, 7580);
  if ( v5 )
    FIELD_U32(a1, 7580) = v5 - 1;
  v6 = FIELD_U32(a1, 7568);
  if ( v6 )
    FIELD_U32(a1, 7568) = v6 - 1;
  v7 = FIELD_U32(a1, 7584);
  if ( v7 )
    FIELD_U32(a1, 7584) = v7 - 1;
  v8 = FIELD_U32(a1, 7572);
  if ( v8 )
    FIELD_U32(a1, 7572) = v8 - 1;
  v9 = FIELD_U32(a1, 7588);
  if ( v9 )
    FIELD_U32(a1, 7588) = v9 - 1;
  v10 = FIELD_U32(a1, 7576);
  if ( v10 )
    FIELD_U32(a1, 7576) = v10 - 1;
  v11 = FIELD_U32(a1, 7592);
  if ( v11 )
    FIELD_U32(a1, 7592) = v11 - 1;
  v12 = FIELD_U32(a1, 7556);
  if ( v12 )
    FIELD_U32(a1, 7556) = v12 - 1;
  StateMgr__execute((StateMgr *)(a1 + 6084));
  wrist0_ref(a1);
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 200))(a1);
  ShapedCollider_execute((ColliderBase *)(a1 + 6776));
  if ( !FIELD_U8(a1, 7516) )
    StageActor__cullCheck((StageActor *)a1, 0);
  v13 = a1 + 7480;
  if ( FIELD_U8(a1, 7596) )
  {
    ((void (__fastcall *)(int, float, float, float, float))loc_60832560)(v13, 0.0, 0.5, 1.0, 0.1);
    ((void (__fastcall *)(int, float, float, float, float))loc_60832560)(a1 + 7484, 0.0, 0.5, 1.0, 0.1);
    v14 = 0.0;
    v15 = 0.5;
    v16 = 1.0;
    v17 = a1 + 7488;
  }
  else
  {
    ((void (__fastcall *)(int, float, float, float, float))loc_60832560)(v13, FIELD_F32(a1, 144), 0.1, 1.0, 0.1);
    ((void (__fastcall *)(int, float, float, float, float))loc_60832560)(a1 + 7484, FIELD_F32(a1, 148), 0.1, 1.0, 0.1);
    v14 = FIELD_F32(a1, 152);
    v17 = a1 + 7488;
    v15 = 0.1;
    v16 = 1.0;
  }
  ((void (__fastcall *)(int, float, float, float, float))loc_60832560)(v17, v14, v15, v16, 0.1);
  return 1;
}
