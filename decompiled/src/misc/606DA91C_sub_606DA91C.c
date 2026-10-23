/* sub_606DA91C
 * address: 0x606DA91C   size: 616   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606DA91C(int a1)
{
  int result; // r0
  _WORD *v3; // r5
  int v4; // r0
  _DWORD *v5; // r6
  unsigned int v6; // r0
  _BYTE *v7; // r5
  int v8; // r0
  StateBase *CurrentState; // r0
  int v10; // r4
  int v11; // r0
  _BYTE *v12; // r5
  int v13; // r1
  unsigned int v14; // r3
  int v15; // r2
  unsigned int v16; // r6
  int v17; // r5

  result = FIELD_U8(a1, 6570);
  if ( result )
    return result;
  v3 = (_WORD *)(a1 + 6544);
  if ( FIELD_U16(a1, 6544) )
    *v3 = FIELD_U16(a1, 6544) - 1;
  v5 = (_DWORD *)(a1 + 6652);
  v4 = FIELD_U32(a1, 6652);
  if ( v4 )
    *v5 = v4 - 1;
  if ( sub_606DCCCC() == 1 )
  {
    *v5 = 60;
    v6 = (unsigned __int16)*v3;
    goto LABEL_9;
  }
  v6 = (unsigned __int16)*v3;
  if ( *v5 )
  {
LABEL_9:
    if ( v6 <= 2 )
      *v3 = 2;
    goto LABEL_11;
  }
  if ( v6 == 1 )
  {
    v11 = FIELD_U32(a1, 6512);
    switch ( v11 )
    {
      case 2:
        v12 = (_BYTE *)(a1 + 6569);
        if ( FIELD_U8(a1, 6569) )
        {
          FIELD_U32(dword_60CC62E4, 108) = 262146;
          if ( FIELD_U8(dword_60CBFA90, 216) )
            sub_603F496C(AreaTask_intance);
          else
            sub_603F48B0(AreaTask_intance);
        }
        goto LABEL_28;
      case 1:
        v12 = (_BYTE *)(a1 + 6569);
        if ( FIELD_U8(a1, 6569) )
        {
LABEL_26:
          sub_603F4998(AreaTask_intance);
LABEL_28:
          if ( *v12 )
          {
            v13 = FIELD_U32(a1, 6524);
            if ( v13 >= 1 )
            {
              v14 = 0;
              v15 = dword_60C99DD4;
              do
              {
                v16 = 0;
                if ( v14 < 5 )
                  v16 = v14;
                v17 = *(_DWORD *)(a1 + 4 * v16 + 6584);
                if ( v17 != 4 )
                {
                  *(_DWORD *)(v15 + 4 * v16 + 740) = v17;
                  FIELD_U32(v15, 760) = 0;
                  v13 = FIELD_U32(a1, 6524);
                }
                ++v14;
              }
              while ( (int)v14 < v13 );
            }
          }
          goto LABEL_11;
        }
        break;
      case 0:
        v12 = (_BYTE *)(a1 + 6569);
        if ( !FIELD_U8(a1, 6569) )
          goto LABEL_26;
        break;
    }
    v12 = (_BYTE *)(a1 + 6569);
    goto LABEL_28;
  }
LABEL_11:
  result = FIELD_U32(a1, 6512);
  if ( result == 1 )
  {
    v7 = (_BYTE *)(a1 + 6560);
    result = FIELD_U8(a1, 6560);
    if ( result != 2 )
    {
      v8 = ActorMgrRelated_getById(ActorMgr__instance + 27168, FIELD_U32(a1, 6496));
      CurrentState = StateMgr__getCurrentState((StateMgr *)(v8 + 6084));
      v10 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
      result = (*(int (**)(void))(dword_60C9D004 + 8))();
      if ( v10 == result )
      {
        result = STRM_BGM_MG_BTL_ref_2(dword_60CC6B68, 2);
        *v7 = 2;
      }
    }
  }
  return result;
}
