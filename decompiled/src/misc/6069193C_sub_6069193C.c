/* sub_6069193C
 * address: 0x6069193C   size: 504   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6069193C(int a1)
{
  _BYTE *v2; // r7
  StateBase *CurrentState; // r0
  int v4; // r6
  int *v5; // r0
  int v6; // r1
  bool v7; // zf
  StateBase *v8; // r0
  int v9; // r5
  int v10; // r1
  float v11; // s0
  float v12; // s2
  float *v13; // r0
  float v14; // s12
  int v15; // r0
  _DWORD *v16; // r4
  int v17; // t1

  v2 = (_BYTE *)(a1 + 6580);
  if ( FIELD_U8(a1, 6580) && !FIELD_U32(a1, 6576) )
    FIELD_U32(a1, 6576) = 60;
  StateMgr__execute((StateMgr *)(a1 + 6084));
  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v4 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v4 == (*(int (**)(void))(dword_60CB9028 + 8))() )
  {
    v5 = *(int **)(a1 + 6432);
    if ( v5 )
    {
      while ( 1 )
      {
        v6 = *v5;
        v7 = *v5 == 0;
        if ( *v5 )
        {
          v6 = FIELD_U32(v6, 2196);
          v7 = v6 == 0;
        }
        if ( !v7 && FIELD_U8(v6, 533) == 1 && FIELD_U8(v6, 84) <= 3u && (FIELD_U8(v6, 1210) & 1) != 0 )
          break;
        v5 = (int *)v5[1];
        if ( !v5 )
          goto LABEL_15;
      }
      StateMgr__changeState((StateMgr *)(a1 + 6084), (StateBase *)&dword_60CB9048);
    }
  }
LABEL_15:
  FIELD_U32(a1, 6420) = FIELD_U32(a1, 164);
  ShapedCollider_execute((ColliderBase *)(a1 + 6176));
  v8 = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v9 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v8, 0x0) + 2))(v8);
  if ( v9 != (*(int (**)(void))(dword_60CB9068 + 8))() )
    sub_60691B4C(a1);
  v10 = FIELD_U32(a1, 6568);
  if ( v10 )
    FIELD_U32(a1, 6568) = v10 - 1;
  sub_60691D3C(a1);
  v11 = (float)(FIELD_U32(a1, 6564) & 0xFFFFFF) * 0.000000059605;
  v12 = FIELD_F32(a1, 6560);
  v13 = (float *)((char *)sinLutTable + ((FIELD_U32(a1, 6564) >> 20) & 0xFF0));
  v14 = (float)((float)(*v13 + (float)(v13[1] * v11)) * v12) + 0.05;
  FIELD_F32(a1, 6120) = -(float)(v12 * (float)(v13[2] + (float)(v11 * v13[3])));
  FIELD_F32(a1, 6124) = v14;
  sub_606917EC(a1);
  v17 = FIELD_U32(a1, 6576);
  v16 = (_DWORD *)(a1 + 6576);
  v15 = v17;
  if ( v17 )
    *v16 = v15 - 1;
  *v2 = 0;
  return 1;
}
