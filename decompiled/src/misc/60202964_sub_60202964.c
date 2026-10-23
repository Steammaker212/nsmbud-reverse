/* sub_60202964
 * address: 0x60202964   size: 380   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_60202964(int a1)
{
  int *v2; // r0
  int *v3; // r5
  float v4; // r1
  int v5; // r2
  int v6; // r6
  int v7; // r0
  StateMethodExecuter *result; // r0
  int a5; // [sp+0h] [bp-30h] BYREF
  float v10; // [sp+4h] [bp-2Ch]
  int v11; // [sp+8h] [bp-28h]
  signed int v12; // [sp+10h] [bp-20h] BYREF
  signed int v13; // [sp+14h] [bp-1Ch] BYREF

  v13 = (int)(float)((float)(2147500000.0 * (float)((float)((float)(180.0 * 536870000.0) / 2147500000.0) + -10.0))
                   / 180.0);
  v12 = (int)(float)((float)((float)((float)((float)(180.0 * 83886000.0) / 2147500000.0) + -1.0) * 2147500000.0) / 180.0);
  v2 = (int *)sub_601CF9C0(dword_60C8AEF0);
  v3 = v2;
  if ( v2 )
  {
    v4 = *((float *)v2 + 21);
    v5 = v2[22];
    a5 = v2[20];
    v10 = v4;
    v11 = v5;
    v6 = sub_608332B0(a1 + 80, &a5);
    sub_6000F7B8(*(float *)&a5 - FIELD_F32(a1, 80), v10 - FIELD_F32(a1, 84));
  }
  else
  {
    v6 = 0;
  }
  v7 = FIELD_U32(a1, 572);
  if ( v7 )
  {
    result = (StateMethodExecuter *)(v7 - 1);
    FIELD_U32(a1, 572) = result;
    if ( !v3 )
      return result;
  }
  else
  {
    FIELD_U32(a1, 552) = v6;
    sub_608322C0((int *)(a1 + 180), (int *)(a1 + 552), &v13, &v12);
    *(float *)&a5 = 1.5046e-36;
    result = (StateMethodExecuter *)moveValueTo((int *)(a1 + 176), (int *)(a1 + 548), &a5);
    if ( !v3 )
      return result;
  }
  result = (StateMethodExecuter *)(*(int (__fastcall **)(int *))(*v3 + 68))(v3);
  if ( result == (StateMethodExecuter *)1 )
  {
    result = *(StateMethodExecuter **)(a1 + 180);
    if ( result == *(StateMethodExecuter **)(a1 + 552) )
    {
      (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
      return StateMgr__changeState((StateMgr *)(a1 + 284), &stru_60C8C4B8);
    }
  }
  return result;
}
