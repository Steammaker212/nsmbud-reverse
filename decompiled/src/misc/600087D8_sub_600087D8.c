/* sub_600087D8
 * address: 0x600087D8   size: 420   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_600087D8(void *a1)
{
  int v2; // r6
  int v3; // r7
  int v4; // r1
  int v5; // r2
  int v6; // r0
  _DWORD *v7; // r6
  int v8; // r7
  Actor *v9; // r5
  int v10; // r0
  int v11; // r1
  int v12; // r0
  signed int result; // r0
  _DWORD *v14; // r5
  int v15; // r6
  _DWORD *v16; // r4

  v2 = 0;
  sub_60007858((int)a1, 0);
  v3 = *((_DWORD *)a1 + 9);
  if ( v3 )
  {
    do
    {
      v4 = *((_DWORD *)a1 + 7);
      v5 = *((_DWORD *)a1 + 8);
      if ( v2 + v5 >= v4 )
        v5 -= v4;
      v6 = sub_600082CC(a1, (ActorBuildInfo *)(*((_DWORD *)a1 + 6) + 44 * (v2 + v5)), 0);
      if ( v6 )
      {
        sead__ListNode__insertFront((sead_ListNode *)a1 + 2865, (sead_ListNode *)(*((_DWORD *)a1 + 5733) + v6));
        ++*((_DWORD *)a1 + 5732);
      }
      ++v2;
    }
    while ( v3 != v2 );
  }
  *((_DWORD *)a1 + 8) = 0;
  *((_DWORD *)a1 + 9) = 0;
  sub_60008608((sead_ListNode *)a1);
  v7 = *((_DWORD **)a1 + 5739);
  if ( v7 != (_DWORD *)((char *)a1 + 22952) )
  {
    v8 = *((_DWORD *)a1 + 5741);
    v9 = (Actor *)((char *)v7 - v8);
    do
    {
      v7 = (_DWORD *)v7[1];
      if ( FIELD_U8(v9, 0x13) )
        goto LABEL_14;
      v10 = (*(int (__fastcall **)(Actor *))(FIELD_U32(v9, 0x0) + 28))(v9);
      v11 = 0;
      if ( v10 == 1 )
      {
        v12 = (*(int (__fastcall **)(Actor *))(FIELD_U32(v9, 0x0) + 32))(v9);
        v11 = 2;
        if ( !v12 )
        {
          v11 = 1;
          FIELD_U8(v9, 0x13) = 1;
        }
      }
      (*(void (__fastcall **)(Actor *, int))(FIELD_U32(v9, 0x0) + 36))(v9, v11);
      if ( FIELD_U8(v9, 0x13) )
LABEL_14:
        sub_60007FF0((sead_ListNode *)a1, v9);
      v9 = (Actor *)((char *)v7 - v8);
    }
    while ( (char *)v7 - v8 != (char *)a1 - v8 + 22952 );
  }
  v14 = (char *)a1 + 25076;
  result = *((_DWORD *)a1 + 6269);
  if ( result >= 1 )
  {
    v15 = 4 * result;
    v16 = *((_DWORD **)a1 + 6271);
    do
    {
      if ( !*(_BYTE *)(*v16 + 19) )
        (*(void (__fastcall **)(_DWORD))(*(_DWORD *)*v16 + 40))(*v16);
      v15 -= 4;
      ++v16;
    }
    while ( v15 );
    *v14 = 0;
    return 0;
  }
  return result;
}
