/* sub_600D2AD8
 * address: 0x600D2AD8   size: 464   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600D2AD8(int a1)
{
  int v2; // r0
  float v3; // s16
  int v4; // r8
  _BYTE *v5; // r10
  int i; // r4
  int result; // r0
  int v8; // r5
  int v9; // r9
  float v10; // s18
  char v11; // r0
  int v12; // r1
  int v13; // r5
  _BYTE *v14; // [sp+4h] [bp-3Ch]

  v2 = ActorMgrRelated_getById(ActorMgr__instance + 27168, FIELD_U32(a1, 6112));
  v14 = (_BYTE *)(v2 + 7652);
  v3 = FIELD_F32(v2, 108);
  v4 = a1 + 6232;
  v5 = (_BYTE *)(a1 + 6122);
  for ( i = 0; i < 4; ++i )
  {
    result = PlayerMgr_instance;
    if ( (FIELD_U16(PlayerMgr_instance, 66) & (unsigned __int16)(1 << i)) == 0 )
      continue;
    result = Player_getActorSlotChecked(PlayerMgr_instance, i);
    v8 = result;
    if ( !result )
      return result;
    v9 = v4 + i;
    v10 = FIELD_F32(result, 108);
    if ( *(_BYTE *)(v4 + i - 8) )
    {
      result = *(char *)(v9 - 4);
      if ( result >= 1 )
      {
        v11 = result - 1;
        *(_BYTE *)(v9 - 4) = v11;
        if ( v11 )
        {
          if ( v3 >= v10 )
            v12 = 7;
          else
            v12 = 6;
          result = sub_60786CCC(v8 + 688, v12);
        }
        else
        {
          v13 = v8 + 688;
          *(_BYTE *)(v9 - 4) = 0;
          sub_60786CF8(v13, 7);
          result = sub_60786CF8(v13, 6);
          *(_BYTE *)(v9 - 8) = 0;
        }
      }
    }
    else
    {
      result = (unsigned __int8)*v5;
      if ( result == 1 )
      {
        result = sub_60769B10(v8);
        if ( result != 1 )
          continue;
      }
      else
      {
        if ( *v5 )
          continue;
        result = (unsigned __int8)*v14;
        if ( *v14 )
          continue;
      }
      if ( v3 >= v10 )
      {
        result = *(_DWORD *)(v4 + 4 * i);
        if ( result )
        {
          sub_60786CCC(v8 + 688, 7);
          *(_DWORD *)(v4 + 4 * i) = 0;
LABEL_23:
          result = 2;
          *(_BYTE *)(v9 - 8) = 1;
          *(_BYTE *)(v9 - 4) = 2;
          continue;
        }
      }
      if ( v3 < v10 )
      {
        result = *(_DWORD *)(v4 + 4 * i);
        if ( result != 1 )
        {
          sub_60786CCC(v8 + 688, 6);
          *(_DWORD *)(v4 + 4 * i) = 1;
          goto LABEL_23;
        }
      }
    }
  }
  return result;
}
