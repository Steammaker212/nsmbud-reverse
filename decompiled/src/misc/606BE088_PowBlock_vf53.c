/* PowBlock_vf53
 * address: 0x606BE088   size: 536   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall PowBlock_vf53(_DWORD *a1)
{
  float v2; // s0
  StateMethodExecuter *result; // r0
  unsigned __int8 *v4; // r5
  int v5; // r1
  int v6; // r6
  float v7; // s16
  StateMgr *v8; // r0
  int v9; // r1
  int v10; // r1
  int v11; // r1
  int v12; // r1
  int v13; // r1

  sub_605C9D04((int)a1);
  sub_605CC4D8((int)a1, v2);
  result = (StateMethodExecuter *)sub_605CC878((int)a1);
  v4 = (unsigned __int8 *)result;
  if ( result )
  {
    v5 = 939524096;
    v6 = 0;
    if ( !FIELD_U32(result + (6) * 12, 0x8) )
      v5 = -939524096;
    a1[40] += v5;
    v7 = *(float *)&FIELD_U32(result + (9) * 12, 0x0) - *(float *)&FIELD_U32(result + (48) * 12, 0x8);
    if ( v7 < 0.0 )
      v6 = 1;
    if ( (float)(*(float *)&FIELD_U32(result + (9) * 12, 0x4) - *(float *)&FIELD_U32(result + (49) * 12, 0x0)) > 0.0 && (a1[718] & 0x10400) == 0x400
      || sub_605C9ACC((int)a1, 2) == 1 )
    {
      a1[20] = v6 ^ 1;
      a1[1537] = 16;
      v8 = (StateMgr *)(a1 + 1521);
      return StateMgr__changeState(v8, (StateBase *)&unk_60CBA6EC);
    }
    result = (StateMethodExecuter *)v4[1217];
    if ( ((unsigned __int8)result & 0x20) == 0 )
    {
      result = (StateMethodExecuter *)v4[6900];
      if ( ((unsigned __int8)result & 0x60) == 0 )
      {
        result = (StateMethodExecuter *)v4[6912];
        if ( ((unsigned __int8)result & 0x60) == 0 )
        {
          if ( FIELD_U8(dword_60CC6D8C, 17) )
          {
            result = (StateMethodExecuter *)a1[718];
            v9 = 0x40000;
            if ( v7 < 0.0 )
              v9 = 0x80000;
            if ( ((unsigned int)result & v9) != 0 )
              goto LABEL_24;
            v10 = 0x400000;
            if ( v7 < 0.0 )
              v10 = 0x800000;
            if ( ((unsigned int)result & v10) != 0 )
            {
LABEL_24:
              v11 = 0x10000000;
              if ( v7 < 0.0 )
                v11 = 0x20000000;
              if ( ((unsigned int)result & v11) == 0 )
              {
                a1[20] = v6 ^ 1;
                a1[1537] = 16;
                v8 = (StateMgr *)(a1 + 1521);
                return StateMgr__changeState(v8, (StateBase *)&unk_60CBA6EC);
              }
            }
          }
          else
          {
            v12 = a1[20];
            result = (StateMethodExecuter *)(a1 + 162);
            if ( (a1[((v12 + 18) >> 5) + 718] & (1 << ((v12 + 18) & 0x1F))) != 0
              || ((int)*(&FIELD_U32(result + (185) * 12, 0x4) + ((v12 + 22) >> 5)) & (1 << ((v12 + 22) & 0x1F))) != 0 )
            {
              v13 = v12 + 28;
              result = *((StateMethodExecuter **)&FIELD_U32(result + (185) * 12, 0x4) + (v13 >> 5));
              if ( ((unsigned int)result & (1 << (v13 & 0x1F))) == 0 )
              {
                a1[20] = v6 ^ 1;
                a1[1537] = 16;
                v8 = (StateMgr *)(a1 + 1521);
                return StateMgr__changeState(v8, (StateBase *)&unk_60CBA6EC);
              }
            }
          }
        }
      }
    }
  }
  return result;
}
