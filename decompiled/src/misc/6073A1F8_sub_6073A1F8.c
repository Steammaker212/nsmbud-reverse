/* sub_6073A1F8
 * address: 0x6073A1F8   size: 1044   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6073A1F8(int a1)
{
  int result; // r0
  _BYTE *v3; // r1
  int v4; // r0
  _WORD *v5; // r9
  int v6; // t1
  unsigned __int8 *v7; // r4
  unsigned __int8 v8; // r8
  int v9; // r0
  int v10; // r0
  unsigned int v11; // r0
  _BYTE *v12; // r2
  int v13; // r1
  int v14; // t1
  unsigned __int8 *v15; // r6
  unsigned __int8 v16; // r7
  _BYTE *v17; // r10
  int v18; // r5
  _BYTE *v19; // r3
  unsigned __int8 v20; // r7
  int v21; // r0
  StateBase *CurrentState; // r0
  int v23; // r6
  int v24; // r0
  int v25; // r7
  int v26; // r8
  int v27; // r5
  StateBase *v28; // r0
  int v29; // r6
  int v30; // r0
  _BYTE *v31; // r0
  StateMgr *v32; // r0
  _BYTE *v33; // r0
  _BYTE *a5; // [sp+0h] [bp-28h]

  v3 = (_BYTE *)(a1 + 6102);
  result = FIELD_U8(a1, 6102);
  a5 = v3;
  switch ( result )
  {
    case 0:
      v6 = FIELD_U16(a1, 6100);
      v5 = (_WORD *)(a1 + 6100);
      v4 = v6;
      if ( v6 )
        goto LABEL_13;
      result = 1;
      goto LABEL_30;
    case 1:
      v7 = (unsigned __int8 *)(a1 + 6108);
      if ( FIELD_U8(a1, 6108) )
      {
        v8 = 0;
        do
        {
          if ( !*(_BYTE *)(sub_6073AFA4(a1, v8) + 7400) )
          {
            v9 = sub_6073AFA4(a1, v8);
            FIELD_U8(v9, 7620) = 1;
            v10 = FIELD_U32(v9, 7396);
            FIELD_U8(v10, 6802) = 1;
            FIELD_U32(v10, 6804) = 0;
            StateMgr__changeState((StateMgr *)(v10 + 6084), (StateBase *)&dword_60CBDDC0);
          }
          v11 = *v7;
          ++v8;
        }
        while ( v8 < v11 );
        v12 = a5;
        v13 = (unsigned __int8)*a5 + 1;
      }
      else
      {
        v12 = v3;
        v13 = 2;
        v11 = 0;
      }
      *v12 = v13;
      if ( v11 )
        goto LABEL_23;
      goto LABEL_28;
    case 2:
      v12 = v3;
      v13 = 2;
      v7 = (unsigned __int8 *)(a1 + 6108);
      if ( !FIELD_U8(a1, 6108) )
        goto LABEL_28;
LABEL_23:
      v20 = 0;
      while ( 1 )
      {
        if ( !*(_BYTE *)(sub_6073AFA4(a1, v20) + 7400) )
        {
          v21 = sub_6073AFA4(a1, v20);
          CurrentState = StateMgr__getCurrentState((StateMgr *)(FIELD_U32(v21, 7396) + 6084));
          v23 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
          result = (*(int (__fastcall **)(int *))(dword_60CBDD60 + 8))(&dword_60CBDD60);
          if ( v23 != result )
            break;
        }
        if ( ++v20 >= (unsigned int)*v7 )
        {
          v12 = a5;
          v13 = (unsigned __int8)*a5;
LABEL_28:
          *v12 = v13 + 1;
          return v13 + 1;
        }
      }
      return result;
    case 3:
      v14 = FIELD_U16(a1, 6100);
      v5 = (_WORD *)(a1 + 6100);
      v4 = v14;
      if ( v14 )
      {
LABEL_13:
        result = v4 - 1;
        *v5 = result;
      }
      else
      {
        result = 4;
LABEL_30:
        *v3 = result;
      }
      return result;
    case 4:
      v15 = (unsigned __int8 *)(a1 + 6108);
      if ( !FIELD_U8(a1, 6108) )
      {
        v19 = v3;
        result = 5;
        goto LABEL_32;
      }
      v16 = 0;
      v17 = (_BYTE *)(a1 + 6137);
      while ( 1 )
      {
        v18 = v16;
        if ( *(unsigned __int8 *)(sub_6073AFA4(a1, v16) + 7392) == (unsigned __int8)*v17 )
          break;
        if ( ++v16 >= (unsigned int)*v15 )
        {
          v19 = a5;
          result = (unsigned __int8)*a5 + 1;
LABEL_32:
          FIELD_U16(a1, 6100) = 80;
          *v19 = result;
          return result;
        }
      }
      if ( *(_BYTE *)(sub_6073AFA4(a1, v16) + 7400) )
        goto LABEL_44;
      v24 = sub_6073AFA4(a1, v16);
      v25 = *v15;
      v26 = FIELD_U8(v24, 7392);
      v27 = sub_6073AFA4(a1, v18) + 7396;
      v28 = StateMgr__getCurrentState((StateMgr *)(*(_DWORD *)v27 + 6084));
      v29 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v28, 0x0) + 2))(v28);
      v30 = (*(int (**)(void))(dword_60CBDE20 + 8))();
      if ( v25 == 3 || v26 != v25 - 1 )
      {
        if ( v29 == v30 )
          goto LABEL_43;
        v33 = *(_BYTE **)v27;
        v33[6800] = 0;
        v33[6802] = 1;
        v33[6808] = 0;
        v32 = (StateMgr *)(v33 + 6084);
      }
      else
      {
        if ( v29 == v30 )
          goto LABEL_43;
        v31 = *(_BYTE **)v27;
        v31[6800] = 1;
        v31[6802] = 1;
        v31[6808] = 0;
        v32 = (StateMgr *)(v31 + 6084);
      }
      StateMgr__changeState(v32, (StateBase *)&dword_60CBDE20);
LABEL_43:
      *a5 = 3;
      FIELD_U16(a1, 6100) = 20;
LABEL_44:
      result = (unsigned __int8)*v17 + 1;
      *v17 = result;
      return result;
    case 5:
      result = a1 + 6100;
      if ( FIELD_U16(a1, 6100) )
      {
        *(_WORD *)result = FIELD_U16(a1, 6100) - 1;
      }
      else
      {
        result = 6112;
        FIELD_U8(a1, 6112) = 1;
      }
      return result;
    default:
      return result;
  }
}
