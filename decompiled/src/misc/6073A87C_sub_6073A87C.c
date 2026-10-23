/* sub_6073A87C
 * address: 0x6073A87C   size: 784   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_6073A87C(int a1)
{
  unsigned int result; // r0
  _BYTE *v3; // r10
  unsigned __int8 *v4; // r6
  unsigned __int8 *v5; // r9
  int v6; // r7
  unsigned __int8 v7; // r8
  int v8; // r0
  int v9; // r1
  unsigned int v10; // r0
  unsigned __int8 v11; // r6
  unsigned __int8 v12; // r7
  int v13; // r0
  StateBase *CurrentState; // r0
  int v15; // r6
  unsigned __int8 v16; // r6
  _BYTE *v17; // r0
  int v18; // r1
  unsigned __int8 v19; // r1
  float v20; // s0
  _WORD *v21; // [sp+0h] [bp-28h]

  v3 = (_BYTE *)(a1 + 6102);
  result = FIELD_U8(a1, 6102);
  switch ( result )
  {
    case 0u:
      v4 = (unsigned __int8 *)(a1 + 6113);
      result = FIELD_U8(a1, 6113);
      v5 = (unsigned __int8 *)(a1 + 6108);
      if ( result < FIELD_U8(a1, 6108) )
      {
        result = FIELD_U16(a1, 6100);
        if ( FIELD_U16(a1, 6100) )
        {
          FIELD_U16(a1, 6100) = --result;
          if ( !(_WORD)result )
          {
            v6 = 0;
            v7 = 0;
            v21 = (_WORD *)(a1 + 6100);
            while ( 1 )
            {
              v8 = sub_6073AFA4(a1, v7);
              v9 = *v4;
              if ( FIELD_U8(v8, 7392) == v9 )
                break;
              v10 = *v5;
              v6 = ++v7;
              if ( v7 >= v10 )
                goto LABEL_33;
            }
            v17 = (_BYTE *)sub_6073AFA4(a1, v7);
            v18 = a1;
            if ( v7 < 5u )
              v18 = a1 + v6;
            sub_60737E14(v17, FIELD_U8(v18, 6200));
            ++FIELD_U8(a1, 6114);
            v10 = *v5;
            LOBYTE(v9) = *v4;
LABEL_33:
            v19 = v9 + 1;
            *v4 = v19;
            v20 = FIELD_F32(a1, 6116);
            if ( v19 >= v10 )
            {
              *v21 = (unsigned int)(float)(FIELD_F32(a1, 6120) * (float)(360.0 / v20));
              goto LABEL_36;
            }
            result = (unsigned int)(float)((float)(360.0 / (float)v10) / v20);
            *v21 = result;
          }
        }
      }
      break;
    case 1u:
      result = a1 + 6100;
      if ( !FIELD_U16(a1, 6100) )
      {
        if ( !FIELD_U8(a1, 6108) )
        {
          result = 2;
          goto LABEL_37;
        }
        v16 = 0;
        do
          *(_BYTE *)(sub_6073AFA4(a1, v16++) + 7460) = 1;
        while ( v16 < (unsigned int)FIELD_U8(a1, 6108) );
        goto LABEL_36;
      }
      *(_WORD *)result = FIELD_U16(a1, 6100) - 1;
      break;
    case 2u:
      result = FIELD_U8(a1, 6115);
      if ( FIELD_U8(a1, 6115) )
      {
        if ( !FIELD_U8(a1, 6108) )
        {
          result = 3;
          goto LABEL_37;
        }
        v11 = 0;
        do
          *(_BYTE *)(sub_6073AFA4(a1, v11++) + 7461) = 1;
        while ( v11 < (unsigned int)FIELD_U8(a1, 6108) );
        goto LABEL_36;
      }
      break;
    case 3u:
      if ( FIELD_U8(a1, 6108) )
      {
        v12 = 0;
        while ( 1 )
        {
          v13 = sub_6073AFA4(a1, v12);
          CurrentState = StateMgr__getCurrentState((StateMgr *)(v13 + 6084));
          v15 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
          result = (*(int (__fastcall **)(int *))(dword_60CBDEA0 + 8))(&dword_60CBDEA0);
          if ( v15 != result )
            break;
          if ( ++v12 >= (unsigned int)FIELD_U8(a1, 6108) )
          {
LABEL_36:
            result = (unsigned __int8)*v3 + 1;
            goto LABEL_37;
          }
        }
      }
      else
      {
        result = 4;
LABEL_37:
        *v3 = result;
      }
      break;
    case 4u:
      result = FIELD_U8(a1, 6108);
      if ( FIELD_U8(a1, 6108) )
      {
        FIELD_U8(a1, 6111) = 1;
        result = 6111;
      }
      break;
    default:
      return result;
  }
  return result;
}
