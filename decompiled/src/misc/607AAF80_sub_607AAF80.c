/* sub_607AAF80
 * address: 0x607AAF80   size: 804   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607AAF80(int a1)
{
  unsigned int *v2; // r2
  int result; // r0
  unsigned int v4; // r5
  unsigned int v5; // r1
  int v6; // r1
  _DWORD *v7; // r5
  int v8; // r2
  StateBase *v9; // r1
  int v10; // r0
  int v11; // r0
  unsigned int v12; // r0
  int v13; // r1
  unsigned int v14; // r0
  int v15; // r1
  int v16; // r1

  sub_607712D4(a1);
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 1104))(a1);
  ((void (__fastcall *)(int))loc_60771D8C)(a1);
  sub_607711C8(a1);
  v2 = (unsigned int *)(a1 + 1224);
  result = FIELD_U32(a1, 6900) & 1;
  v4 = *v2 & 0xFFFFBE3B;
  if ( !result )
    v4 = *v2 | 0x41C4;
  *v2 = v4;
  v5 = FIELD_U32(a1, 1320);
  if ( v5 > 6 || ((1 << v5) & 0x64) == 0 )
  {
    if ( !result )
    {
      v8 = 0;
      v9 = (StateBase *)&unk_60CC4C04;
      v10 = a1;
      return Player_changeState(v10, v9, v8);
    }
    v9 = (StateBase *)&dword_60CC4BBC;
LABEL_35:
    v10 = a1;
    v8 = 1;
    return Player_changeState(v10, v9, v8);
  }
  v7 = (_DWORD *)(a1 + 9940);
  v6 = FIELD_U32(a1, 9940);
  if ( v6 == 1 )
  {
    if ( sub_60786670(a1 + 688) != 1 )
      goto LABEL_25;
    v11 = FIELD_U32(a1, 1320);
    if ( (unsigned int)(v11 - 5) >= 2 )
    {
      if ( v11 != 2 )
        goto LABEL_25;
      v14 = FIELD_U8(a1, 84);
      v15 = 0;
      if ( v14 < 4 )
        v15 = (char)v14;
      if ( *(int *)(EnemyCounterMaybe_instance + 8 * v15 + 104) >= 2 )
      {
LABEL_25:
        if ( (FIELD_U8(a1, 6900) & 1) != 0 )
        {
          result = sub_6075FC38(a1);
          if ( result )
            return result;
          if ( sub_60793184(FIELD_U32(a1, 11360)) < 10.0 || FIELD_F32(a1, 88) == 0.0 )
          {
            result = sub_60793CA8(FIELD_U32(a1, 11360));
            if ( result != 1 )
              return result;
          }
          v9 = (StateBase *)&dword_60CC4BBC;
        }
        else
        {
          if ( sub_60793184(FIELD_U32(a1, 11360)) < 10.0 )
          {
            result = sub_60793CA8(FIELD_U32(a1, 11360));
            if ( result != 1 || FIELD_F32(a1, 124) > 0.0 )
              return result;
          }
          v9 = (StateBase *)&unk_60CC4C04;
        }
        goto LABEL_35;
      }
    }
    else
    {
      v12 = FIELD_U8(a1, 84);
      v13 = 0;
      if ( v12 < 4 )
        v13 = (char)v12;
      if ( *(int *)(EnemyCounterMaybe_instance + 8 * v13 + 136) > 1 )
        goto LABEL_25;
    }
    v16 = FIELD_U32(a1, 80);
    FIELD_U32(a1, 12048) = v16;
    FIELD_U32(a1, 160) = sub_60773F3C(a1, v16);
    *v7 = 0;
    PlayerBase_dispatchVirtual3(a1 + 11356, 33, 0.0);
    return sub_60793114(*(_DWORD **)(a1 + 11360), 0.0);
  }
  if ( !v6 )
  {
    if ( result && sub_6078663C(a1 + 688) == 1 )
    {
      if ( (FIELD_U8(a1, 6902) & 4) != 0 )
      {
        FIELD_U32(a1, 124) = dword_60B0BE5C[5 * (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 152))(a1) + 4];
      }
      else
      {
        (*(void (__fastcall **)(int, int))(*(_DWORD *)a1 + 1120))(a1, 1);
        sub_6076FE18((float *)a1);
      }
      sub_607AFBB0(a1);
    }
    result = sub_60793DA0(FIELD_U32(a1, 11360), 4.0);
    if ( result == 1 )
    {
      SE_PLY_THROW_ICEBALL_ref(a1, 0);
      *v7 = 1;
      result = FIELD_U32(a1, 1224) & 0xFFFBFFFF;
      FIELD_U32(a1, 1224) = result;
    }
  }
  return result;
}
