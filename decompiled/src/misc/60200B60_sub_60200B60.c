/* sub_60200B60
 * address: 0x60200B60   size: 356   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60200B60(int a1)
{
  int v2; // r5
  StateBase *v3; // r1
  StateMgr *v4; // r0
  int result; // r0
  bool v6; // zf
  int *v7; // r1
  int v8; // [sp+4h] [bp-14h]

  v2 = dword_60C8996C;
  v8 = sub_6019112C(dword_60C8996C);
  if ( FIELD_U8(v2, 1384) )
  {
    switch ( v8 )
    {
      case 'T':
        FIELD_U8(a1, 372) = 0;
        StateMgr__changeState((StateMgr *)(a1 + 300), (StateBase *)&unk_60C8C284);
        break;
      case 'U':
        FIELD_U8(a1, 372) = 0;
        v3 = (StateBase *)&unk_60C8C2A8;
        v4 = (StateMgr *)(a1 + 300);
        goto LABEL_9;
      case 'V':
        FIELD_U8(a1, 372) = 0;
        v3 = (StateBase *)&unk_60C8C284;
        v4 = (StateMgr *)(a1 + 300);
        goto LABEL_9;
      case 'W':
        FIELD_U8(a1, 372) = 0;
        v4 = (StateMgr *)(a1 + 300);
        if ( FIELD_U8(a1, 373) )
          v3 = (StateBase *)&unk_60C8C2F0;
        else
          v3 = (StateBase *)&unk_60C8C2CC;
LABEL_9:
        StateMgr__changeState(v4, v3);
        (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
        break;
      default:
        break;
    }
  }
  result = v8;
  if ( v8 == 87 )
  {
    result = FIELD_U8(a1, 372);
    if ( FIELD_U8(a1, 372) )
    {
      if ( FIELD_U8(a1, 373) )
        v7 = &dword_60C8C338;
      else
        v7 = &dword_60C8C260;
      return (int)StateMgr__changeState((StateMgr *)(a1 + 300), (StateBase *)v7);
    }
  }
  else if ( v8 != 85 )
  {
    v6 = v8 == 84;
    if ( v8 == 84 )
    {
      result = FIELD_U8(a1, 372);
      v6 = result == 0;
    }
    if ( !v6 )
      return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
  }
  return result;
}
