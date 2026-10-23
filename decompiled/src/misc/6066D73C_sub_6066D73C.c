/* sub_6066D73C
 * address: 0x6066D73C   size: 732   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6066D73C(int a1)
{
  int v2; // r7
  int v3; // r6
  _BYTE *v4; // r8
  int v5; // r0
  float v6; // s16
  float v7; // s18
  StateMgr *v8; // r0
  float v9; // s20
  StateBase *v10; // r0
  int v11; // r5
  int result; // r0
  float v13; // s18
  int v14; // r4
  StateBase *CurrentState; // r0
  int v16; // r5
  unsigned int v17; // r4
  int v18; // r5
  float v19; // s22
  int v20; // r1
  ModelAnimation *v21; // r0

  v2 = a1 + 6196;
  v4 = (_BYTE *)(a1 + 6860);
  v3 = FIELD_U8(a1, 6860);
  v5 = **(_DWORD **)(FIELD_U32(a1, 6196) + 28);
  v6 = FIELD_F32(v5, 4);
  v7 = FIELD_F32(v5, 8);
  v8 = (StateMgr *)(a1 + 6120);
  v9 = v7 - v6;
  if ( v3 != 1 )
  {
    CurrentState = StateMgr__getCurrentState(v8);
    v16 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
    result = (*(int (**)(void))(dword_60CBA628 + 8))();
    if ( v3 == 2 )
    {
      if ( v16 == result )
      {
        result = FIELD_U8(a1, 6192);
        if ( result == 1 )
        {
          result = 6180;
          v17 = FIELD_U32(a1, 6180);
          if ( v17 <= 0x23 )
          {
            v18 = **(_DWORD **)(*(_DWORD *)v2 + 28);
            FIELD_U32(v18, 24) = 1065353216;
            *v4 = 1;
            sub_6041838C((ModelAnimation *)(v18 + 4));
            FIELD_F32(v18, 20) = v6 + (float)(35.0 - (float)v17);
            result = FIELD_U32(v18, 28) | 2;
            FIELD_U32(v18, 28) = result;
          }
        }
      }
      return result;
    }
    if ( v16 == result )
    {
      v19 = (float)FIELD_U32(a1, 6180);
      if ( FIELD_U8(a1, 6192) == 1 )
      {
        if ( FIELD_U32(a1, 6180) <= 0x23u )
        {
          v14 = **(_DWORD **)(*(_DWORD *)v2 + 28);
          FIELD_U32(v14, 24) = 1065353216;
          *v4 = 1;
          sub_6041838C((ModelAnimation *)(v14 + 4));
          FIELD_F32(v14, 20) = v6 + (float)(35.0 - v19);
          goto LABEL_24;
        }
        v14 = **(_DWORD **)(*(_DWORD *)v2 + 28);
        FIELD_U32(v14, 24) = -1082130432;
        *v4 = 2;
        v21 = (ModelAnimation *)(v14 + 4);
LABEL_21:
        sub_6041838C(v21);
        FIELD_F32(v14, 20) = v6;
        goto LABEL_24;
      }
      if ( v19 < v9 )
      {
        v14 = **(_DWORD **)(*(_DWORD *)v2 + 28);
        FIELD_U32(v14, 24) = -1082130432;
        *v4 = 2;
        sub_6041838C((ModelAnimation *)(v14 + 4));
        FIELD_F32(v14, 20) = v6 + v19;
        goto LABEL_24;
      }
      v14 = **(_DWORD **)(*(_DWORD *)v2 + 28);
      FIELD_U32(v14, 24) = 1065353216;
      *v4 = 1;
      v21 = (ModelAnimation *)(v14 + 4);
    }
    else
    {
      v20 = FIELD_U8(a1, 6192);
      v14 = **(_DWORD **)(*(_DWORD *)v2 + 28);
      v21 = (ModelAnimation *)(v14 + 4);
      if ( v20 == 1 )
      {
        FIELD_U32(v14, 24) = -1082130432;
        *v4 = 2;
        goto LABEL_21;
      }
      FIELD_U32(v14, 24) = 1065353216;
      *v4 = 1;
    }
    sub_6041838C(v21);
    FIELD_F32(v14, 20) = v7;
    goto LABEL_24;
  }
  v10 = StateMgr__getCurrentState(v8);
  v11 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v10, 0x0) + 2))(v10);
  result = (*(int (**)(void))(dword_60CBA628 + 8))();
  if ( v11 == result )
  {
    result = FIELD_U8(a1, 6192);
    if ( !FIELD_U8(a1, 6192) )
    {
      result = a1 + 6180;
      v13 = (float)FIELD_U32(a1, 6180);
      if ( v13 < v9 )
      {
        v14 = **(_DWORD **)(*(_DWORD *)v2 + 28);
        FIELD_U32(v14, 24) = -1082130432;
        *v4 = 2;
        sub_6041838C((ModelAnimation *)(v14 + 4));
        FIELD_F32(v14, 20) = v6 + v13;
LABEL_24:
        result = FIELD_U32(v14, 28) | 2;
        FIELD_U32(v14, 28) = result;
      }
    }
  }
  return result;
}
